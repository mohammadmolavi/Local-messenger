#include "chatpage.h"
#include "ui_chatpage.h"

chatpage::chatpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chatpage)
{
    ui->setupUi(this);
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

