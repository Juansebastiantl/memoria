#ifndef MESA2_H
#define MESA2_H

#include <QDialog>

namespace Ui {
class mesa2;
}

class mesa2 : public QDialog
{
    Q_OBJECT

public:
    explicit mesa2(QWidget *parent = 0);
    ~mesa2();

private:
    Ui::mesa2 *ui;
};

#endif // MESA2_H
