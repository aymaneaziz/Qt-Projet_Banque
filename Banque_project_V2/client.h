#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include "databaseheader.h"
#include"transactions_client.h"


namespace Ui {
class Client;
}

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Client *ui;
    Transactions_client *ptrtransclient;
    QSqlQueryModel *model;
};

#endif // CLIENT_H
