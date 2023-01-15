#ifndef CHATPAGE_H
#define CHATPAGE_H
#include<newchat.h>
#include <QMainWindow>
#include <addcontacts.h>
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

    void on_activechatname_linkActivated(const QString &link);

    void on_active_chat_profile_linkActivated(const QString &link);

    void on_attach_clicked();

    void on_testlable_linkActivated(const QString &link);

private:
    Ui::chatpage *ui;
    QMainWindow * main_window;
    chatpage * chat_page;
    newchat *new_chat;
    addcontacts *add_contact;
    QPixmap bufferedImage;
};

#endif // CHATPAGE_H
