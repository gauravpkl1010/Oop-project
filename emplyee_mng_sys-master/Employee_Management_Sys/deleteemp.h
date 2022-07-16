#ifndef DELETEEMP_H
#define DELETEEMP_H

#include <QDialog>

namespace Ui {
class Deleteemp;
}

class Deleteemp : public QDialog
{
    Q_OBJECT

public:
    explicit Deleteemp(QWidget *parent = nullptr);
    ~Deleteemp();

private:
    Ui::Deleteemp *ui;
};

#endif // DELETEEMP_H
