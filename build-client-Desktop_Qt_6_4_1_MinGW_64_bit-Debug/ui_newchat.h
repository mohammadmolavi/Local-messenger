/********************************************************************************
** Form generated from reading UI file 'newchat.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCHAT_H
#define UI_NEWCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newchat
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *newchat)
    {
        if (newchat->objectName().isEmpty())
            newchat->setObjectName("newchat");
        newchat->resize(800, 600);
        menubar = new QMenuBar(newchat);
        menubar->setObjectName("menubar");
        newchat->setMenuBar(menubar);
        centralwidget = new QWidget(newchat);
        centralwidget->setObjectName("centralwidget");
        newchat->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(newchat);
        statusbar->setObjectName("statusbar");
        newchat->setStatusBar(statusbar);

        retranslateUi(newchat);

        QMetaObject::connectSlotsByName(newchat);
    } // setupUi

    void retranslateUi(QMainWindow *newchat)
    {
        newchat->setWindowTitle(QCoreApplication::translate("newchat", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newchat: public Ui_newchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCHAT_H
