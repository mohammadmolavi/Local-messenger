#include "signupform.h"
#include "ui_signupform.h"
#include "signup_page.h"
#include "mainwindow.h"
#include "chatpage.h"
signupform::signupform(QWidget *parent , QMainWindow * signuppage) :
    QMainWindow(parent),
    ui(new Ui::signupform)
{
    ui->setupUi(this);
    this-> signuppage =signuppage;
   // this->chat_page= chat_page;

}

signupform::~signupform()
{
    delete ui;
}

void signupform::on_back_clicked()
{
    this->hide();
    signuppage ->show();
}


void signupform::on_signup_clicked()
{
   // this->hide();
    //chat_page ->show();
}

