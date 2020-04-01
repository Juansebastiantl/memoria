#include "mesa2.h"
#include "ui_mesa2.h"

mesa2::mesa2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mesa2)
{
    ui->setupUi(this);
}

mesa2::~mesa2()
{
    delete ui;
}
