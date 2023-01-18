#include "newchat.h"
#include "ui_newchat.h"
#include "chatpage.h"
#include <QStringList>

using namespace std;
newchat::newchat(sockettest *sock,QWidget *parent , QMainWindow * chat_page) :
    QMainWindow(parent),
    ui(new Ui::newchat)
{
    QStringList contacts;
    this->socket = sock;
    ui->setupUi(this);
    this -> chat_page =chat_page;
//    QStringList contacts;
//    contacts = this->socket->get_contacts().split(',');
//    QString contact = this->socket->get_contacts();
//    qDebug() << contact;
//    string str = contact.toStdString();
//     QListWidgetItem *item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),);
//        ui-> contactlist->addItem((item));
//    for(int i = 1 ; i<contacts.size();i++)
//    {
//        ui-> contactlist->addItem((item));
//    }

}

newchat::~newchat()
{
    delete ui;
}

void newchat::on_back_clicked()
{
    this->hide();
}


void newchat::on_pushButton_clicked()
{
    //this->socket->socket->write("newchat");
    //qDebug() << socket->socket->read(5);


}


void newchat::on_contactlist_currentTextChanged(const QString &currentText)
{


}

void newchat::on_contactlist_windowIconTextChanged(const QString &iconText)
{

}

