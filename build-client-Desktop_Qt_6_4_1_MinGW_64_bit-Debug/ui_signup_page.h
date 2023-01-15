/********************************************************************************
** Form generated from reading UI file 'signup_page.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_PAGE_H
#define UI_SIGNUP_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup_page
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *phonenumber;
    QPushButton *verify;
    QWidget *widget;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Signup_page)
    {
        if (Signup_page->objectName().isEmpty())
            Signup_page->setObjectName("Signup_page");
        Signup_page->resize(800, 600);
        Signup_page->setStyleSheet(QString::fromUtf8("QMainWindow#Signup_page{\n"
"background-color: qlineargradient(spread:pad, x1:0.804, y1:0.823182, x2:0, y2:0, stop:0 rgba(170, 255, 225, 255), stop:1 rgba(77, 160, 255, 255));\n"
"}"));
        centralwidget = new QWidget(Signup_page);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"background-color: qlineargradient(spread:pad, x1:0.804, y1:0.823182, x2:0, y2:0, stop:0 rgba(170, 255, 225, 255), stop:1 rgba(77, 160, 255, 255));\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 190, 191, 20));
        phonenumber = new QLineEdit(centralwidget);
        phonenumber->setObjectName("phonenumber");
        phonenumber->setGeometry(QRect(240, 240, 301, 25));
        verify = new QPushButton(centralwidget);
        verify->setObjectName("verify");
        verify->setGeometry(QRect(340, 300, 93, 29));
        verify->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-radius: 12px;\n"
"background: #26a8ff;\n"
"font: 700 9pt \"Helvetica Now Display\";\n"
"color: white;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background: #61ffed;\n"
"}\n"
"QPushButton:pressed \n"
"{\n"
"background: white;\n"
"border: 2px solid #61ffed; \n"
"color: #61ffed;\n"
"}\n"
""));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 801, 61));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 145, 255);"));
        back = new QPushButton(widget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 10, 41, 41));
        back->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/previous.png);"));
        Signup_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Signup_page);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Signup_page->setMenuBar(menubar);
        statusbar = new QStatusBar(Signup_page);
        statusbar->setObjectName("statusbar");
        Signup_page->setStatusBar(statusbar);

        retranslateUi(Signup_page);

        QMetaObject::connectSlotsByName(Signup_page);
    } // setupUi

    void retranslateUi(QMainWindow *Signup_page)
    {
        Signup_page->setWindowTitle(QCoreApplication::translate("Signup_page", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Signup_page", "Enter your phone number", nullptr));
        verify->setText(QCoreApplication::translate("Signup_page", "Verify", nullptr));
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Signup_page: public Ui_Signup_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_PAGE_H
