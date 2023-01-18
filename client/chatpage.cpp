#include "chatpage.h"
#include "ui_addcontacts.h"
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

    this->socket->socket->write("ready");
    this->socket->socket->waitForBytesWritten(1000);
    this->socket->socket->waitForReadyRead(2000);
    QString messseg =this->socket->socket->readAll();

    QLabel *label = new QLabel(this);
    label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label->setText(messseg);
    label->setAlignment(Qt::AlignBottom | Qt::AlignRight);


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
    add_contact->ui->contactlist->clear();
    QStringList contacts;
    contacts = this->socket->get_contacts().split(",");
    QListWidgetItem *item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),contacts[0]);
    add_contact->ui->contactlist->addItem((item));
    for(int i = 1 ; i<contacts.size()-1;i++)
    {
        item =new QListWidgetItem(QIcon(":/new/prefix1/graphics/friend.png"),contacts[i]);
        add_contact->ui-> contactlist->addItem((item));
    }
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

    string messeg =ui->textEdit->toPlainText().toStdString();

    ui->sendlist->addItem(label->text());
    this->socket->socket->write(messeg.c_str());
    this->socket->socket->waitForBytesWritten(1000);
    this->socket->socket->waitForReadyRead(2000);
    ui->textEdit->clear();


}


void chatpage::on_contactlist_itemClicked(QListWidgetItem *item)
{
    QString name= item->text();
    ui->activechatname->setText(name);
}

