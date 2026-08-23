/********************************************************************************
** Form generated from reading UI file 'agences.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENCES_H
#define UI_AGENCES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Agences
{
public:
    QTabWidget *tabWidget;
    QWidget *Client;
    QLabel *label_6;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_22;
    QPushButton *pushButton_24;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_21;
    QPushButton *pushButton_18;
    QSpinBox *spinBox_2;
    QTableView *tableView_3;
    QWidget *Comptes;
    QLabel *label_22;
    QGroupBox *groupBox_9;
    QLabel *label_24;
    QLabel *label_27;
    QLineEdit *lineEdit_20;
    QLabel *label_28;
    QLabel *label_30;
    QLabel *label_25;
    QComboBox *comboBox;
    QLabel *label_26;
    QLabel *label_29;
    QLabel *label_31;
    QPushButton *pushButton_19;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QPushButton *pushButton_26;
    QLineEdit *lineEdit_21;
    QGroupBox *groupBox_10;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QLabel *label_23;
    QSpinBox *spinBox_3;
    QTableView *tableView_4;
    QPushButton *pushButton_25;
    QWidget *Agenecs;
    QTableView *tableView;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpinBox *spinBox;
    QPushButton *pushButton_27;

    void setupUi(QDialog *Agences)
    {
        if (Agences->objectName().isEmpty())
            Agences->setObjectName("Agences");
        Agences->resize(935, 580);
        Agences->setMinimumSize(QSize(935, 580));
        Agences->setMaximumSize(QSize(935, 580));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::UserAvailable));
        Agences->setWindowIcon(icon);
        tabWidget = new QTabWidget(Agences);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 941, 561));
        QFont font;
        font.setBold(false);
        tabWidget->setFont(font);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        Client = new QWidget();
        Client->setObjectName("Client");
        label_6 = new QLabel(Client);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 20, 241, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_6->setFont(font1);
        groupBox_3 = new QGroupBox(Client);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 50, 381, 301));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 120, 101, 20));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        label_7->setFont(font2);
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 160, 101, 20));
        label_8->setFont(font2);
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(40, 200, 101, 20));
        label_9->setFont(font2);
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 240, 101, 20));
        label_10->setFont(font2);
        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(170, 120, 161, 21));
        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(170, 160, 161, 21));
        lineEdit_6 = new QLineEdit(groupBox_3);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(170, 200, 161, 21));
        lineEdit_7 = new QLineEdit(groupBox_3);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(170, 240, 161, 21));
        pushButton_22 = new QPushButton(groupBox_3);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(190, 50, 141, 29));
        QFont font3;
        font3.setBold(true);
        pushButton_22->setFont(font3);
        pushButton_24 = new QPushButton(groupBox_3);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setGeometry(QRect(40, 50, 141, 29));
        pushButton_24->setFont(font3);
        groupBox_4 = new QGroupBox(Client);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(20, 390, 381, 111));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        groupBox_4->setFont(font4);
        pushButton_8 = new QPushButton(groupBox_4);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(11, 51, 111, 31));
        pushButton_8->setFont(font4);
        pushButton_9 = new QPushButton(groupBox_4);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(130, 50, 111, 31));
        pushButton_9->setFont(font4);
        pushButton_10 = new QPushButton(groupBox_4);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(250, 50, 111, 31));
        pushButton_10->setFont(font4);
        label_21 = new QLabel(Client);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(420, 20, 201, 31));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        label_21->setFont(font5);
        pushButton_18 = new QPushButton(Client);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(820, 20, 91, 29));
        pushButton_18->setFont(font3);
        spinBox_2 = new QSpinBox(Client);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(620, 20, 191, 29));
        spinBox_2->setFrame(true);
        spinBox_2->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBox_2->setMaximum(1000000);
        spinBox_2->setStepType(QAbstractSpinBox::StepType::AdaptiveDecimalStepType);
        tableView_3 = new QTableView(Client);
        tableView_3->setObjectName("tableView_3");
        tableView_3->setGeometry(QRect(410, 70, 501, 461));
        tabWidget->addTab(Client, QString());
        Comptes = new QWidget();
        Comptes->setObjectName("Comptes");
        label_22 = new QLabel(Comptes);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(20, 10, 241, 31));
        label_22->setFont(font1);
        groupBox_9 = new QGroupBox(Comptes);
        groupBox_9->setObjectName("groupBox_9");
        groupBox_9->setGeometry(QRect(20, 50, 381, 371));
        label_24 = new QLabel(groupBox_9);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(40, 160, 141, 20));
        label_24->setFont(font2);
        label_27 = new QLabel(groupBox_9);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(40, 40, 151, 20));
        label_27->setFont(font2);
        lineEdit_20 = new QLineEdit(groupBox_9);
        lineEdit_20->setObjectName("lineEdit_20");
        lineEdit_20->setGeometry(QRect(190, 120, 171, 21));
        label_28 = new QLabel(groupBox_9);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(40, 80, 161, 20));
        label_28->setFont(font2);
        label_30 = new QLabel(groupBox_9);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(40, 120, 151, 20));
        label_30->setFont(font2);
        label_25 = new QLabel(groupBox_9);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(10, 190, 271, 20));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setKerning(true);
        label_25->setFont(font6);
        label_25->setStyleSheet(QString::fromUtf8("color: red;"));
        comboBox = new QComboBox(groupBox_9);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(190, 40, 171, 21));
        QFont font7;
        font7.setPointSize(8);
        font7.setBold(false);
        comboBox->setFont(font7);
        label_26 = new QLabel(groupBox_9);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(10, 260, 271, 20));
        label_26->setFont(font6);
        label_26->setStyleSheet(QString::fromUtf8("color: red;"));
        label_29 = new QLabel(groupBox_9);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(30, 220, 161, 20));
        label_29->setFont(font2);
        label_31 = new QLabel(groupBox_9);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(30, 290, 161, 20));
        label_31->setFont(font2);
        pushButton_19 = new QPushButton(groupBox_9);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(280, 330, 83, 29));
        pushButton_19->setFont(font2);
        doubleSpinBox_2 = new QDoubleSpinBox(groupBox_9);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setGeometry(QRect(190, 160, 171, 23));
        doubleSpinBox_2->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        doubleSpinBox_2->setMaximum(9999999999999.990234375000000);
        doubleSpinBox_3 = new QDoubleSpinBox(groupBox_9);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");
        doubleSpinBox_3->setGeometry(QRect(190, 220, 171, 23));
        doubleSpinBox_3->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        doubleSpinBox_3->setMaximum(9999999999999.990234375000000);
        doubleSpinBox_4 = new QDoubleSpinBox(groupBox_9);
        doubleSpinBox_4->setObjectName("doubleSpinBox_4");
        doubleSpinBox_4->setGeometry(QRect(190, 290, 171, 23));
        doubleSpinBox_4->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        doubleSpinBox_4->setMaximum(9999999999999.990234375000000);
        pushButton_26 = new QPushButton(groupBox_9);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setGeometry(QRect(190, 330, 83, 29));
        pushButton_26->setFont(font2);
        lineEdit_21 = new QLineEdit(groupBox_9);
        lineEdit_21->setObjectName("lineEdit_21");
        lineEdit_21->setGeometry(QRect(190, 80, 171, 21));
        groupBox_10 = new QGroupBox(Comptes);
        groupBox_10->setObjectName("groupBox_10");
        groupBox_10->setGeometry(QRect(20, 430, 381, 101));
        groupBox_10->setFont(font4);
        pushButton_20 = new QPushButton(groupBox_10);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(100, 50, 151, 31));
        pushButton_20->setFont(font2);
        pushButton_21 = new QPushButton(Comptes);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(820, 20, 91, 29));
        pushButton_21->setFont(font3);
        label_23 = new QLabel(Comptes);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(420, 20, 201, 31));
        label_23->setFont(font5);
        spinBox_3 = new QSpinBox(Comptes);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setGeometry(QRect(620, 20, 191, 29));
        spinBox_3->setAutoFillBackground(false);
        spinBox_3->setFrame(true);
        spinBox_3->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBox_3->setAccelerated(false);
        spinBox_3->setMaximum(1000000);
        tableView_4 = new QTableView(Comptes);
        tableView_4->setObjectName("tableView_4");
        tableView_4->setGeometry(QRect(410, 100, 501, 431));
        pushButton_25 = new QPushButton(Comptes);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setGeometry(QRect(770, 60, 141, 29));
        pushButton_25->setFont(font3);
        tabWidget->addTab(Comptes, QString());
        Agenecs = new QWidget();
        Agenecs->setObjectName("Agenecs");
        tableView = new QTableView(Agenecs);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(415, 111, 501, 401));
        label = new QLabel(Agenecs);
        label->setObjectName("label");
        label->setGeometry(QRect(25, 21, 241, 31));
        label->setFont(font1);
        groupBox = new QGroupBox(Agenecs);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(15, 61, 381, 251));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 50, 231, 31));
        QFont font8;
        font8.setPointSize(15);
        font8.setBold(true);
        label_2->setFont(font8);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 140, 121, 31));
        label_3->setFont(font4);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 180, 121, 31));
        label_4->setFont(font4);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 140, 171, 28));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(180, 190, 171, 28));
        label_5 = new QLabel(Agenecs);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(430, 30, 201, 31));
        label_5->setFont(font5);
        pushButton = new QPushButton(Agenecs);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(830, 30, 83, 29));
        pushButton->setFont(font3);
        groupBox_2 = new QGroupBox(Agenecs);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(15, 321, 381, 191));
        groupBox_2->setFont(font4);
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(11, 81, 111, 31));
        pushButton_2->setFont(font4);
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(130, 80, 111, 31));
        pushButton_3->setFont(font4);
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(250, 80, 111, 31));
        pushButton_4->setFont(font4);
        spinBox = new QSpinBox(Agenecs);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(630, 30, 191, 29));
        spinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBox->setMaximum(1000000);
        pushButton_27 = new QPushButton(Agenecs);
        pushButton_27->setObjectName("pushButton_27");
        pushButton_27->setGeometry(QRect(770, 70, 141, 29));
        pushButton_27->setFont(font3);
        tabWidget->addTab(Agenecs, QString());

        retranslateUi(Agences);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Agences);
    } // setupUi

    void retranslateUi(QDialog *Agences)
    {
        Agences->setWindowTitle(QCoreApplication::translate("Agences", "Gestion Banque", nullptr));
        label_6->setText(QCoreApplication::translate("Agences", "Gestion des Clients", nullptr));
        groupBox_3->setTitle(QString());
        label_7->setText(QCoreApplication::translate("Agences", "CIN            :", nullptr));
        label_8->setText(QCoreApplication::translate("Agences", "NOM         :", nullptr));
        label_9->setText(QCoreApplication::translate("Agences", "PRENOM   :", nullptr));
        label_10->setText(QCoreApplication::translate("Agences", "ADRESSE   :", nullptr));
        pushButton_22->setText(QCoreApplication::translate("Agences", "Actualiser", nullptr));
        pushButton_24->setText(QCoreApplication::translate("Agences", "Reset", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Agences", "Op\303\251rations", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Agences", "Ajouter", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Agences", "Modifier", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Agences", "Supprimer", nullptr));
        label_21->setText(QCoreApplication::translate("Agences", "Rechercher un client : ", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Agences", "Ok", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Client), QCoreApplication::translate("Agences", "Gestion Client", nullptr));
        label_22->setText(QCoreApplication::translate("Agences", "Gestion des Comptes ", nullptr));
        groupBox_9->setTitle(QString());
        label_24->setText(QCoreApplication::translate("Agences", "Solde initiale          : ", nullptr));
        label_27->setText(QCoreApplication::translate("Agences", "Type du Compte     :", nullptr));
        label_28->setText(QCoreApplication::translate("Agences", "Code                        :", nullptr));
        label_30->setText(QCoreApplication::translate("Agences", "CIN                          :", nullptr));
        label_25->setText(QCoreApplication::translate("Agences", "Si Compte Courant  Inserer : ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Agences", "Courant", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Agences", "Epargne", nullptr));

        label_26->setText(QCoreApplication::translate("Agences", "Si Compte Epargne  Inserer : ", nullptr));
        label_29->setText(QCoreApplication::translate("Agences", "Decouvert autoris\303\251  ", nullptr));
        label_31->setText(QCoreApplication::translate("Agences", "Taux d'interet  ", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Agences", "Creer", nullptr));
        pushButton_26->setText(QCoreApplication::translate("Agences", "Reset", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("Agences", "Transactions", nullptr));
        pushButton_20->setText(QCoreApplication::translate("Agences", "Transactions", nullptr));
        pushButton_21->setText(QCoreApplication::translate("Agences", "Ok", nullptr));
        label_23->setText(QCoreApplication::translate("Agences", "Rechercher un compte : ", nullptr));
        spinBox_3->setSpecialValueText(QString());
        pushButton_25->setText(QCoreApplication::translate("Agences", "Actualiser", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Comptes), QCoreApplication::translate("Agences", "Gestion Comptes", nullptr));
        label->setText(QCoreApplication::translate("Agences", "Gestion des Agences", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Agences", "Banque Almaghrib", nullptr));
        label_3->setText(QCoreApplication::translate("Agences", "Ville Agence :", nullptr));
        label_4->setText(QCoreApplication::translate("Agences", "NOM Agence :", nullptr));
        label_5->setText(QCoreApplication::translate("Agences", "Rechercher une agence : ", nullptr));
        pushButton->setText(QCoreApplication::translate("Agences", "Ok", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Agences", "Op\303\251rations", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Agences", "Ajouter", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Agences", "Modifier", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Agences", "Supprimer", nullptr));
        pushButton_27->setText(QCoreApplication::translate("Agences", "Actualiser", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Agenecs), QCoreApplication::translate("Agences", "Gestion Agences", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Agences: public Ui_Agences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENCES_H
