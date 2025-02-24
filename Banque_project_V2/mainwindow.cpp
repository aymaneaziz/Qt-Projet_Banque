#include "mainwindow.h"
#include "./ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,ptrlogin(new Login(nullptr,this))
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrlogin;
}

void MainWindow::on_pushButton_4_clicked()
{
    type = ui->pushButton_4->text();
    ptrlogin->show();
    qDebug() << type;
    this->close();

}




void MainWindow::on_pushButton_7_clicked()
{
    type = ui->pushButton_7->text();
    ptrlogin->show();
    qDebug() << type;
    this->close();
}


