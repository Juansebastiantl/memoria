#ifndef MESA3_H
#define MESA3_H

#include <QDialog>

namespace Ui {
class mesa3;
}

class mesa3 : public QDialog
{
    Q_OBJECT

public:
    explicit mesa3(QWidget *parent = 0);
    ~mesa3();

private:
    Ui::mesa3 *ui;
};

#endif // MESA3_H
