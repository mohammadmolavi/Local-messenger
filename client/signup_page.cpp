#include "signup_page.h"
#include "ui_signup_page.h"
#include "signupform.h"
#include "clientsocket.h"
#include "QMessageBox"
Signup_page::Signup_page(sockettest *sock,QWidget *parent , QMainWindow * main_window) :
    QMainWindow(parent),
    ui(new Ui::Signup_page)
{
    this->socket = sock;
    ui->setupUi(this);
    this -> main_window =main_window;
    signup_form = new signupform(this->socket,0,this);
}

Signup_page::~Signup_page()
{
    delete ui;
}

void Signup_page::on_verify_clicked()
{
    QString phonenumber=this->ui->phonenumber->text();
    string Phonenumber;
    Phonenumber=phonenumber.toStdString();
    string check=this->socket->Verify(Phonenumber);
   // if(check=="True")
    {
        this ->hide() ;
        signup_form ->show() ;
    }
    //else
    {
        this->ui->phonenumber->clear();
        QMessageBox ms;
        ms.setText("Registration has already been done with this mobile number");
        ms.exec();
    }
}


void Signup_page::on_back_clicked()
{
    this->hide();
    main_window -> show();
}

