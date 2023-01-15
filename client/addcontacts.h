#ifndef ADDCONTACTS_H
#define ADDCONTACTS_H

#include <QMainWindow>

namespace Ui {
class addcontacts;
}

class addcontacts : public QMainWindow
{
    Q_OBJECT

public:
    explicit addcontacts(QWidget *parent = nullptr , QMainWindow *chat_page =0);
    ~addcontacts();

private:
    Ui::addcontacts *ui;
    QMainWindow * chat_page;
};

#endif // ADDCONTACTS_H
