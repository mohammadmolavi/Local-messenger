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
    explicit addcontacts(QWidget *parent = nullptr);
    ~addcontacts();

private:
    Ui::addcontacts *ui;
};

#endif // ADDCONTACTS_H
