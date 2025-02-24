#include "client.h"
#include "ui_client.h"
#include<QMessageBox>
Client::Client(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Client)
    ,ptrtransclient(new Transactions_client())
{
    ui->setupUi(this);

    model =NULL;
}

Client::~Client()
{
    delete ui;
    delete model;
    delete ptrtransclient;
}

void Client::on_pushButton_2_clicked()
{
    ptrtransclient->show();
}


void Client::on_pushButton_clicked()
{

    QString cin = ui->lineEdit->text().trimmed();
    QString code = ui->lineEdit_2->text().trimmed();

    // Vérifier si les champs sont remplis
    if (cin.isEmpty() || code.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir à la fois le CIN et le code !");
        return;
    }


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
    query.prepare("SELECT id_compte, code, type, solde FROM Compte WHERE cin = :cin AND code = :code");


    query.bindValue(":cin", cin);
    query.bindValue(":code", code);

    if (!query.exec()) {
        qDebug() << "Erreur dans l'exécution de la requête : " << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête !");
        db.close();
        return;
    }


    if (query.size() == 0) {
        QMessageBox::information(this, "Aucun résultat", "Aucun compte trouvé pour le CIN et le code spécifiés.");
        db.close();
        return;
    }


    if (model == NULL) {
        model = new QSqlQueryModel();
    }


    model->setQuery(std::move(query));
    ui->tableView->setModel(model);


    ui->tableView->setColumnWidth(0, 80);
    ui->tableView->setColumnWidth(1, 100);
    ui->tableView->setColumnWidth(2, 150);
    ui->tableView->setColumnWidth(3, 180);

    db.close();  // Fermer la connexion à la base de données
}

void Client::on_pushButton_3_clicked()
{

    QString cin = ui->lineEdit_3->text().trimmed();


    if (cin.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un CIN !");
        return;
    }

    // Se connecter à la base de données
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
    query.prepare("SELECT id_compte, code, type, solde FROM Compte WHERE cin = :cin");


    query.bindValue(":cin", cin);

    if (!query.exec()) {
        qDebug() << "Erreur dans l'exécution de la requête : " << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête !");
        db.close();
        return;
    }


    if (query.size() == 0) {
        QMessageBox::information(this, "Aucun résultat", "Aucun compte trouvé pour le CIN spécifié.");
        db.close();
        return;
    }


    if (model == NULL) {
        model = new QSqlQueryModel();
    }

    // Appliquer la requête au modèle
    model->setQuery(std::move(query));
    ui->tableView->setModel(model);


    ui->tableView->setColumnWidth(0, 80);
    ui->tableView->setColumnWidth(1, 100);
    ui->tableView->setColumnWidth(2, 150);
    ui->tableView->setColumnWidth(3, 180);

    db.close();
}

void Client::on_pushButton_5_clicked()
{
    ui->lineEdit_3->clear();
}


void Client::on_pushButton_4_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

