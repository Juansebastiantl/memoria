#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()),ui->textEdit,SIGNAL(textChanged()));

   // connect(ui->pushButton, SIGNAL(clicked()), &mijugador,SLOT(setNombre()));
   //connect(ui->)


    ui->Baja->hide();
    ui->Media->hide();
    ui->Dificil->hide();
    ui->Dificultad->hide();
    ui->Empezar->hide();


}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_textEdit_textChanged()
{
    //const char* nombre = ui->textEdit->toPlainText().toStdString().c_str();
    //QString Qnombre = ;
    //cout << "el nombre almacenado (char) es " << nombre << endl;
}

void MainWindow::on_pushButton_clicked()
{
    QString nombre1,nombre2;
    nombre1 = ui->textEdit->toPlainText().toStdString().c_str();
    nombre2 = ui->textEdit_2->toPlainText().toStdString().c_str();
    mesa->mijugador->setNombre1(nombre1);
    mesa->mijugador->setNombre2(nombre2);
    QString a,b;
    a = mesa->mijugador->getNombre1();
    b = mesa->mijugador->getNombre2();
    std::cout << a.toStdString() << std::endl;
    std::cout << b.toStdString() << std::endl;
    ui->textEdit->hide();
    ui->textEdit_2->hide();
    ui->pushButton->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label->hide();
    ui->label_4->setText("Jugador1 = "+a+", Jugador2 = "+b);
    ui->Baja->show();
    ui->Media->show();
    ui->Dificil->show();
    ui->Dificultad->show();
    mesa->mijugador->turno=false;
    mesa->micarta->organizar();

}

void MainWindow::on_Baja_clicked()
{
     ui->Empezar->show();
     ui->label_4->hide();
     mesa->micarta->Nivel=8;

}

void MainWindow::on_Media_clicked()
{
     ui->Empezar->show();
     ui->label_4->hide();
     mesa->micarta->Nivel=16;
}

void MainWindow::on_Dificil_clicked()
{
     ui->Empezar->show();
     ui->label_4->hide();
     mesa->micarta->Nivel=32;

}

void MainWindow::on_Empezar_clicked()
{

    mesa->show();


}

