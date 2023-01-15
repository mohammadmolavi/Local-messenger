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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newchat
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *newchat)
    {
        if (newchat->objectName().isEmpty())
            newchat->setObjectName("newchat");
        newchat->resize(800, 600);
        centralwidget = new QWidget(newchat);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 801, 61));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 145, 255);"));
        back = new QPushButton(widget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 10, 41, 41));
        back->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/previous.png);"));
        newchat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(newchat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        newchat->setMenuBar(menubar);
        statusbar = new QStatusBar(newchat);
        statusbar->setObjectName("statusbar");
        newchat->setStatusBar(statusbar);

        retranslateUi(newchat);

        QMetaObject::connectSlotsByName(newchat);
    } // setupUi

    void retranslateUi(QMainWindow *newchat)
    {
        newchat->setWindowTitle(QCoreApplication::translate("newchat", "MainWindow", nullptr));
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class newchat: public Ui_newchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCHAT_H
