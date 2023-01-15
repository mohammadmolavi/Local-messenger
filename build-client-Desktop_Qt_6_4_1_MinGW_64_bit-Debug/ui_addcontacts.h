/********************************************************************************
** Form generated from reading UI file 'addcontacts.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONTACTS_H
#define UI_ADDCONTACTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addcontacts
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *back;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *Username;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *PassWWord;
    QPushButton *signup;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addcontacts)
    {
        if (addcontacts->objectName().isEmpty())
            addcontacts->setObjectName("addcontacts");
        addcontacts->resize(755, 542);
        addcontacts->setStyleSheet(QString::fromUtf8("QMainWindow#addcontacts{\n"
"background-color: qlineargradient(spread:pad, x1:0.804, y1:0.823182, x2:0, y2:0, stop:0 rgba(170, 255, 225, 255), stop:1 rgba(77, 160, 255, 255));\n"
"}"));
        centralwidget = new QWidget(addcontacts);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"background-color: qlineargradient(spread:pad, x1:0.804, y1:0.823182, x2:0, y2:0, stop:0 rgba(170, 255, 225, 255), stop:1 rgba(77, 160, 255, 255));\n"
"}"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 801, 61));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 145, 255);"));
        back = new QPushButton(widget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 10, 41, 41));
        back->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/previous.png);"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(190, 150, 351, 177));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget_3);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        Username = new QLineEdit(widget_3);
        Username->setObjectName("Username");

        verticalLayout_2->addWidget(Username);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(widget_4);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        PassWWord = new QLineEdit(widget_4);
        PassWWord->setObjectName("PassWWord");

        verticalLayout_3->addWidget(PassWWord);


        verticalLayout->addWidget(widget_4);

        signup = new QPushButton(centralwidget);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(300, 340, 131, 31));
        signup->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-radius: 12px;\n"
"background-color:#26a8ff;\n"
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
        addcontacts->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addcontacts);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 755, 26));
        addcontacts->setMenuBar(menubar);
        statusbar = new QStatusBar(addcontacts);
        statusbar->setObjectName("statusbar");
        addcontacts->setStatusBar(statusbar);

        retranslateUi(addcontacts);

        QMetaObject::connectSlotsByName(addcontacts);
    } // setupUi

    void retranslateUi(QMainWindow *addcontacts)
    {
        addcontacts->setWindowTitle(QCoreApplication::translate("addcontacts", "MainWindow", nullptr));
        back->setText(QString());
        label->setText(QCoreApplication::translate("addcontacts", "UserName", nullptr));
        label_2->setText(QCoreApplication::translate("addcontacts", "PhoneNumber", nullptr));
        signup->setText(QCoreApplication::translate("addcontacts", "Add to Contacct", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addcontacts: public Ui_addcontacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTACTS_H
