#include "addcontacts.h"
#include "ui_addcontacts.h"

addcontacts::addcontacts(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addcontacts)
{
    ui->setupUi(this);
}

addcontacts::~addcontacts()
{
    delete ui;
}
