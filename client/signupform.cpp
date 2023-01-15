#include "signupform.h"
#include "ui_signupform.h"
#include "signup_page.h"
#include "mainwindow.h"
#include "chatpage.h"
#include "clientsocket.h"
signupform::signupform(sockettest * sock,QWidget *parent , QMainWindow * signuppage) :
    QMainWindow(parent),
    ui(new Ui::signupform)
{
    this->socket = sock;
    ui->setupUi(this);
    this-> signuppage =signuppage;
}

signupform::~signupform()
{
    delete ui;
}




void signupform::on_signup_clicked()
{
   QString name=this->ui->name->text();
   QString username=this->ui->username->text();
   QString email=this->ui->email->text();
   QString password=this->ui->passworde->text();
   string Name,Username,Email,Password;
   Name=name.toStdString();
   Username=username.toStdString();
   Email=email.toStdString();
   Password=password.toStdString();
   string check=this->socket->signup(Name,Username,Email,Password);
   if(check=="True")
   {

   }
}

