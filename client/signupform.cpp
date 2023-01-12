#include "signupform.h"
#include "ui_signupform.h"
#include "signup_page.h"

signupform::signupform(QWidget *parent , QMainWindow * signuppage) :
    QMainWindow(parent),
    ui(new Ui::signupform)
{
    ui->setupUi(this);
    this-> signuppage =signuppage;
}

signupform::~signupform()
{
    delete ui;
}
