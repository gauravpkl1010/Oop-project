#ifndef UPDATEEMP_H
#define UPDATEEMP_H

#include <QDialog>

namespace Ui {
class updateEmp;
}

class updateEmp : public QDialog
{
    Q_OBJECT

public:
    explicit updateEmp(QWidget *parent = nullptr);
    ~updateEmp();

private slots:
    void on_pushButton_7_clicked();

private:
    Ui::updateEmp *ui;
};

#endif // UPDATEEMP_H
