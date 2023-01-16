/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_7;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
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
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_6;
    QPushButton *signup;
    QPushButton *login;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow#MainWindow{\n"
"background-color: qlineargradient(spread:pad, x1:0.804, y1:0.823182, x2:0, y2:0, stop:0 rgba(170, 255, 225, 255), stop:1 rgba(77, 160, 255, 255));\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"background-color: qlineargradient(spread:pad, x1:0.804, y1:0.823182, x2:0, y2:0, stop:0 rgba(170, 255, 225, 255), stop:1 rgba(77, 160, 255, 255));\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));

        verticalLayout_4->addWidget(widget_7);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        Username = new QLineEdit(widget_3);
        Username->setObjectName(QString::fromUtf8("Username"));

        verticalLayout_2->addWidget(Username);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        PassWWord = new QLineEdit(widget_4);
        PassWWord->setObjectName(QString::fromUtf8("PassWWord"));
        PassWWord->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(PassWWord);


        verticalLayout->addWidget(widget_4);


        horizontalLayout_2->addWidget(widget_2);

        horizontalSpacer_2 = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(widget);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        signup = new QPushButton(widget_6);
        signup->setObjectName(QString::fromUtf8("signup"));
        signup->setGeometry(QRect(330, 70, 131, 31));
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
        login = new QPushButton(widget_6);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(330, 10, 131, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setSizeIncrement(QSize(0, 0));
        login->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        login->setIconSize(QSize(20, 20));
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 50, 131, 16));
        QFont font;
        font.setPointSize(7);
        label_4->setFont(font);

        verticalLayout_4->addWidget(widget_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PassWord", nullptr));
        signup->setText(QCoreApplication::translate("MainWindow", "signup", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Don't have any account?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
