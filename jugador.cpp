#include "jugador.h"

jugador::jugador()
{

}

QString jugador::getNombre1()
{
    return nombre1;
}
QString jugador::getNombre2()
{
    return nombre2;
}
void jugador::setNombre1(QString unNombre1)
{
    nombre1 = unNombre1;
}

void jugador::setNombre2(QString unNombre2)
{
    nombre2 = unNombre2;
}
QString jugador::comprobar()
{
 QString A;
 if(ActCar==2)
    {
     turno=!turno;

    ActCar=0;
    }

 if(turno==0)
  {
     A=nombre1;
  }
 if(turno==1)
 {
     A=nombre2;
 }


return A;




}
