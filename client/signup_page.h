#ifndef SIGNUP_PAGE_H
#define SIGNUP_PAGE_H

#include <QMainWindow>

namespace Ui {
class Signup_page;
}

class Signup_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit Signup_page(QWidget *parent = nullptr , QMainWindow * main_window =0);
    ~Signup_page();

private slots:
    void on_verify_clicked();

private:
    Ui::Signup_page *ui;
    QMainWindow * main_window;
};

#endif // SIGNUP_PAGE_H
