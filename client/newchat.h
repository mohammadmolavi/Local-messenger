#ifndef NEWCHAT_H
#define NEWCHAT_H

#include <QMainWindow>

#include "clientsocket.h"
namespace Ui {
class newchat;
}

class newchat : public QMainWindow
{
    Q_OBJECT

public:
    sockettest * socket;
    explicit newchat(sockettest * sock, QWidget *parent = nullptr , QMainWindow * chat_page =0);
    ~newchat();

private slots:
    void on_back_clicked();

    void on_pushButton_clicked();

    void on_contactlist_currentTextChanged(const QString &currentText);

    void on_contactlist_windowIconTextChanged(const QString &iconText);

private:
    Ui::newchat *ui;
    QMainWindow * chat_page;
};

#endif // NEWCHAT_H
