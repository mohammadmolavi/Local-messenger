#ifndef SIGNUPFORM_H
#define SIGNUPFORM_H

#include <QMainWindow>
#include "clientsocket.h"
namespace Ui {
class signupform;
}

class signupform : public QMainWindow
{
    Q_OBJECT

public:
    sockettest * socket;
    explicit signupform(sockettest * sock, QWidget *parent = nullptr, QMainWindow * signuppage =0);
    ~signupform();

private slots:
    void on_signup_clicked();

    void on_change_photo_clicked();

private:
    Ui::signupform *ui;
    QMainWindow * signuppage ;

};

#endif // SIGNUPFORM_H
