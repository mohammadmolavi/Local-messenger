#include "signupform.h"
#include "ui_signupform.h"
#include "signup_page.h"
#include "mainwindow.h"
#include "chatpage.h"
#include "clientsocket.h"
#include "QDebug"
#include<QFileDialog>

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
       qDebug()<<"yes";
   }
}





void signupform::on_change_photo_clicked()
{
    auto path = QFileDialog::getOpenFileName(this, tr("Open image"),
                                             "", tr("*.png *.jpg *.jpeg"));
    qDebug() << path << '\n';
    // Get image name from string
    auto imageName = path.split("/").last();
   // QImage img;
    //img.load(path);
  //  bufferedImage.fromImage(img);

    //ui->activeprofile->clear();
    QPixmap pixmap(path);
    ui->activeprofile->setPixmap(pixmap);
   // ui->testlable->setMask(pixmap.mask());

    // Make UI visible
    ui->activeprofile->setVisible(true);
    ui->activeprofile->show();
    //this->socket->setProfile(path);
}

