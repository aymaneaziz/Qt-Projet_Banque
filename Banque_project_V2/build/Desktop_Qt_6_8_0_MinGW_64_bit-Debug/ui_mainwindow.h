/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(450, 550);
        MainWindow->setMinimumSize(QSize(450, 550));
        MainWindow->setMaximumSize(QSize(450, 550));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 391, 91));
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        label->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 130, 421, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        line->setFont(font1);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 220, 501, 61));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(true);
        label_2->setFont(font2);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 330, 411, 41));
        line_2->setFont(font1);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 410, 171, 51));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        pushButton_4->setFont(font3);
        pushButton_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_4->setCheckable(false);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(240, 410, 171, 51));
        pushButton_7->setFont(font3);
        pushButton_7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 450, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion Banque", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "BIENVENU", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Cliquez sur Banque ou Client", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Banque", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
