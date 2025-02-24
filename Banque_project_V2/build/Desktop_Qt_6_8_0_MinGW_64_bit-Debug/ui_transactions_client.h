/********************************************************************************
** Form generated from reading UI file 'transactions_client.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONS_CLIENT_H
#define UI_TRANSACTIONS_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Transactions_client
{
public:
    QComboBox *comboBox;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QLabel *label;
    QTableView *tableView;
    QRadioButton *radioButton_2;
    QLabel *label_7;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Transactions_client)
    {
        if (Transactions_client->objectName().isEmpty())
            Transactions_client->setObjectName("Transactions_client");
        Transactions_client->resize(485, 408);
        Transactions_client->setMinimumSize(QSize(485, 408));
        Transactions_client->setMaximumSize(QSize(485, 408));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaylistRepeat));
        Transactions_client->setWindowIcon(icon);
        comboBox = new QComboBox(Transactions_client);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(200, 20, 271, 29));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        comboBox->setFont(font);
        radioButton = new QRadioButton(Transactions_client);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(10, 100, 112, 26));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        radioButton->setFont(font1);
        pushButton = new QPushButton(Transactions_client);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 140, 111, 29));
        QFont font2;
        font2.setBold(true);
        pushButton->setFont(font2);
        doubleSpinBox = new QDoubleSpinBox(Transactions_client);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(290, 100, 181, 29));
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        doubleSpinBox->setMaximum(99999999999.990005493164063);
        label_6 = new QLabel(Transactions_client);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 50, 151, 31));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        label_6->setFont(font3);
        pushButton_2 = new QPushButton(Transactions_client);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(350, 140, 121, 29));
        pushButton_2->setFont(font2);
        label = new QLabel(Transactions_client);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 100, 71, 20));
        label->setFont(font3);
        tableView = new QTableView(Transactions_client);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 180, 461, 211));
        radioButton_2 = new QRadioButton(Transactions_client);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(10, 130, 112, 26));
        radioButton_2->setFont(font1);
        label_7 = new QLabel(Transactions_client);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 161, 31));
        label_7->setFont(font3);
        lineEdit = new QLineEdit(Transactions_client);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(200, 60, 271, 28));

        retranslateUi(Transactions_client);

        QMetaObject::connectSlotsByName(Transactions_client);
    } // setupUi

    void retranslateUi(QDialog *Transactions_client)
    {
        Transactions_client->setWindowTitle(QCoreApplication::translate("Transactions_client", "Transactions", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Transactions_client", "Courant", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Transactions_client", "Epargne", nullptr));

        radioButton->setText(QCoreApplication::translate("Transactions_client", "D\303\251pot", nullptr));
        pushButton->setText(QCoreApplication::translate("Transactions_client", "Actualiser", nullptr));
        label_6->setText(QCoreApplication::translate("Transactions_client", "Code                   :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Transactions_client", "Effectuer", nullptr));
        label->setText(QCoreApplication::translate("Transactions_client", "D\303\251pot  :", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Transactions_client", "Retrait", nullptr));
        label_7->setText(QCoreApplication::translate("Transactions_client", "Type du compte  :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transactions_client: public Ui_Transactions_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONS_CLIENT_H
