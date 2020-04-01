#ifndef JUGADOR_H
#define JUGADOR_H
#include <QString>


class jugador
{
public:


    jugador();
    int ActCar=0; //Contaddor de botones activos(Carta Activada)
    bool turno;
    QString unNombre1;
    QString getNombre1();
    QString unNombre2;
    QString getNombre2();
    int puntos[2];

    //Funciones
    void setNombre1(QString unNombre1 );
    void setNombre2(QString unNombre2 );
    QString comprobar(); //Comprueba el turno

private:

    QString nombre1;
    QString nombre2;

};

#endif // JUGADOR_H
