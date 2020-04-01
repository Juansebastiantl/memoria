#ifndef CARTA_H
#define CARTA_H
#include <QString>
#include "jugador.h"


class carta
{
public:
    carta();
    int Nivel=0;
    int Cambio;
    int Vec[33];
    char Imagen[33];
    void organizar();
    void Voltear8();
    void Voltear16();
     void Voltear32();
    long long int Op[33];
    bool temporal[33];
    int puntos[2];
    bool turno;
    bool reiniciar[33];
    void eleccion();
    //int Open[8];




private:

};

#endif // CARTA_H
