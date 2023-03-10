import socket
import os
import threading
import mysql.connector

def sendFile(con, direc2):
    direc = direc2.split('/')
    con.send(direc[-1].encode())
    file = open(direc2, 'rb')
    line = file.read(1024)
    while line:
        con.send(line)
        line = file.read(1024)
    file.close()
    con.send("end".encode())
    print('File has been transferred successfully.')


def recvFile(con):
    direc = "/home/mmd-mlv/massenger/"  # where files is saved

    while True:
        # receive file name
        temp = con.recv(1024).decode()
        recieverid = con.recv(1024).decode()
        path = direc + recieverid + '/'

        # if directory isn't exist, below code make it
        try:
            os.mkdir(path)
        except:
            ...

        path += temp
        file = open(path, 'wb')

        # recieve file
        line = con.recv(1024)
        while True:
            if line[-3:] == b'end':
                file.write(line[:-3])
                break
            file.write(line)
            line = con.recv(1024)
        print("file received\n")

        file.close()
        sendFile(clients[int(recieverid)][0], path)


'''
def recvMessage():
	pass


def sendMessage(idSender , idReciever):
    idDic[idSender]
'''


def connect_client(sock):
    while True:
        clients.append(sock.accept())
        print('Connected with ', clients[-1][1])
        t2 = threading.Thread(target=login, args=(clients[-1][0],))
        t2.start()


def signup(con):
    print("signup")
    fullname = con.recv(1024).decode()
    username = con.recv(1024).decode()
    email = con.recv(1024).decode()
    phone = con.recv(1024).decode()
    password = con.recv(1024).decode()
    # insert the information to db
    login(con)


def login(con):
    username = con.recv(1024).decode()
    if (username== "signup"):
        signup(con)
        return
    password = con.recv(1024).decode()
    connection = mysql.connector.connect(host='localhost',
                                         database='messenger',
                                         user='root',
                                         password='')

    cursor = connection.cursor()
    cursor.execute("SELECT Username,Password FROM clients ")

    myresult = cursor.fetchall()

    check=False
    for x in myresult:
        if(x[0] ==username and x[1]==password):
            con.send("True".encode())
            check=True
            break

    if(check==False):
        con.send("False".encode())
        login(con)
    else:
        pass


def main():
    global clients
    clients = []

    global idDic
    idDic = {}

    global t2

    sock = socket.socket()
    port = 12345
    host = ''
    sock.bind((host, port))
    sock.listen(500)
    t1 = threading.Thread(target=connect_client, args=(sock,))
    t1.start()


if __name__ == "__main__":
    main()
