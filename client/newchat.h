#ifndef NEWCHAT_H
#define NEWCHAT_H

#include <QMainWindow>

namespace Ui {
class newchat;
}

class newchat : public QMainWindow
{
    Q_OBJECT

public:
    explicit newchat(QWidget *parent = nullptr , QMainWindow * chat_page =0);
    ~newchat();

private:
    Ui::newchat *ui;
    QMainWindow * chat_page;
};

#endif // NEWCHAT_H
