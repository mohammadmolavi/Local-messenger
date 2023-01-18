#ifndef ADDCONTACTS_H
#define ADDCONTACTS_H

#include <QMainWindow>
#include "clientsocket.h"
namespace Ui {
class addcontacts;
}

class addcontacts : public QMainWindow
{
    Q_OBJECT

public:
     sockettest * socket;
    explicit addcontacts(sockettest * sock,QWidget *parent = nullptr , QMainWindow *chat_page =0);
    ~addcontacts();
     Ui::addcontacts *ui;


private slots:
     void on_signup_clicked();

     void on_contactlist_destroyed();

private:
    QMainWindow * chat_page;
};

#endif // ADDCONTACTS_H
