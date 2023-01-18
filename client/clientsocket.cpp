
#include "clientsocket.h"
#include <QFile>
#include <QString>
#include "QDebug"
QString sech;
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

void sockettest::verifycontact()
{
    socket->write("addcontact");
    socket->waitForBytesWritten(1000);
    socket->waitForReadyRead(2000);
}
string sockettest::checkcontact(string username,string password)
{
    socket->write(username.c_str());
    socket->waitForBytesWritten(1000);
    socket->waitForReadyRead(2000);
     qDebug()<<"waiting :"<<socket->bytesAvailable();
     socket->write(password.c_str());
     socket->waitForBytesWritten(1000);
     socket->waitForReadyRead(2000);
      qDebug()<<"waiting :"<<socket->bytesAvailable();
      if(socket->readAll()=="True")
      {
          qDebug()<<"True";
            return "True";
      }
      else
      {
          qDebug()<<"False";
           return "False";
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
     socket->waitForBytesWritten(1024);
     socket->waitForReadyRead(1024);
      qDebug()<<"waiting :"<<socket->bytesAvailable();
      socket->write(Password.c_str());
      socket->waitForBytesWritten(1024);
      socket->waitForReadyRead(1024);
       qDebug()<<"waiting :"<<socket->bytesAvailable();
       if((sech =socket->readAll())=="False")
       {
           qDebug() <<  sech;
           return "False";
       }
       else if (sech == "True")
       {
           qDebug() << sech;
           recvContact();
           return "True";
       }
       else
       {
           qDebug() << sech;
           return "gorg";
        }

}
void sockettest::reads()
{
    qDebug()<<socket->readAll();

}

void sockettest::setProfile(QString path)
{
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    QByteArray mydata = file.readAll();
    socket->write(mydata);
    socket->waitForBytesWritten(1024);
    socket->waitForReadyRead(2000);
    socket->write("end");
    socket->waitForBytesWritten(1024);
    socket->waitForReadyRead(2000);
}

void sockettest::recvContact()
{
    socket->write("ready");
    socket->waitForBytesWritten(1024);
    socket->waitForReadyRead(2000);
    this->contacts = socket->readAll();
    qDebug() << contacts;
}

QString sockettest::get_contacts()
{
    return this->contacts;
}

