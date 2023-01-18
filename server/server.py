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
    direc = "./profiles/"  # where files is saved

    
    path = direc

    # if directory isn't exist, below code make it
    try:
        os.mkdir(path)
    except:
        print("directory is existed")

    path += "{}.jpg".format(conDic[con])
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
    # sendFile(clients[int(recieverid)][0], path)



def recvMessage(con):
    while(True):
        contactUsername = con.recv(1024).decode()
        message = con.recv(1024).decode()
        flag = False
        for i in clients:
            if i[0] == idDic[contact_username]:
                flag = True
                break 
        if flag == True:    
            ready = idDic[contactUsername].recv(1024).decode()
            if(ready == "ready"):
                idDic[contactUsername].send(message.encode())
            else:
                send(idDic[contactUsername] , ready)

        
        connection = mysql.connector.connect(host='localhost',
                                         database='messenger',
                                         user='root',
                                         password='')

        cursor = connection.cursor()
        sql = "INSERT INTO chats (Username,text,contact_username) VALUES (%s,%s,%s)"
        val = (conDic[con], message, contact_username)
        cursor.execute(sql, val)
        val = (contact_username, message, conDic[con])
        connection.commit() 


def send(con , contactUsername):
    message = con.recv(1024).decode()
    ready = idDic[contactUsername].recv(1024).decode()
    if(ready == "ready"):
        idDic[contactUsername].send(message.encode())
    else:
        send(idDic[contactUsername] , ready)


'''
def sendMessage(idSender , idReciever):
    idDic[idSender]
'''


def connect_client(sock):
    while True:
        clients.append(sock.accept())
        print('Connected with ', clients[-1][1])
        t2 = threading.Thread(target=login, args=(clients[-1][0],))
        t2.start()


def verify(con):
    print("verify")
    phone = con.recv(1024).decode()
    print(phone)
    connection = mysql.connector.connect(host='localhost',
                                         database='messenger',
                                         user='root',
                                         password='')

    cursor = connection.cursor()
    cursor.execute("SELECT Phonenumber FROM clients ")
    myresult = cursor.fetchall()
    check = False
    for x in myresult:
        if (x[0] == phone):
            check = True
            break

    if (check == False):
        con.send("False".encode())
        signup(con, phone)
    else:
        con.send("True".encode())
        verify(con)


def signup(con, phone):
    #recvFile(con)
    name = con.recv(1024).decode()
    print(name)
    username = con.recv(1024).decode()
    print(username)
    email = con.recv(1024).decode()
    print(email)
    password = con.recv(1024).decode()
    print(password)
    connection = mysql.connector.connect(host='localhost',
                                         database='messenger',
                                         user='root',
                                         password='')

    cursor = connection.cursor()
    sql = "INSERT INTO clients (Username,Email,phonenumber,Fullname,password) VALUES (%s,%s,%s,%s,%s)"
    val = (username, email, phone, name, password)
    cursor.execute(sql, val)
    connection.commit()
    print(cursor.rowcount, "record inserted.")
    if (cursor.rowcount):
        con.send("True".encode())
    else:
        con.send("False".encode())


def login(con):
    username = con.recv(1024).decode()
    if (username == "signup"):
        verify(con)
        return
    password = con.recv(1024).decode()
    connection = mysql.connector.connect(host='localhost',
                                         database='messenger',
                                         user='root',
                                         password='')

    cursor = connection.cursor()
    cursor.execute("SELECT Username,Password FROM clients ")
    myresult = cursor.fetchall()

    check = False
    for x in myresult:
        if (x[0] == username and x[1] == password):
            check = True
            break

    if (check == False):
        con.send("False".encode())
        # login(con)
    else:
        con.send("True".encode())
        idDic[username] = con
        conDic[con] = username
        
        connection = mysql.connector.connect(host='localhost',
                                            database='messenger',
                                            user='root',
                                            password='')
        cursor = connection.cursor()
        cursor.execute("SELECT contact_username FROM contacts WHERE Username = '{}'".format(conDic[con]))
        myresult = cursor.fetchall()
        con.recv(1024)
        allcontacts = ""
        for x in myresult:
            allcontacts += x[0] + ","
        connection.commit()
        con.send(allcontacts.encode())
        chat(con)



def chat(con):
    t3 = threading.Thread(target=recvMessage(),args=(con,))
    while True:
        # print("chat")
        check = con.recv(1024).decode()
        print(check)
        if (check == "addcontact"):
            verifycontact(con)
        recvMessage(con)     


def verifycontact(con):
    print("verifycontact")
    username = con.recv(1024).decode()
    print(username)
    password = con.recv(1024).decode()
    print(password)
    connection = mysql.connector.connect(host='localhost',
                                         database='messenger',
                                         user='root',
                                         password='')

    cursor = connection.cursor()
    cursor.execute("SELECT Username,phonenumber FROM clients ")
    myresult = cursor.fetchall()
    check = False
    for x in myresult:
        if (x[0] == username and x[1] == password):
            check = True
            break

    if (check == False):
        con.send("False".encode())

    else:
        con.send("True".encode())
        connection = mysql.connector.connect(host='localhost',
                                             database='messenger',
                                             user='root',
                                             password='')

        cursor = connection.cursor()
        sql = "INSERT INTO contacts (Username,phonenumber,contact_username) VALUES (%s,%s,%s)"
        val = (conDic[con], password, Username)
        cursor.execute(sql, val)
        connection.commit()


def main():
    global clients
    clients = []

    global idDic
    idDic = {}
    global conDic
    conDic = {}
    global t2

    global t3

    sock = socket.socket()
    port = 12345
    host = ''
    sock.bind((host, port))
    sock.listen(500)
    t1 = threading.Thread(target=connect_client, args=(sock,))
    t1.start()


if __name__ == "__main__":
    main()


