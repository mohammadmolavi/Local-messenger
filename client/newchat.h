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
    explicit newchat(QWidget *parent = nullptr);
    ~newchat();

private:
    Ui::newchat *ui;
};

#endif // NEWCHAT_H
