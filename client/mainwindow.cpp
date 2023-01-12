#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clientsocket.h"
#include "QDebug"
MainWindow::MainWindow(sockettest *sock, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->socket = sock;
    ui->setupUi(this);
    signuppage = new Signup_page(0,this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_login_clicked()
{
    QString username=this->ui->Username->text();
    QString password=this->ui->PassWWord->text();
    string User,Pass;
    User=username.toStdString();
    Pass=password.toStdString();
    string check=this->socket->Login(User,Pass);
    if(check =="True")
    {
        //go to next page
         qDebug()<<"true";
    }
    //alert

    else if (check=="False")
    {
       qDebug()<<"False";
    }
}


void MainWindow::on_signup_clicked()
{
    this->hide();
    signuppage ->show();
    this->socket->signup("signup");
}

