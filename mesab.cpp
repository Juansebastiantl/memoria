#include "mesab.h"
#include "ui_mesab.h"

mesab::mesab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mesab)
{
    ui->setupUi(this);
}

mesab::~mesab()
{
    delete ui;
}
