#include "agences.h"
#include "ui_agences.h"
#include "QMessageBox"
#include "login.h"

Agences::Agences(QWidget *parent,Login *ptrlogin)
    : QDialog(parent)
    , ui(new Ui::Agences)
    ,ptrtransactions(new Transactions()),
    ptrlogin(ptrlogin)

{
    ui->setupUi(this);
    model =NULL;

}

Agences::~Agences()
{
    delete ui;
    delete ptrtransactions;
    delete ptrlogin;
    delete model;
}

void Agences::on_pushButton_20_clicked()
{



      ptrtransactions->show();


}

void Agences::affiche_nom_banque(){

    QString banque_name = ptrlogin->user;


    if (!banque_name.isEmpty()) {
        ui->label_2->setText("Banque " + banque_name);
    } else {
        qDebug() << "Le nom de la banque est vide.";
        ui->label_2->setText("Banque non spécifiée");
    }

}
void Agences::on_tabWidget_currentChanged(int index)
{
    affiche_nom_banque();


}


void Agences::on_pushButton_8_clicked()
{    QString cin, nom, prenom, adress;
    cin = ui->lineEdit_4->text().trimmed();
    nom = ui->lineEdit_5->text().trimmed();
    prenom = ui->lineEdit_6->text().trimmed();
    adress = ui->lineEdit_7->text().trimmed();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");


    if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || adress.isEmpty()) {
        QMessageBox::information(this, "Attention", "Veuillez remplir tous les champs !");
        return;
    }


    if (!db.open()) {
        qDebug() << "Database error: " << db.lastError().text();
        QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
        return;
    } else {
        qDebug() << "Database connected successfully!";
    }


    QSqlQuery query(db);
    query.prepare("INSERT INTO Client (nom, prenom, cin, adresse, id_login) "
                  "VALUES (:nom, :prenom, :cin, :adresse, :id_login)");
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":cin", cin);
    query.bindValue(":adresse", adress);
    query.bindValue(":id_login", ptrlogin->id_login);


    if (!query.exec()) {
        qDebug() << "Query execution error:" << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Le CIN doit être unique !");
        db.close();
        return;
    }


    QMessageBox::information(this, "Réussite", "Insertion réussie !");
    qDebug() << "Client inséré avec succès.";
    db.close();
         ui->lineEdit_4->clear();
        ui->lineEdit_5->clear();
        ui->lineEdit_6->clear();
        ui->lineEdit_7->clear();

}


void Agences::on_pushButton_18_clicked()
{
    int numclient = ui->spinBox_2->value();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

    if (!db.open()) {
        qDebug() << "Database error: " << db.lastError().text();
        QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
        return;
    } else {
        qDebug() << "Database connected successfully!";
    }
    QSqlQuery query(db);
    query.prepare("select id_client , nom ,prenom ,cin ,adresse from Client where id_client =:id_client AND id_login=:id_login  ");
    query.bindValue(":id_client", numclient);
    query.bindValue(":id_login", ptrlogin->id_login);

    if (!query.exec()) {
        qDebug() << "Query execution error:" << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête !");
        db.close();
        return;
    }
    if (!query.next()) {
        QMessageBox::information(this, "Aucun résultat", "Aucun client trouvé pour cet ID !");
        db.close();
        return;
    }

    if(model == NULL){

        model=new QSqlQueryModel();

    }
    model->setQuery(std::move(query));
    ui->tableView_3->setModel(model);
    ui->tableView_3->setColumnWidth(0,85);
    ui->tableView_3->setColumnWidth(1,100);
    ui->tableView_3->setColumnWidth(2,100);
    ui->tableView_3->setColumnWidth(3,100);
    ui->tableView_3->setColumnWidth(4,100);

        db.close();
    }





    void Agences::on_pushButton_22_clicked()
    {

        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        } else {
            qDebug() << "Database connected successfully!";
        }
        QSqlQuery query(db);
        query.prepare("select id_client , nom ,prenom ,cin ,adresse from Client where id_login=:id_login  ");

        query.bindValue(":id_login", ptrlogin->id_login);

        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête !");
            db.close();
            return;
        }

        if(model == NULL){

            model=new QSqlQueryModel();

        }
        model->setQuery(std::move(query));
        ui->tableView_3->setModel(model);
        ui->tableView_3->setColumnWidth(0,85);
        ui->tableView_3->setColumnWidth(1,100);
        ui->tableView_3->setColumnWidth(2,100);
        ui->tableView_3->setColumnWidth(3,100);
        ui->tableView_3->setColumnWidth(4,100);

        db.close();
    }



 void Agences::on_tableView_3_clicked(const QModelIndex &index)
    {
        if (index.isValid()) {

            int row = index.row();


            QString cin = model->data(model->index(row, 3)).toString();  // Colonne CIN
            QString nom = model->data(model->index(row, 1)).toString();  // Colonne Nom
            QString prenom = model->data(model->index(row, 2)).toString();  // Colonne Prénom
            QString adresse = model->data(model->index(row, 4)).toString();  // Colonne Adresse
            int idClient = model->data(model->index(row, 0)).toInt(); // Récupérer l'ID client depuis la colonne 0 (ou la colonne correspondante)


            ui->lineEdit_4->setText(cin);
            ui->lineEdit_5->setText(nom);
            ui->lineEdit_6->setText(prenom);
            ui->lineEdit_7->setText(adresse);
            ui->spinBox_2->setValue(idClient);
        }
    }


