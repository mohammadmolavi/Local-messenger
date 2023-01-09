#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    signuppage = new Signup_page(0,this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_login_clicked()
{

}


void MainWindow::on_signup_clicked()
{
    this->hide();
    signuppage ->show();
}

