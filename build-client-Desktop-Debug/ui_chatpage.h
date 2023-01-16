/********************************************************************************
** Form generated from reading UI file 'chatpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATPAGE_H
#define UI_CHATPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatpage
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *addcontact;
    QPushButton *newchat;
    QListWidget *contactlist;
    QLabel *label;
    QFrame *frame_2;
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
    QLabel *testlable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chatpage)
    {
        if (chatpage->objectName().isEmpty())
            chatpage->setObjectName(QString::fromUtf8("chatpage"));
        chatpage->resize(950, 611);
        centralwidget = new QWidget(chatpage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 950, 611));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(181, 181, 181);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        addcontact = new QPushButton(frame);
        addcontact->setObjectName(QString::fromUtf8("addcontact"));
        addcontact->setGeometry(QRect(180, 40, 31, 31));
        addcontact->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/add-user .png);"));
        newchat = new QPushButton(frame);
        newchat->setObjectName(QString::fromUtf8("newchat"));
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
        contactlist = new QListWidget(frame);
        contactlist->setObjectName(QString::fromUtf8("contactlist"));
        contactlist->setGeometry(QRect(0, 80, 221, 421));
        contactlist->setLineWidth(0);
        contactlist->setMidLineWidth(0);
        contactlist->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        contactlist->setAutoScrollMargin(16);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 61, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/graphics/friend.png")));
        label->setScaledContents(true);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(220, 0, 731, 571));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 731, 80));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        active_chat_profile = new QLabel(widget);
        active_chat_profile->setObjectName(QString::fromUtf8("active_chat_profile"));
        active_chat_profile->setGeometry(QRect(30, 20, 41, 41));
        active_chat_profile->setStyleSheet(QString::fromUtf8(""));
        active_chat_profile->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/graphics/friend.png")));
        active_chat_profile->setScaledContents(true);
        active_chat_profile->setWordWrap(false);
        activechatname = new QLabel(widget);
        activechatname->setObjectName(QString::fromUtf8("activechatname"));
        activechatname->setGeometry(QRect(90, 20, 63, 20));
        activechatname->setStyleSheet(QString::fromUtf8("font: 600 12pt \"Segoe UI Semibold\";"));
        activephonenumber = new QLabel(widget);
        activephonenumber->setObjectName(QString::fromUtf8("activephonenumber"));
        activephonenumber->setGeometry(QRect(90, 40, 111, 20));
        widget_2 = new QWidget(frame_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 500, 731, 61));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(-1, -1, 731, 71));
        textEdit = new QTextEdit(widget_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 621, 41));
        textEdit->setStyleSheet(QString::fromUtf8(""));
        send = new QPushButton(widget_3);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(670, 20, 41, 41));
        send->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/send.png);"));
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(660, 60, 41, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/image/grafic/send.png);"));
        attach = new QPushButton(widget_3);
        attach->setObjectName(QString::fromUtf8("attach"));
        attach->setGeometry(QRect(640, 30, 31, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(attach->sizePolicy().hasHeightForWidth());
        attach->setSizePolicy(sizePolicy);
        attach->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/attach.png);"));
        testlable = new QLabel(frame_2);
        testlable->setObjectName(QString::fromUtf8("testlable"));
        testlable->setGeometry(QRect(230, 109, 221, 241));
        testlable->setScaledContents(true);
        chatpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chatpage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 950, 26));
        chatpage->setMenuBar(menubar);
        statusbar = new QStatusBar(chatpage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chatpage->setStatusBar(statusbar);

        retranslateUi(chatpage);

        QMetaObject::connectSlotsByName(chatpage);
    } // setupUi

    void retranslateUi(QMainWindow *chatpage)
    {
        chatpage->setWindowTitle(QCoreApplication::translate("chatpage", "MainWindow", nullptr));
        addcontact->setText(QString());
        newchat->setText(QCoreApplication::translate("chatpage", "+ New Chat", nullptr));
        label->setText(QString());
        active_chat_profile->setText(QString());
        activechatname->setText(QCoreApplication::translate("chatpage", "NAME", nullptr));
        activephonenumber->setText(QCoreApplication::translate("chatpage", "phone number", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("chatpage", "Write a massage ...", nullptr));
        send->setText(QString());
        pushButton_3->setText(QString());
        attach->setText(QString());
        testlable->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chatpage: public Ui_chatpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE_H