void Agences::on_pushButton_9_clicked()
    {
        QString cin = ui->lineEdit_4->text().trimmed();
        QString nom = ui->lineEdit_5->text().trimmed();
        QString prenom = ui->lineEdit_6->text().trimmed();
        QString adress = ui->lineEdit_7->text().trimmed();

        int numclient = ui->spinBox_2->value();

        if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || adress.isEmpty()) {
            QMessageBox::information(this, "Attention", "Veuillez remplir tous les champs !");
            return;
        }

        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        } else {
            qDebug() << "Database connected successfully!";
        }


        QSqlQuery query(db);
        query.prepare("UPDATE Client SET nom = :nom, prenom = :prenom, cin = :cin, adresse = :adresse WHERE id_client = :id_client AND id_login = :id_login");
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":cin", cin);
        query.bindValue(":adresse", adress);
        query.bindValue(":id_client", numclient);
        query.bindValue(":id_login", ptrlogin->id_login);

        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de la mise à jour !");
            db.close();
            return;
        }

        QMessageBox::information(this, "Réussite", "Mise à jour réussie !");
        ui->lineEdit_4->clear();
        ui->lineEdit_5->clear();
        ui->lineEdit_6->clear();
        ui->lineEdit_7->clear();
        db.close();
    }


void Agences::on_pushButton_24_clicked()
    {
        ui->lineEdit_4->clear();
        ui->lineEdit_5->clear();
        ui->lineEdit_6->clear();
        ui->lineEdit_7->clear();
    }


    void Agences::on_pushButton_10_clicked()
    {
        int numclient = ui->spinBox_2->value();


        if (numclient == 0) {
            QMessageBox::information(this, "Attention", "Veuillez sélectionner un client !");
            return;
        }


        int ret = QMessageBox::question(this, "Confirmation",
                                        "Êtes-vous sûr de vouloir supprimer ce client et tous ses comptes ?",
                                        QMessageBox::Yes | QMessageBox::No);
        if (ret == QMessageBox::No) {
            return;
        }


        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        } else {
            qDebug() << "Database connected successfully!";
        }


        QSqlQuery deleteAccountsQuery(db);
        deleteAccountsQuery.prepare("DELETE FROM Compte WHERE id_client = :id_client");
        deleteAccountsQuery.bindValue(":id_client", numclient);

        if (!deleteAccountsQuery.exec()) {
            qDebug() << "Error deleting accounts: " << deleteAccountsQuery.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de la suppression des comptes !");
            db.close();
            return;
        }


        QSqlQuery deleteClientQuery(db);
        deleteClientQuery.prepare("DELETE FROM Client WHERE id_client = :id_client AND id_login = :id_login");
        deleteClientQuery.bindValue(":id_client", numclient);
        deleteClientQuery.bindValue(":id_login", ptrlogin->id_login);

        if (!deleteClientQuery.exec()) {
            qDebug() << "Error deleting client: " << deleteClientQuery.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de la suppression du client !");
            db.close();
            return;
        }


        QMessageBox::information(this, "Réussite", "Client et ses comptes supprimés avec succès !");
        db.close();


        ui->lineEdit_4->clear();
        ui->lineEdit_5->clear();
        ui->lineEdit_6->clear();
        ui->lineEdit_7->clear();
    }



    void Agences::on_pushButton_25_clicked()
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        } else {
            qDebug() << "Database connected successfully!";
        }

        QSqlQuery query(db);

        query.prepare("SELECT * FROM Compte WHERE id_client IN (SELECT id_client FROM Client WHERE id_login = :id_login)");

        query.bindValue(":id_login", ptrlogin->id_login);

        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête !");
            db.close();
            return;
        }

        if (model == NULL) {
            model = new QSqlQueryModel();
        }

        model->setQuery(std::move(query));
        ui->tableView_4->setModel(model);
        ui->tableView_4->setColumnWidth(0, 100);
        ui->tableView_4->setColumnWidth(1, 100);
        ui->tableView_4->setColumnWidth(2, 100);
        ui->tableView_4->setColumnWidth(3, 100);
        ui->tableView_4->setColumnWidth(4, 100);

        db.close();
    }



    void Agences::on_pushButton_19_clicked()
    {
        QString typecompte = ui->comboBox->currentText();
        QString code = ui->lineEdit_21->text().trimmed();
        QString cin = ui->lineEdit_20->text();
        double solde = ui->doubleSpinBox_2->value();
        double da = ui->doubleSpinBox_3->value();
        double ti = ui->doubleSpinBox_4->value();

        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (cin.isEmpty()) {
            QMessageBox::information(this, "Attention", "Veuillez remplir tous les champs !");
            return;
        }

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        } else {
            qDebug() << "Database connected successfully!";
        }

        QSqlQuery query(db);

        // Récupération de l'id_client
        query.prepare("SELECT id_client FROM Client WHERE cin = :cin");
        query.bindValue(":cin", cin);
        if (!query.exec() || !query.next()) {
            qDebug() << "Query error (id_client): " << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "CIN non trouvé !");
            db.close();
            return;
        }
        int id_client = query.value(0).toInt();

        // Insertion dans la table Compte
        query.prepare("INSERT INTO Compte (code, type, cin, solde, id_client) VALUES (:code, :type, :cin, :solde, :id_client)");
        query.bindValue(":code", code);
        query.bindValue(":type", typecompte);
        query.bindValue(":cin", cin);
        query.bindValue(":solde", solde);
        query.bindValue(":id_client", id_client);

        if (!query.exec()) {
            qDebug() << "Query execution error (Compte): " << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Insertion dans Compte échouée !");
            db.close();
            return;
        }

        QMessageBox::information(this, "Réussite", "Insertion réussie dans Compte !");
        qDebug() << "Compte inséré avec succès.";

        // Récupération de l'id_compte
        query.prepare("SELECT id_compte FROM Compte WHERE code = :code AND id_client = :id_client");
        query.bindValue(":code", code);
        query.bindValue(":id_client", id_client);
        if (!query.exec() || !query.next()) {
            qDebug() << "Query error (id_compte): " << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de récupérer l'ID du compte !");
            db.close();
            return;
        }
        int id_compte = query.value(0).toInt();

        // Insertion spécifique selon le type de compte
        if (typecompte == "Epargne") {
            query.prepare("INSERT INTO CompteEpargne (id_compte, taux_interet) VALUES (:id_compte, :taux_interet)");
            query.bindValue(":id_compte", id_compte);
            query.bindValue(":taux_interet", ti);

            if (!query.exec()) {
                qDebug() << "Query execution error (CompteEpargne): " << query.lastError().text();
                QMessageBox::critical(this, "Erreur", "Insertion dans CompteEpargne échouée !");
                db.close();
                return;
            }

        }

        if (typecompte == "Courant") {
            query.prepare("INSERT INTO CompteCourant (id_compte, decouvert_autorise) VALUES (:id_compte, :decouvert_autorise)");
            query.bindValue(":id_compte", id_compte);
            query.bindValue(":decouvert_autorise", da);

            if (!query.exec()) {
                qDebug() << "Query execution error (CompteCourant): " << query.lastError().text();
                QMessageBox::critical(this, "Erreur", "Insertion dans CompteCourant échouée !");
                db.close();
                return;
            }

        }

        db.close();
    }

    void Agences::on_pushButton_26_clicked()
    {
        ui->comboBox->setCurrentIndex(0);
        ui->lineEdit_21->clear();
        ui->lineEdit_20->clear();
        ui->doubleSpinBox_2->setValue(0.0);
        ui->doubleSpinBox_3->setValue(0.0);
        ui->doubleSpinBox_4->setValue(0.0);

    }


    void Agences::on_pushButton_21_clicked()
    {
        int numcompte = ui->spinBox_3->value();


        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        } else {
            qDebug() << "Database connected successfully!";
        }

        // Préparer la requête SQL
        QSqlQuery query(db);
        query.prepare(
            "SELECT id_compte, code, type, cin, solde "
            "FROM Compte "
            "WHERE id_compte = :id_compte AND id_client IN "
            "(SELECT id_client FROM Client WHERE id_login = :id_login)"
            );
        query.bindValue(":id_compte", numcompte);
        query.bindValue(":id_login", ptrlogin->id_login);


        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête !");
            db.close();
            return;
        }


        if (!query.next()) {
            QMessageBox::information(this, "Aucun résultat", "Aucun compte trouvé pour cet ID !");
            db.close();
            return;
        }


        if (model == nullptr) {
            model = new QSqlQueryModel(this);
        }
        model->setQuery(std::move(query));


        ui->tableView_4->setModel(model);


        ui->tableView_4->setColumnWidth(0, 85);
        ui->tableView_4->setColumnWidth(1, 100);
        ui->tableView_4->setColumnWidth(2, 100);
        ui->tableView_4->setColumnWidth(3, 100);
        ui->tableView_4->setColumnWidth(4, 100);


        db.close();
    }

    void Agences::on_pushButton_2_clicked()
    {
        // Récupérer les valeurs des champs de saisie
        QString nom_agence = ui->lineEdit->text().trimmed();
        QString ville_agence = ui->lineEdit_2->text().trimmed();
        int id_banque = ptrlogin->id_login;

        // Vérifier que tous les champs sont remplis
        if (nom_agence.isEmpty() || ville_agence.isEmpty()) {
            QMessageBox::warning(this, "Attention", "Veuillez remplir tous les champs !");
            return;
        }

        // Configurer la base de données
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        } else {
            qDebug() << "Database connected successfully!";
        }

        // Préparer la requête d'insertion
        QSqlQuery query(db);
        query.prepare("INSERT INTO Agences (nom_agence, ville_banque, id_login) "
                      "VALUES (:nom_agence, :ville_banque, :id_login)");
        query.bindValue(":nom_agence", nom_agence);
        query.bindValue(":ville_banque", ville_agence);
        query.bindValue(":id_login", id_banque);

        // Exécuter la requête
        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'ajout de l'agence !");
            db.close();
            return;
        }

        // Message de succès
        QMessageBox::information(this, "Succès", "Agence ajoutée avec succès !");

        // Réinitialiser les champs de saisie
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();

        db.close(); // Fermer la connexion à la base de données
    }



    void Agences::on_pushButton_27_clicked()
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        } else {
            qDebug() << "Database connected successfully!";
        }

        QSqlQuery query(db);

        query.prepare("SELECT id_agence,nom_agence,ville_banque FROM Agences WHERE id_login =:id_login");

        query.bindValue(":id_login", ptrlogin->id_login);

        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête !");
            db.close();
            return;
        }

        if (model == NULL) {
            model = new QSqlQueryModel();
        }

        model->setQuery(std::move(query));
        ui->tableView->setModel(model);
        ui->tableView->setColumnWidth(0, 150);
        ui->tableView->setColumnWidth(1, 165);
        ui->tableView->setColumnWidth(2, 165);


        db.close();
    }







    void Agences::on_tableView_clicked(const QModelIndex &index)
    {
        if (index.isValid()) {

            int row = index.row();




            QString nom_agence = model->data(model->index(row, 1)).toString();
            QString ville_agence = model->data(model->index(row, 2)).toString();
            int idagence = model->data(model->index(row, 0)).toInt();


            ui->lineEdit->setText(nom_agence);
           ui->lineEdit_2->setText(ville_agence);

            ui->spinBox->setValue(idagence);
        }
    }
    void Agences::loadAgences()
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        }

        QSqlQuery query(db);
        query.prepare("SELECT id_agence, nom_agence, ville_banque FROM Agences WHERE id_login = :id_login");
        query.bindValue(":id_login", ptrlogin->id_login);

        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de charger les données !");
            db.close();
            return;
        }

        if (model == nullptr) {
            model = new QSqlQueryModel(this);
        }

        model->setQuery(std::move(query));
        ui->tableView->setModel(model);

        db.close();
    }


    void Agences::on_pushButton_3_clicked()
    {
        int id_agence = ui->spinBox->value();
        QString nom_agence = ui->lineEdit->text();
        QString ville_agence = ui->lineEdit_2->text();


        if (nom_agence.isEmpty() || ville_agence.isEmpty()) {
            QMessageBox::warning(this, "Attention", "Veuillez remplir tous les champs !");
            return;
        }


        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        }


        QSqlQuery query(db);
        query.prepare("UPDATE Agences SET nom_agence = :nom_agence, ville_banque = :ville_banque WHERE id_agence = :id_agence");
        query.bindValue(":nom_agence", nom_agence);
        query.bindValue(":ville_banque", ville_agence);
        query.bindValue(":id_agence", id_agence);


        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de la modification de l'agence !");
            db.close();
            return;
        }


        QMessageBox::information(this, "Succès", "Agence modifiée avec succès !");
        db.close();


        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->spinBox->setValue(0);

     loadAgences();
    }


    void Agences::on_pushButton_4_clicked()
    {
        int id_agence = ui->spinBox->value(); // ID de l'agence sélectionnée

        if (id_agence == 0) {
            QMessageBox::warning(this, "Attention", "Veuillez sélectionner une agence !");
            return;
        }

        int ret = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer cette agence ?", QMessageBox::Yes | QMessageBox::No);
        if (ret == QMessageBox::No) {
            return;
        }


        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        }


        QSqlQuery query(db);
        query.prepare("DELETE FROM Agences WHERE id_agence = :id_agence");
        query.bindValue(":id_agence", id_agence);

        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de la suppression de l'agence !");
            db.close();
            return;
        }


        QMessageBox::information(this, "Succès", "Agence supprimée avec succès !");
        db.close();

        // Réinitialiser les champs
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->spinBox->setValue(0);


        loadAgences();
    }


    void Agences::on_pushButton_clicked()
    {
        int id_agence= ui-> spinBox->value();
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");

        if (!db.open()) {
            qDebug() << "Database error: " << db.lastError().text();
            QMessageBox::critical(this, "Erreur", "Impossible de se connecter à la base de données !");
            return;
        } else {
            qDebug() << "Database connected successfully!";
        }

        QSqlQuery query(db);

        query.prepare("SELECT id_agence,nom_agence,ville_banque FROM Agences WHERE id_agence =:id_agence");

        query.bindValue(":id_agence", id_agence);

        if (!query.exec()) {
            qDebug() << "Query execution error:" << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête !");
            db.close();
            return;
        }
        if (!query.next()) {
            QMessageBox::information(this, "Aucun résultat", "Aucun Agence trouvé pour cet ID !");
            db.close();
            return;
        }


        if (model == NULL) {
            model = new QSqlQueryModel();
        }

        model->setQuery(std::move(query));
        ui->tableView->setModel(model);
        ui->tableView->setColumnWidth(0, 150);
        ui->tableView->setColumnWidth(1, 165);
        ui->tableView->setColumnWidth(2, 165);


        db.close();
    }



