#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <registro.h>
#include <iostream>
#include <QObject>
#include "jugador.h"
#include <mesa.h>
#include "carta.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Mesa* mesa= new Mesa();


private slots:
    void on_textEdit_textChanged();

    void on_pushButton_clicked();

    void on_Baja_clicked();

    void on_Media_clicked();

    void on_Dificil_clicked();

    void on_Empezar_clicked();

private:
    Ui::MainWindow *ui;

    //jugador mijugador= jugador();

    //carta* micarta= new carta();

};

#endif // MAINWINDOW_H
