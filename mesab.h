#ifndef MESAB_H
#define MESAB_H

#include <QDialog>

namespace Ui {
class mesab;
}

class mesab : public QDialog
{
    Q_OBJECT

public:
    explicit mesab(QWidget *parent = 0);
    ~mesab();

private:
    Ui::mesab *ui;
};

#endif // MESAB_H
