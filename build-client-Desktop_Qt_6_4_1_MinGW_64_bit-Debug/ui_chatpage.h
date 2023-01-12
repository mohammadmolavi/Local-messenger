/********************************************************************************
** Form generated from reading UI file 'chatpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATPAGE_H
#define UI_CHATPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatpage
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *addcontact;
    QPushButton *newchat;
    QPushButton *pushButton_6;
    QFrame *frame_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget;
    QLabel *active_chat_profile;
    QLabel *activechatname;
    QLabel *activephonenumber;
    QWidget *widget_2;
    QWidget *widget_3;
    QTextEdit *textEdit;
    QPushButton *send;
    QPushButton *pushButton_3;
    QPushButton *attach;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chatpage)
    {
        if (chatpage->objectName().isEmpty())
            chatpage->setObjectName("chatpage");
        chatpage->resize(950, 611);
        centralwidget = new QWidget(chatpage);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 950, 611));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(181, 181, 181);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        scrollArea_2 = new QScrollArea(frame);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(0, 80, 221, 421));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 219, 419));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        addcontact = new QPushButton(frame);
        addcontact->setObjectName("addcontact");
        addcontact->setGeometry(QRect(180, 40, 31, 31));
        addcontact->setStyleSheet(QString::fromUtf8("border-image: url(:/image/grafic/add-user .png);"));
        newchat = new QPushButton(frame);
        newchat->setObjectName("newchat");
        newchat->setGeometry(QRect(20, 510, 181, 41));
        newchat->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-radius: 12px;\n"
"background: #26a8ff;\n"
"font: 800 15pt \"Helvetica Now Display\";\n"
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
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 10, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/image/grafic/friend.png);"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(220, 0, 731, 571));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        scrollArea = new QScrollArea(frame_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 80, 731, 421));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 729, 419));
        scrollArea->setWidget(scrollAreaWidgetContents);
        widget = new QWidget(frame_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 731, 80));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        active_chat_profile = new QLabel(widget);
        active_chat_profile->setObjectName("active_chat_profile");
        active_chat_profile->setGeometry(QRect(30, 20, 41, 41));
        active_chat_profile->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 85, 255);"));
        active_chat_profile->setPixmap(QPixmap(QString::fromUtf8(":/image/grafic/friend.png")));
        active_chat_profile->setScaledContents(true);
        active_chat_profile->setWordWrap(false);
        activechatname = new QLabel(widget);
        activechatname->setObjectName("activechatname");
        activechatname->setGeometry(QRect(90, 20, 63, 20));
        activechatname->setStyleSheet(QString::fromUtf8("font: 600 12pt \"Segoe UI Semibold\";"));
        activephonenumber = new QLabel(widget);
        activephonenumber->setObjectName("activephonenumber");
        activephonenumber->setGeometry(QRect(90, 40, 111, 20));
        widget_2 = new QWidget(frame_2);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 500, 731, 61));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(-1, -1, 731, 71));
        textEdit = new QTextEdit(widget_3);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 20, 621, 41));
        textEdit->setStyleSheet(QString::fromUtf8(""));
        send = new QPushButton(widget_3);
        send->setObjectName("send");
        send->setGeometry(QRect(670, 20, 41, 41));
        send->setStyleSheet(QString::fromUtf8("border-image: url(:/image/grafic/send.png);"));
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(660, 60, 41, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/image/grafic/send.png);"));
        attach = new QPushButton(widget_3);
        attach->setObjectName("attach");
        attach->setGeometry(QRect(640, 30, 31, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(attach->sizePolicy().hasHeightForWidth());
        attach->setSizePolicy(sizePolicy);
        attach->setStyleSheet(QString::fromUtf8("border-image: url(:/image/grafic/attach.png);"));
        chatpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chatpage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 950, 26));
        chatpage->setMenuBar(menubar);
        statusbar = new QStatusBar(chatpage);
        statusbar->setObjectName("statusbar");
        chatpage->setStatusBar(statusbar);

        retranslateUi(chatpage);

        QMetaObject::connectSlotsByName(chatpage);
    } // setupUi

    void retranslateUi(QMainWindow *chatpage)
    {
        chatpage->setWindowTitle(QCoreApplication::translate("chatpage", "MainWindow", nullptr));
        addcontact->setText(QString());
        newchat->setText(QCoreApplication::translate("chatpage", "+ New Chat", nullptr));
        pushButton_6->setText(QString());
        active_chat_profile->setText(QString());
        activechatname->setText(QCoreApplication::translate("chatpage", "NAME", nullptr));
        activephonenumber->setText(QCoreApplication::translate("chatpage", "phone number", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("chatpage", "Write a massage ...", nullptr));
        send->setText(QString());
        pushButton_3->setText(QString());
        attach->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chatpage: public Ui_chatpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE_H
