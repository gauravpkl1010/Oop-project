#include "addemp.h"
#include "ui_addemp.h"

addEmp::addEmp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addEmp)
{
    ui->setupUi(this);
}

addEmp::~addEmp()
{
    delete ui;
}
