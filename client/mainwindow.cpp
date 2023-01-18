#include "mainwindow.h"
#include "ui_chatpage.h"
#include "ui_mainwindow.h"
#include "clientsocket.h"
#include "QMessageBox"
#include <QListWidgetItem>
MainWindow::MainWindow(sockettest *sock, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->socket = sock;
    ui->setupUi(this);
    signuppage = new Signup_page(this->socket,0,this);
    chat_page = new chatpage(this->socket,0, this);
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
        this->hide();
        QStringList contacts;
        contacts = this->socket->get_contacts().split(",");
        QListWidgetItem *item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),contacts[0]);
        chat_page->ui->contactlist->addItem((item));
        for(int i = 1 ; i<contacts.size()-1;i++)
        {
            item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),contacts[i]);
            chat_page->ui-> contactlist->addItem((item));
        }
        chat_page ->show();
    }
    else if (check=="False")
    {
        QMessageBox ms;
        ms.setText("The Username Or Password is not correct! please try again.");
        ms.exec();
        this->ui->Username->clear();
        this->ui->PassWWord->clear();
    }
}


void MainWindow::on_signup_clicked()
{
    this->socket->pagesignup("signup");
    signuppage ->show();
    this->hide();
}

