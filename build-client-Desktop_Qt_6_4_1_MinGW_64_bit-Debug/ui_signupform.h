/********************************************************************************
** Form generated from reading UI file 'signupform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signupform
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *activeprofile;
    QPushButton *pushButton;
    QPushButton *signup;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *passworde;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *email;
    QWidget *widget;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signupform)
    {
        if (signupform->objectName().isEmpty())
            signupform->setObjectName("signupform");
        signupform->resize(800, 600);
        signupform->setStyleSheet(QString::fromUtf8("QMainWindow#signupform{\n"
"background-color: qlineargradient(spread:pad, x1:0.804, y1:0.823182, x2:0, y2:0, stop:0 rgba(170, 255, 225, 255), stop:1 rgba(77, 160, 255, 255));\n"
"}"));
        centralwidget = new QWidget(signupform);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"background-color: qlineargradient(spread:pad, x1:0.804, y1:0.823182, x2:0, y2:0, stop:0 rgba(170, 255, 225, 255), stop:1 rgba(77, 160, 255, 255));\n"
"}"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(210, 60, 361, 521));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        activeprofile = new QLabel(frame);
        activeprofile->setObjectName("activeprofile");
        activeprofile->setGeometry(QRect(130, 20, 111, 111));
        activeprofile->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/friend.png);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 140, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        signup = new QPushButton(frame);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(150, 430, 81, 29));
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
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(50, 200, 273, 191));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Helvetica Now Display\";"));

        horizontalLayout->addWidget(label_2);

        name = new QLineEdit(frame_2);
        name->setObjectName("name");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Helvetica Now Display\";"));

        horizontalLayout_3->addWidget(label_4);

        username = new QLineEdit(frame_2);
        username->setObjectName("username");
        sizePolicy.setHeightForWidth(username->sizePolicy().hasHeightForWidth());
        username->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(username);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Helvetica Now Display\";"));

        horizontalLayout_2->addWidget(label_3);

        passworde = new QLineEdit(frame_2);
        passworde->setObjectName("passworde");
        sizePolicy.setHeightForWidth(passworde->sizePolicy().hasHeightForWidth());
        passworde->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(passworde);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Helvetica Now Display\";"));

        horizontalLayout_4->addWidget(label_5);

        email = new QLineEdit(frame_2);
        email->setObjectName("email");
        sizePolicy.setHeightForWidth(email->sizePolicy().hasHeightForWidth());
        email->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(email);


        verticalLayout->addLayout(horizontalLayout_4);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 801, 61));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 145, 255);"));
        back = new QPushButton(widget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 10, 41, 41));
        back->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/previous.png);"));
        signupform->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signupform);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        signupform->setMenuBar(menubar);
        statusbar = new QStatusBar(signupform);
        statusbar->setObjectName("statusbar");
        signupform->setStatusBar(statusbar);

        retranslateUi(signupform);

        QMetaObject::connectSlotsByName(signupform);
    } // setupUi

    void retranslateUi(QMainWindow *signupform)
    {
        signupform->setWindowTitle(QCoreApplication::translate("signupform", "MainWindow", nullptr));
        activeprofile->setText(QString());
        pushButton->setText(QCoreApplication::translate("signupform", "change photo", nullptr));
        signup->setText(QCoreApplication::translate("signupform", "Signup", nullptr));
        label_2->setText(QCoreApplication::translate("signupform", "name", nullptr));
        label_4->setText(QCoreApplication::translate("signupform", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("signupform", "PassWord", nullptr));
        label_5->setText(QCoreApplication::translate("signupform", "email", nullptr));
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signupform: public Ui_signupform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H
