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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addcontacts
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addcontacts)
    {
        if (addcontacts->objectName().isEmpty())
            addcontacts->setObjectName("addcontacts");
        addcontacts->resize(601, 395);
        centralwidget = new QWidget(addcontacts);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        addcontacts->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addcontacts);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 601, 26));
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
    } // retranslateUi

};

namespace Ui {
    class addcontacts: public Ui_addcontacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTACTS_H
