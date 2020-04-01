#include "mesa3.h"
#include "ui_mesa3.h"

mesa3::mesa3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mesa3)
{
    ui->setupUi(this);
}

mesa3::~mesa3()
{
    delete ui;
}
