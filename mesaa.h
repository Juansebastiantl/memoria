#ifndef MESAA_H
#define MESAA_H

#include <QDialog>

namespace Ui {
class mesaA;
}

class mesaA : public QDialog
{
    Q_OBJECT

public:
    explicit mesaA(QWidget *parent = 0);
    ~mesaA();

private:
    Ui::mesaA *ui;
};

#endif // MESAA_H
