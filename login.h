#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

#include "agences.h"
#include "client.h"
#include "databaseheader.h"
class MainWindow;

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr, MainWindow *mainWindow = nullptr);
    ~Login();
     QString user ,pass,type;
    int id_login;
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Login *ui;
    Agences *ptragences;
    Client *ptrclient;
    MainWindow *ptrMainWindow;
};

#endif // LOGIN_H
