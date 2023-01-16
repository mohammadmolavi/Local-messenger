#include "chatpage.h"
#include "ui_chatpage.h"
#include "newchat.h"
#include "addcontacts.h"
#include<QFileDialog>
#include<QImage>
#include <QPixmap>
#include <QLabel>
#include "clientsocket.h"
chatpage::chatpage(sockettest *sock,QWidget *parent , QMainWindow * chat_page) :
    QMainWindow(parent),
    ui(new Ui::chatpage)
{
    this->socket=sock;
    ui->setupUi(this);
    this -> main_window =main_window;
    new_chat = new newchat(0, this);
    add_contact = new addcontacts(this->socket,0,this);
    ui->testlable->setVisible(false);
    QListWidgetItem *item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"ali");
    ui-> contactlist->addItem((item));
    QListWidgetItem *item1 =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"sara");
    ui-> contactlist->addItem((item1));
    QListWidgetItem *item2 =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),"nrgs");
    ui-> contactlist->addItem((item2));

}

chatpage::~chatpage()
{
    delete ui;
}

void chatpage::on_newchat_clicked()
{
    new_chat->show();

}


void chatpage::on_addcontact_clicked()
{
    this->socket->verifycontact();
    add_contact ->show();
}


void chatpage::on_activechatname_linkActivated(const QString &link)
{

}


void chatpage::on_active_chat_profile_linkActivated(const QString &link)
{

}


void chatpage::on_attach_clicked()
{

    auto path = QFileDialog::getOpenFileName(this, tr("Open image"),
                                             "", tr("*.png *.jpg *.jpeg"));
    qDebug() << path << '\n';
    // Get image name from string
    auto imageName = path.split("/").last();
    QImage img;
    img.load(path);
    bufferedImage.fromImage(img);

    QPixmap pixmap(path);
    ui->testlable->setPixmap(pixmap);
   // ui->testlable->setMask(pixmap.mask());

    // Make UI visible
    ui->testlable->setVisible(true);
    ui->testlable->show();
}


void chatpage::on_send_clicked()
{
    QLabel *label = new QLabel(this);
    label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label->setText(ui->textEdit->toPlainText());
    label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
   // label->setBuddy();


    ui->sendlist->addItem(label->text());
    ui->textEdit->clear();
}

