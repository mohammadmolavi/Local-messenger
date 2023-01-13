#include "chatpage.h"
#include "ui_chatpage.h"

chatpage::chatpage(QWidget *parent , QMainWindow * main_window) :
    QMainWindow(parent),
    ui(new Ui::chatpage)
{
    ui->setupUi(this);
    this -> main_window =main_window;

}

chatpage::~chatpage()
{
    delete ui;
}

void chatpage::on_newchat_clicked()
{

}


void chatpage::on_addcontact_clicked()
{

}

