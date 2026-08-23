/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QFrame *line;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(935, 542);
        Client->setMinimumSize(QSize(935, 542));
        Client->setMaximumSize(QSize(935, 542));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::UserAvailable));
        Client->setWindowIcon(icon);
        label = new QLabel(Client);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 10, 391, 71));
        QFont font;
        font.setPointSize(41);
        font.setBold(true);
        label->setFont(font);
        groupBox = new QGroupBox(Client);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 420, 361, 91));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        groupBox->setFont(font1);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 50, 151, 31));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        pushButton_2->setFont(font2);
        groupBox_2 = new QGroupBox(Client);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 100, 361, 171));
        groupBox_2->setFont(font1);
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 130, 171, 29));
        pushButton->setFont(font2);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 50, 171, 28));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        lineEdit->setFont(font3);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 90, 151, 31));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        label_4->setFont(font4);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 50, 161, 31));
        label_3->setFont(font4);
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(180, 90, 171, 28));
        lineEdit_2->setFont(font3);
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(90, 130, 81, 29));
        pushButton_4->setFont(font2);
        tableView = new QTableView(Client);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(400, 110, 511, 401));
        line = new QFrame(Client);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 80, 881, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        groupBox_3 = new QGroupBox(Client);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 280, 361, 131));
        groupBox_3->setFont(font1);
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(180, 90, 171, 29));
        pushButton_3->setFont(font2);
        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(180, 50, 171, 28));
        lineEdit_3->setFont(font3);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 50, 161, 31));
        label_6->setFont(font4);
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(90, 90, 81, 29));
        pushButton_5->setFont(font2);

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Client", nullptr));
        label->setText(QCoreApplication::translate("Client", "BIENVENU", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Client", "Transactions financi\303\250res", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Client", "Transactions ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Client", "Veuillez Entrer vos information", nullptr));
        pushButton->setText(QCoreApplication::translate("Client", "Afficher compte", nullptr));
        label_4->setText(QCoreApplication::translate("Client", "Tapez votre code  :", nullptr));
        label_3->setText(QCoreApplication::translate("Client", "Tapez votre CIN    :", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Client", "Reset", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Client", "Veuillez Entrer CIN", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Client", "Afficher mes comptes", nullptr));
        label_6->setText(QCoreApplication::translate("Client", "Tapez votre CIN    :", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Client", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
