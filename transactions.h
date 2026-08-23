#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <QDialog>
#include "databaseheader.h"
class Agences;
namespace Ui {
class Transactions;
}

class Transactions : public QDialog
{
    Q_OBJECT

public:
    explicit Transactions(QWidget *parent = nullptr);
    ~Transactions();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Transactions *ui;
   QSqlQueryModel *model;
};

#endif // TRANSACTIONS_H
