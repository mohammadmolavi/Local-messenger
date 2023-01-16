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
   string Verify(string phonenumber);
   string signup(string name,string Username,string Email,string Password);
   void pagesignup(string test);
   void setprofile(QString path);
   string checkcontact(string username,string password);
   void verifycontact();
signals:

};

#endif // SOCKETTEST_H
