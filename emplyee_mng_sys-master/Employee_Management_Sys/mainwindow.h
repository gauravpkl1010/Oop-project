#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "search.h"
#include "updateemp.h"
#include "deleteemp.h"
#include "aboutus.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    search *srch;
    updateEmp *updt;
    Deleteemp *delemp;
    aboutus *aboutt;
};
#endif // MAINWINDOW_H
