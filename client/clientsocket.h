#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QObject>
#include <QTcpSocket>


using namespace std;
class sockettest : public QObject
{
    Q_OBJECT
public:
    explicit sockettest(QObject *parent = nullptr);
    QTcpSocket * socket;
   void connect();
   void reads();
   string Login(string Username , string Password);
   void signup(string test);

signals:

};

#endif // SOCKETTEST_H
