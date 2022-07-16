#include "deleteemp.h"
#include "ui_deleteemp.h"

Deleteemp::Deleteemp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Deleteemp)
{
    ui->setupUi(this);
}

Deleteemp::~Deleteemp()
{
    delete ui;
}
