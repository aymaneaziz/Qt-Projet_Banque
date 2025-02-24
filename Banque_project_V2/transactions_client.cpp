#include "transactions_client.h"
#include "ui_transactions_client.h"
#include<QMessageBox>
Transactions_client::Transactions_client(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Transactions_client)
{
    ui->setupUi(this);
    model =NULL;
}

Transactions_client::~Transactions_client()
{
    delete ui;
    delete model;
}

void Transactions_client::on_pushButton_2_clicked()
{

    QString code = ui->lineEdit->text().trimmed();
    double montant = ui->doubleSpinBox->value();
    QString Type_compte = ui->comboBox->currentText().trimmed();


    if (montant <= 0) {
        QMessageBox::warning(this, "Attention", "Le montant doit être supérieur à 0 !");
        return;
    }


    QString type_transaction;
    if (ui->radioButton->isChecked()) {
        type_transaction = "depot";
    } else if (ui->radioButton_2->isChecked()) {
        type_transaction = "retrait";
    } else {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner le type de transaction !");
        return;
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

    if (!db.open()) {
        qDebug() << "Erreur de connexion à la base de données :" << db.lastError().text();
        QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
        return;
    }

    QSqlQuery query(db);


    query.prepare("SELECT id_compte, solde FROM Compte WHERE code = :code AND type = :type");
    query.bindValue(":code", code);
    query.bindValue(":type", Type_compte);

    if (!query.exec() || !query.next()) {
        qDebug() << "Erreur dans SELECT :" << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Compte introuvable  !");
        db.close();
        return;
    }

    int id_compte = query.value(0).toInt();
    double solde_actuel = query.value(1).toDouble();


    if (type_transaction == "retrait" && montant > solde_actuel) {
        QMessageBox::warning(this, "Attention", "Solde insuffisant pour un retrait !");
        db.close();
        return;
    }


    QString operation = (type_transaction == "depot") ? "+" : "-";
    query.prepare("UPDATE Compte SET solde = solde " + operation + " :montant WHERE id_compte = :id_compte");
    query.bindValue(":montant", montant);
    query.bindValue(":id_compte", id_compte);

    if (!query.exec()) {
        qDebug() << "Erreur dans UPDATE :" << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Erreur lors de la mise à jour du solde !");
        db.close();
        return;
    }


    query.prepare("INSERT INTO \"Transaction\" (montant, id_compte) VALUES (:montant, :id_compte)");
    query.bindValue(":montant", montant);
    query.bindValue(":id_compte", id_compte);

    if (!query.exec()) {
        qDebug() << "Erreur dans INSERT :" << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'ajout de la transaction !");
        db.close();
        return;
    }

    QMessageBox::information(this, "Succès", "Transaction effectuée avec succès !");
    db.close();
}



void Transactions_client::on_radioButton_clicked()
{
    ui->label->setText("Dépot  :");
}


void Transactions_client::on_radioButton_2_clicked()
{
    ui->label->setText("Retrait  :");
}


void Transactions_client::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

    if (!db.open()) {
        qDebug() << "Erreur de connexion à la base de données : " << db.lastError().text();
        QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
        return;
    } else {
        qDebug() << "Connexion à la base de données réussie !";
    }


    QSqlQuery query(db);
    query.prepare("SELECT id_transaction, montant, id_compte FROM \"Transaction\"");

    if (!query.exec()) {
        qDebug() << "Erreur dans l'exécution de la requête : " << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête !");
        db.close();
        return;
    }


    if (model == NULL) {
        model = new QSqlQueryModel();
    }

    model->setQuery(std::move(query));
    ui->tableView->setModel(model);


    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 200);
    ui->tableView->setColumnWidth(2, 142);

    db.close();
}

