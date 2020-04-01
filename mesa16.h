ifndef MESA16_H
#define MESA16_H

#include <QDialog>

namespace Ui {
class mesa16;
}

class mesa16 : public QDialog
{
    Q_OBJECT

public:
    explicit mesa16(QWidget *parent = 0);
    ~mesa16();

private:
    Ui::mesa16 *ui;
};

#endif // MESA16_H
