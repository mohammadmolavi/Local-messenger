
#include "clientsocket.h"
#include <QString>
#include <QFile>

sockettest::sockettest(QObject *parent)
    : QObject{parent}
{

}

void sockettest::connect()
{
    socket =new QTcpSocket();
     socket->connectToHost("127.0.0.1",12345);
     if (socket->waitForConnected(3000))
     {
         qDebug()<<"connected";
     }
     else
     {
         qDebug()<<"Not connected";
     }
}

string sockettest::Verify(string phonenumber)
{
    socket->write(phonenumber.c_str());
    socket->waitForBytesWritten(1000);
    socket->waitForReadyRead(2000);
    if(socket->readAll()=="False")
    {
          return "True";
    }
    else
        return "False";
}
void sockettest::pagesignup(string test)
{
    socket->write(test.c_str());
    socket->waitForBytesWritten(1000);
}
string sockettest::signup(string name ,string Username,string Email,string Password)
{
    socket->write(name.c_str());
    socket->waitForBytesWritten(1000);
    socket->waitForReadyRead(2000);
     qDebug()<<"waiting :"<<socket->bytesAvailable();
    socket->write(Username.c_str());
    socket->waitForBytesWritten(1000);
    socket->waitForReadyRead(2000);
     qDebug()<<"waiting :"<<socket->bytesAvailable();
    socket->write(Email.c_str());
    socket->waitForBytesWritten(1000);
    socket->waitForReadyRead(2000);
     qDebug()<<"waiting :"<<socket->bytesAvailable();
    socket->write(Password.c_str());
    socket->waitForBytesWritten(1000);
    socket->waitForReadyRead(2000);
     qDebug()<<"waiting :"<<socket->bytesAvailable();
    if(socket->readAll()=="True")
    {
          return "True";
    }
    else
        return "False";
}


string  sockettest::Login(string Username,string Password)
{
     socket->write(Username.c_str());
     socket->waitForBytesWritten(1000);
     socket->waitForReadyRead(2000);
      qDebug()<<"waiting :"<<socket->bytesAvailable();
      socket->write(Password.c_str());
      socket->waitForBytesWritten(1000);
      socket->waitForReadyRead(2000);
       qDebug()<<"waiting :"<<socket->bytesAvailable();
       if(socket->readAll()=="False")
       {
             return "False";
       }
       else
           return "True";
}
void sockettest::reads()
{
    qDebug()<<socket->readAll();
}

void sockettest::setProfile(QString path)
{
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    QByteArray mydata=file.readAll();
    socket->write(mydata);
    socket->waitForBytesWritten(1024);
    socket->waitForReadyRead(2000);
    socket->write("end");
    socket->waitForBytesWritten(1024);
    socket->waitForReadyRead(2000);
}

