/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *Password;
    QPushButton *pushButton_4;
    QFrame *line;
    QFrame *line_2;
    QLineEdit *Username;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(500, 600);
        Login->setMinimumSize(QSize(500, 600));
        Login->setMaximumSize(QSize(500, 600));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        Login->setWindowIcon(icon);
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 30, 271, 61));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 460, 121, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Login);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 460, 121, 31));
        pushButton_3->setFont(font1);
        pushButton_3->setAutoFillBackground(false);
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 270, 131, 20));
        label_3->setFont(font1);
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 210, 131, 20));
        label_2->setFont(font1);
        Password = new QLineEdit(Login);
        Password->setObjectName("Password");
        Password->setEnabled(true);
        Password->setGeometry(QRect(190, 270, 251, 31));
        Password->setInputMethodHints(Qt::InputMethodHint::ImhHiddenText|Qt::InputMethodHint::ImhNoAutoUppercase|Qt::InputMethodHint::ImhNoPredictiveText|Qt::InputMethodHint::ImhSensitiveData);
        Password->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_4 = new QPushButton(Login);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 460, 121, 31));
        pushButton_4->setFont(font1);
        line = new QFrame(Login);
        line->setObjectName("line");
        line->setGeometry(QRect(30, 110, 461, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(Login);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 390, 461, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        Username = new QLineEdit(Login);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(190, 210, 251, 31));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "Login System", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "Reset", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Password :", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Username :", nullptr));
#if QT_CONFIG(statustip)
        pushButton_4->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pushButton_4->setText(QCoreApplication::translate("Login", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
