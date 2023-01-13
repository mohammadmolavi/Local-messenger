#ifndef CHATPAGE_H
#define CHATPAGE_H

#include <QMainWindow>

namespace Ui {
class chatpage;
}

class chatpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit chatpage(QWidget *parent = nullptr ,QMainWindow * main_window =0);
    ~chatpage();

private slots:
    void on_newchat_clicked();

    void on_addcontact_clicked();

private:
    Ui::chatpage *ui;
    QMainWindow * main_window;
    chatpage * chat_page;
};

#endif // CHATPAGE_H
