#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    srch = new search(this);
    srch->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    hide();
    updt = new updateEmp(this);
    updt->show();

}


void MainWindow::on_pushButton_4_clicked()
{
    hide();
    delemp = new Deleteemp(this);
    delemp->show();

}


void MainWindow::on_pushButton_5_clicked()
{
    hide();
    aboutt = new aboutus(this);
    aboutt->show();
}

