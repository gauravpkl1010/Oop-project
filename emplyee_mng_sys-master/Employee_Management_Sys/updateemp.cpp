#include "updateemp.h"
#include "ui_updateemp.h"

updateEmp::updateEmp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateEmp)
{
    ui->setupUi(this);
}

updateEmp::~updateEmp()
{
    delete ui;
}



