#ifndef AGENCES_H
#define AGENCES_H

#include <QDialog>
#include "transactions.h"
#include "databaseheader.h"

class Login;
namespace Ui {
class Agences;
}

class Agences : public QDialog
{
    Q_OBJECT

public:
    explicit Agences(QWidget *parent = nullptr,Login *ptrlogin = nullptr);
    ~Agences();


private slots:
    void on_pushButton_20_clicked();
    void affiche_nom_banque();
    void on_tabWidget_currentChanged(int index);

    void on_pushButton_8_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_22_clicked();

    void on_tableView_3_clicked(const QModelIndex &index);

    void on_pushButton_9_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_27_clicked();

    void loadAgences();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::Agences *ui;
    Transactions *ptrtransactions;
    Login *ptrlogin;
    QSqlQueryModel *model;


};

#endif // AGENCES_H
