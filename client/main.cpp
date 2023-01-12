#include "mainwindow.h"
#include "clientsocket.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    sockettest* tst;
    tst = new sockettest();
    tst->connect();
    QApplication a(argc, argv);
    MainWindow w(tst);
    w.show();
    return a.exec();
}
