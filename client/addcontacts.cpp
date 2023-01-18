#include "addcontacts.h"
#include "ui_addcontacts.h"
#include "clientsocket.h"
#include "QMessageBox"
addcontacts::addcontacts(sockettest *sock,QWidget *parent,QMainWindow * chat_page) :
    QMainWindow(parent),
    ui(new Ui::addcontacts)
{
    this->socket=sock;
    ui->setupUi(this);
    this -> chat_page =chat_page;
}

addcontacts::~addcontacts()
{
    delete ui;
}

void addcontacts::on_signup_clicked()
{
    QString Username=this->ui->Username->text();
    QString Password=this->ui->PassWWord->text();
    string username=Username.toStdString();
    string password=Password.toStdString();
    string check=this->socket->checkcontact(username,password);
    if(check=="True")
    {
        QListWidgetItem *item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),ui->Username->text());
        ui-> contactlist->addItem((item));

    }
    else
    {
        QMessageBox ms;
        ms.setText("You Have no contacts");
        ms.exec();
    }
    ui->Username->clear();
    ui->PassWWord->clear();
    this->close();
}


void addcontacts::on_contactlist_destroyed()
{

}

