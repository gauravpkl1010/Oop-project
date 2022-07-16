#ifndef ADDEMP_H
#define ADDEMP_H

#include <QDialog>

namespace Ui {
class addEmp;
}

class addEmp : public QDialog
{
    Q_OBJECT

public:
    explicit addEmp(QWidget *parent = nullptr);
    ~addEmp();

private:
    Ui::addEmp *ui;
};

#endif // ADDEMP_H
