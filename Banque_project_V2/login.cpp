#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QMessageBox>


Login::Login(QWidget *parent, MainWindow *mainWindow)
    : QDialog(parent)
    , ui(new Ui::Login)
    ,ptrMainWindow(mainWindow)
    ,ptragences( new Agences(nullptr,this) )
    ,ptrclient(new Client())


{
    ui->setupUi(this);


}

Login::~Login()
{
    delete ui;
    delete ptragences;
}

void Login::on_pushButton_3_clicked()
{
    user = ui->Username->text().trimmed();
    pass = ui->Password->text();
    type = ptrMainWindow->type;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/ayman/OneDrive/Bureau/Banque_project_V2/database/BanqueProject.db");


    if (user.isEmpty() || pass.isEmpty()) {
        QMessageBox::information(this, "Attention", "Veuillez remplir tous les champs !");
        return;
    }


    if (!db.open()) {
        qDebug() << "Database error: " << db.lastError().text();
    } else {
        qDebug() << "Database connected successfully!";
    }

    QSqlQuery query ;
    query =QSqlQuery(db);
    query.prepare("SELECT * FROM Login WHERE username = :username AND type = :type AND password = :password");
    query.bindValue(":username", user);
    query.bindValue(":type", type);
    query.bindValue(":password", pass);


    qDebug()<< type;

    if (!query.exec()) {
        qDebug() << "Query execution error:" << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de l'exécution de la requête.");
        db.close();
        return;
    }


    if (query.next()) {
        qDebug() << "Authentification réussie pour l'utilisateur :" << user;


        query.prepare("SELECT id_login FROM Login WHERE username = :username AND type = :type AND password = :password");
        query.bindValue(":username", user);
        query.bindValue(":type", type);
        query.bindValue(":password", pass);
        if (query.exec()) {
            if (query.next()) {
                id_login = query.value(0).toInt();
                qDebug() << "ID récupéré : " << id_login;
            } else {
                qDebug() << "Aucun résultat trouvé.";
            }


        } else {
            qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError().text();
        }


        if(type=="Banque" )
        ptragences->show();
        if(type=="Client" )
            ptrclient->show();

        close();
    } else {
        QMessageBox::warning(this, "Attention", "Mot de passe ou nom d'utilisateur incorrect !");
        ui->Password->clear();
        ui->Username->clear();
    }




   db.close();
}


void Login::on_pushButton_2_clicked()
{
    ui->Password->clear();
    ui->Username->clear();
}


void Login::on_pushButton_4_clicked()
{

    if (ptrMainWindow) {
        ptrMainWindow->show();
        ui->Password->clear();
        ui->Username->clear();
        close();
    }
}

