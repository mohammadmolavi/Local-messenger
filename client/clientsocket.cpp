
#include "clientsocket.h"

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
void sockettest::signup(string test)
{
    socket->write(test.c_str());
     socket->waitForBytesWritten(1000);
     socket->waitForReadyRead(2000);
      qDebug()<<"waiting :"<<socket->bytesAvailable();
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

//SocketTest mahroo;
