#include "addcontacts.h"
#include "ui_addcontacts.h"

addcontacts::addcontacts(QWidget *parent,QMainWindow * chat_page) :
    QMainWindow(parent),
    ui(new Ui::addcontacts)
{
    ui->setupUi(this);
    this -> chat_page =chat_page;
    QListWidgetItem *item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"ali");
    ui-> contactlist->addItem((item));
    QListWidgetItem *item1 =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"sara");
    ui-> contactlist->addItem((item1));
    QListWidgetItem *item2 =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"nrgs");
    ui-> contactlist->addItem((item2));
}

addcontacts::~addcontacts()
{
    delete ui;
}
