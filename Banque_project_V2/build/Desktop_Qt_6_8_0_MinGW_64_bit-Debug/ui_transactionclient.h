/********************************************************************************
** Form generated from reading UI file 'transactionclient.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONCLIENT_H
#define UI_TRANSACTIONCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Transactionclient
{
public:
    QRadioButton *radioButton_2;
    QTableView *tableView;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QComboBox *comboBox;
    QSpinBox *spinBox_2;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Transactionclient)
    {
        if (Transactionclient->objectName().isEmpty())
            Transactionclient->setObjectName("Transactionclient");
        Transactionclient->resize(495, 417);
        Transactionclient->setMinimumSize(QSize(495, 417));
        Transactionclient->setMaximumSize(QSize(495, 417));
        radioButton_2 = new QRadioButton(Transactionclient);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(20, 130, 112, 26));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        radioButton_2->setFont(font);
        tableView = new QTableView(Transactionclient);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 180, 461, 211));
        pushButton = new QPushButton(Transactionclient);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 140, 111, 29));
        QFont font1;
        font1.setBold(true);
        pushButton->setFont(font1);
        radioButton = new QRadioButton(Transactionclient);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 100, 112, 26));
        radioButton->setFont(font);
        pushButton_2 = new QPushButton(Transactionclient);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(360, 140, 121, 29));
        pushButton_2->setFont(font1);
        label = new QLabel(Transactionclient);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 100, 71, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label->setFont(font2);
        doubleSpinBox = new QDoubleSpinBox(Transactionclient);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(300, 100, 181, 29));
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        doubleSpinBox->setMaximum(99999999999.990005493164063);
        comboBox = new QComboBox(Transactionclient);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(210, 20, 271, 29));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        comboBox->setFont(font3);
        spinBox_2 = new QSpinBox(Transactionclient);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(210, 60, 271, 29));
        spinBox_2->setFont(font3);
        spinBox_2->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBox_2->setMaximum(100000000);
        label_6 = new QLabel(Transactionclient);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 50, 151, 31));
        label_6->setFont(font2);
        label_7 = new QLabel(Transactionclient);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 10, 161, 31));
        label_7->setFont(font2);

        retranslateUi(Transactionclient);

        QMetaObject::connectSlotsByName(Transactionclient);
    } // setupUi

    void retranslateUi(QDialog *Transactionclient)
    {
        Transactionclient->setWindowTitle(QCoreApplication::translate("Transactionclient", "Transactions", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Transactionclient", "Retrait", nullptr));
        pushButton->setText(QCoreApplication::translate("Transactionclient", "Actualiser", nullptr));
        radioButton->setText(QCoreApplication::translate("Transactionclient", "D\303\251pot", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Transactionclient", "Effectuer", nullptr));
        label->setText(QCoreApplication::translate("Transactionclient", "D\303\251pot  :", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Transactionclient", "Courant", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Transactionclient", "Epargne", nullptr));

        label_6->setText(QCoreApplication::translate("Transactionclient", "Code                   :", nullptr));
        label_7->setText(QCoreApplication::translate("Transactionclient", "Type du compte  :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transactionclient: public Ui_Transactionclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONCLIENT_H
