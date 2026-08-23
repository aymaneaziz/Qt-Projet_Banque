/********************************************************************************
** Form generated from reading UI file 'transactions.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONS_H
#define UI_TRANSACTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Transactions
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QSpinBox *spinBox;
    QTableView *tableView;

    void setupUi(QDialog *Transactions)
    {
        if (Transactions->objectName().isEmpty())
            Transactions->setObjectName("Transactions");
        Transactions->resize(500, 374);
        Transactions->setMinimumSize(QSize(500, 374));
        Transactions->setMaximumSize(QSize(500, 374));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaylistRepeat));
        Transactions->setWindowIcon(icon);
        radioButton = new QRadioButton(Transactions);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 60, 112, 26));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        radioButton->setFont(font);
        radioButton_2 = new QRadioButton(Transactions);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(20, 90, 112, 26));
        radioButton_2->setFont(font);
        pushButton = new QPushButton(Transactions);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 100, 111, 29));
        QFont font1;
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(Transactions);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(360, 100, 121, 29));
        pushButton_2->setFont(font1);
        label = new QLabel(Transactions);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 60, 71, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label->setFont(font2);
        doubleSpinBox = new QDoubleSpinBox(Transactions);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(300, 60, 181, 29));
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        doubleSpinBox->setMaximum(99999999999.990005493164063);
        label_2 = new QLabel(Transactions);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 191, 20));
        label_2->setFont(font2);
        spinBox = new QSpinBox(Transactions);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(300, 20, 181, 29));
        spinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBox->setMaximum(99999999);
        spinBox->setSingleStep(2);
        tableView = new QTableView(Transactions);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 140, 461, 211));

        retranslateUi(Transactions);

        QMetaObject::connectSlotsByName(Transactions);
    } // setupUi

    void retranslateUi(QDialog *Transactions)
    {
        Transactions->setWindowTitle(QCoreApplication::translate("Transactions", "Transactions", nullptr));
        radioButton->setText(QCoreApplication::translate("Transactions", "D\303\251pot", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Transactions", "Retrait", nullptr));
        pushButton->setText(QCoreApplication::translate("Transactions", "Actualiser", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Transactions", "Effectuer", nullptr));
        label->setText(QCoreApplication::translate("Transactions", "D\303\251pot  :", nullptr));
        label_2->setText(QCoreApplication::translate("Transactions", "Numero de compte  :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transactions: public Ui_Transactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONS_H
