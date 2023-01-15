#include "newchat.h"
#include "ui_newchat.h"
#include "chatpage.h"
newchat::newchat(QWidget *parent , QMainWindow * chat_page) :
    QMainWindow(parent),
    ui(new Ui::newchat)
{
    ui->setupUi(this);
    this -> chat_page =chat_page;
    QListWidgetItem *item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"ali");
    ui-> contactlist->addItem((item));
}
//QPushButton(":/new/prefix1/graphics/friend.png"),"ali"
newchat::~newchat()
{
    delete ui;
}
