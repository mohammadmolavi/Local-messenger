
#include "clientsocket.h"
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

//void sockettest::setprofile(QString  path)
//{

//    QFile inputFile(path);
//    QByteArray read = inputFile.readAll();
//    socket->write(read);
//    socket->write("end");
//    QDataStream stream(read);
//     while(1)
//     {
//         read.clear();
//         read = inputFile.read(inputFile.size());
//         qDebug() << "Read : " << read.size();
//         if(read.size()==0)
//              break;
//         qDebug() << "Written : " << socket->write(read);
//         socket->waitForBytesWritten();
//         read.clear();
//     }

//    int n;
//    socket->waitForBytesWritten(1000);
//    socket->waitForReadyRead(2000);
//}

void sockettest::verifycontact()
{
    socket->write("addcontct");
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
            return "True";
      }
      else
          return "False";
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

