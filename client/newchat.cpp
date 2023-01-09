#include "newchat.h"
#include "ui_newchat.h"

newchat::newchat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newchat)
{
    ui->setupUi(this);
}

newchat::~newchat()
{
    delete ui;
}
