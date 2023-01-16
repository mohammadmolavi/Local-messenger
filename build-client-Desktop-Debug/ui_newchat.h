/********************************************************************************
** Form generated from reading UI file 'newchat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCHAT_H
#define UI_NEWCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newchat
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QPushButton *back;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *new_chanal;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *new_group;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *contactlist;
    QPushButton *pushButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *newchat)
    {
        if (newchat->objectName().isEmpty())
            newchat->setObjectName(QString::fromUtf8("newchat"));
        newchat->resize(422, 741);
        centralwidget = new QWidget(newchat);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 61));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 145, 255);"));
        back = new QPushButton(widget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(10, 10, 41, 41));
        back->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/previous.png);"));

        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        new_chanal = new QPushButton(widget_2);
        new_chanal->setObjectName(QString::fromUtf8("new_chanal"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(new_chanal->sizePolicy().hasHeightForWidth());
        new_chanal->setSizePolicy(sizePolicy1);
        new_chanal->setMinimumSize(QSize(90, 90));
        new_chanal->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/megaphone.png);"));
        new_chanal->setAutoDefault(false);
        new_chanal->setFlat(false);

        horizontalLayout->addWidget(new_chanal);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 90, QSizePolicy::Minimum, QSizePolicy::Fixed);

        horizontalLayout->addItem(verticalSpacer);

        new_group = new QPushButton(widget_2);
        new_group->setObjectName(QString::fromUtf8("new_group"));
        sizePolicy1.setHeightForWidth(new_group->sizePolicy().hasHeightForWidth());
        new_group->setSizePolicy(sizePolicy1);
        new_group->setMinimumSize(QSize(90, 40));
        new_group->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/graphics/group-users.png);"));

        horizontalLayout->addWidget(new_group);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);

        contactlist = new QListWidget(centralwidget);
        contactlist->setObjectName(QString::fromUtf8("contactlist"));
        contactlist->setMinimumSize(QSize(400, 459));
        contactlist->setAlternatingRowColors(false);
        contactlist->setSelectionMode(QAbstractItemView::MultiSelection);
        contactlist->setProperty("isWrapping", QVariant(false));

        verticalLayout_2->addWidget(contactlist);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(50, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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

        verticalLayout_2->addWidget(pushButton);

        newchat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(newchat);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 422, 26));
        newchat->setMenuBar(menubar);

        retranslateUi(newchat);

        new_chanal->setDefault(false);


        QMetaObject::connectSlotsByName(newchat);
    } // setupUi

    void retranslateUi(QMainWindow *newchat)
    {
        newchat->setWindowTitle(QCoreApplication::translate("newchat", "MainWindow", nullptr));
        back->setText(QString());
        new_chanal->setText(QString());
        new_group->setText(QString());
        pushButton->setText(QCoreApplication::translate("newchat", "Start Chat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newchat: public Ui_newchat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCHAT_H
