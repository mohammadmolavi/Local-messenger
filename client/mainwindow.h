#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <signup_page.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_login_clicked();

    void on_signup_clicked();

private:
    Ui::MainWindow *ui;
    Signup_page *signuppage;
};
#endif // MAINWINDOW_H
