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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Signup_page)
    {
        if (Signup_page->objectName().isEmpty())
            Signup_page->setObjectName("Signup_page");
        Signup_page->resize(800, 600);
        centralwidget = new QWidget(Signup_page);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 190, 191, 20));
        phonenumber = new QLineEdit(centralwidget);
        phonenumber->setObjectName("phonenumber");
        phonenumber->setGeometry(QRect(240, 240, 301, 25));
        verify = new QPushButton(centralwidget);
        verify->setObjectName("verify");
        verify->setGeometry(QRect(340, 300, 93, 29));
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
    } // retranslateUi

};

namespace Ui {
    class Signup_page: public Ui_Signup_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_PAGE_H
