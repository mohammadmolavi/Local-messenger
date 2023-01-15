#include "chatpage.h"
#include "ui_chatpage.h"
#include "newchat.h"
#include "addcontacts.h"
chatpage::chatpage(QWidget *parent , QMainWindow * chat_page) :
    QMainWindow(parent),
    ui(new Ui::chatpage)
{
    ui->setupUi(this);
    this -> main_window =main_window;
    new_chat = new newchat(0, this);
    add_contact = new addcontacts(0,this);
    QListWidgetItem *item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"ali");
    ui-> contactlist->addItem((item));
    QListWidgetItem *item1 =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"sara");
    ui-> contactlist->addItem((item1));
    QListWidgetItem *item2 =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"nrgs");
    ui-> contactlist->addItem((item2));

}

chatpage::~chatpage()
{
    delete ui;
}

void chatpage::on_newchat_clicked()
{
    new_chat->show();

}


void chatpage::on_addcontact_clicked()
{
    add_contact ->show();

}


void chatpage::on_activechatname_linkActivated(const QString &link)
{

}


void chatpage::on_active_chat_profile_linkActivated(const QString &link)
{

}

