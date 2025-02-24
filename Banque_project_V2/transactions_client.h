#ifndef TRANSACTIONS_CLIENT_H
#define TRANSACTIONS_CLIENT_H

#include <QDialog>
#include "databaseheader.h"
namespace Ui {
class Transactions_client;
}

class Transactions_client : public QDialog
{
    Q_OBJECT

public:
    explicit Transactions_client(QWidget *parent = nullptr);
    ~Transactions_client();

private slots:
    void on_pushButton_2_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Transactions_client *ui;
    QSqlQueryModel *model;
};

#endif // TRANSACTIONS_CLIENT_H
