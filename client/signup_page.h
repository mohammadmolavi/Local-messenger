#ifndef SIGNUP_PAGE_H
#define SIGNUP_PAGE_H
#include<signupform.h>
#include <QMainWindow>
#include "clientsocket.h"
namespace Ui {
class Signup_page;
}

class Signup_page : public QMainWindow
{
    Q_OBJECT

public:
      sockettest * socket;
    explicit Signup_page(sockettest * sock, QWidget *parent = nullptr , QMainWindow * main_window =0);
    ~Signup_page();

private slots:
    void on_verify_clicked();

    void on_back_clicked();

private:
    Ui::Signup_page *ui;
    QMainWindow * main_window;
    signupform * signup_form;
};

#endif // SIGNUP_PAGE_H
