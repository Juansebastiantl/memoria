#ifndef MESA_H
#define MESA_H

#include <QDialog>
#include <carta.h>
#include "jugador.h"
#include <QTimer>//

namespace Ui {
class Mesa;
}

class Mesa : public QDialog
{
    Q_OBJECT

public:
    explicit Mesa(QWidget *parent = 0);
    ~Mesa();
   jugador* mijugador= new jugador();
   carta *micarta= new carta();

   void mytimer();
   QTimer *timer;//

private slots:
    void on_P1_clicked();

    void on_pushButton_clicked();

    void on_P2_clicked();

    void on_P3_clicked();

    void on_P4_clicked();

    void on_P5_clicked();

    void on_P6_clicked();

    void on_P7_clicked();

    void on_P8_clicked();

    void mytimerSlot();

    void on_Reiniciar_clicked();

    void on_P9_clicked();

    void on_P10_clicked();

    void on_P11_clicked();

    void on_P12_clicked();

    void on_P13_clicked();

    void on_P14_clicked();

    void on_P15_clicked();

    void on_P16_clicked();

    void on_P17_clicked();

    void on_P18_clicked();

    void on_P19_clicked();

    void on_P20_clicked();

    void on_P21_clicked();

    void on_P22_clicked();

    void on_P23_clicked();

    void on_P24_clicked();

    void on_P25_clicked();

    void on_P26_clicked();

    void on_P27_clicked();

    void on_P28_clicked();

    void on_P29_clicked();

    void on_P30_clicked();

    void on_P31_clicked();

    void on_P32_clicked();

    void on_Salir_clicked();

private:
    Ui::Mesa *ui;

    //jugador *mijugador= new jugador();




};

#endif // MESA_H
