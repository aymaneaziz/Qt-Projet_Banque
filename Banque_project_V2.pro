QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    agences.cpp \
    client.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    transactions.cpp \
    transactions_client.cpp

HEADERS += \
    agences.h \
    client.h \
    databaseheader.h \
    login.h \
    mainwindow.h \
    transactions.h \
    transactions_client.h

FORMS += \
    agences.ui \
    client.ui \
    login.ui \
    mainwindow.ui \
    transactions.ui \
    transactions_client.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
