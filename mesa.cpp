#include "mesa.h"
#include "ui_mesa.h"
#include "carta.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <unistd.h>
#include "mytimer.h"

Mesa::Mesa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mesa)
{
    ui->setupUi(this);

}

Mesa::~Mesa()
{
    delete ui;

}

void Mesa::on_P1_clicked()
{
    mijugador->ActCar++;
    micarta->Op[1]=1;
}
void Mesa::on_P2_clicked()
{
    mijugador->ActCar++;

    micarta->Op[2]=1;

}
void Mesa::on_P3_clicked()
{
    mijugador->ActCar++;

    micarta->Op[3]=1;

}
void Mesa::on_P4_clicked()
{
    mijugador->ActCar++;

     micarta->Op[4]=1;

}
void Mesa::on_P5_clicked()
{
    mijugador->ActCar++;

     micarta->Op[5]=1;

}
void Mesa::on_P6_clicked()
{

    mijugador->ActCar++;

    micarta->Op[6]=1;

}
void Mesa::on_P7_clicked()
{
    mijugador->ActCar++;

    micarta->Op[7]=1;

}
void Mesa::on_P8_clicked()
{
    mijugador->ActCar++;
    micarta->Op[8]=1;

}
void Mesa::on_P9_clicked()
{
    mijugador->ActCar++;
    micarta->Op[9]=1;
}

void Mesa::on_P10_clicked()
{
    mijugador->ActCar++;


    micarta->Op[10]=1;
}

void Mesa::on_P11_clicked()
{
    mijugador->ActCar++;


    micarta->Op[11]=1;
}

void Mesa::on_P12_clicked()
{
    mijugador->ActCar++;


    micarta->Op[12]=1;
}

void Mesa::on_P13_clicked()
{
    mijugador->ActCar++;


    micarta->Op[13]=1;
}

void Mesa::on_P14_clicked()
{
    mijugador->ActCar++;


    micarta->Op[14]=1;
}

void Mesa::on_P15_clicked()
{
    mijugador->ActCar++;


    micarta->Op[15]=1;
}

void Mesa::on_P16_clicked()
{
    mijugador->ActCar++;


    micarta->Op[16]=1;
}

void Mesa::on_P17_clicked()
{
    mijugador->ActCar++;


    micarta->Op[17]=1;
}

void Mesa::on_P18_clicked()
{
    mijugador->ActCar++;


    micarta->Op[18]=1;
}
void Mesa::on_P19_clicked()
{
    mijugador->ActCar++;


    micarta->Op[19]=1;
}
void Mesa::on_P20_clicked()
{
    mijugador->ActCar++;


    micarta->Op[20]=1;
}
void Mesa::on_P21_clicked()
{
    mijugador->ActCar++;


    micarta->Op[21]=1;
}
void Mesa::on_P22_clicked()
{
    mijugador->ActCar++;


    micarta->Op[22]=1;
}
void Mesa::on_P23_clicked()
{
    mijugador->ActCar++;


    micarta->Op[23]=1;
}
void Mesa::on_P24_clicked()
{
    mijugador->ActCar++;


    micarta->Op[24]=1;
}
void Mesa::on_P25_clicked()
{
    mijugador->ActCar++;


    micarta->Op[25]=1;
}
void Mesa::on_P26_clicked()
{
    mijugador->ActCar++;


    micarta->Op[26]=1;
}
void Mesa::on_P27_clicked()
{
    mijugador->ActCar++;


    micarta->Op[27]=1;
}
void Mesa::on_P28_clicked()
{
    mijugador->ActCar++;


    micarta->Op[28]=1;
}
void Mesa::on_P29_clicked()
{
    mijugador->ActCar++;


    micarta->Op[29]=1;
}
void Mesa::on_P30_clicked()
{
    mijugador->ActCar++;


    micarta->Op[30]=1;
}
void Mesa::on_P31_clicked()
{
    mijugador->ActCar++;


    micarta->Op[31]=1;
}
void Mesa::on_P32_clicked()
{
    mijugador->ActCar++;


    micarta->Op[32]=1;
}


void Mesa::on_pushButton_clicked()
{



    ui->pushButton->hide();
    ui->Reiniciar->hide();
    ui->Salir->hide();
    micarta->organizar();

    mijugador->ActCar=-1;
    mytimer();
    mytimerSlot();





}
void Mesa::mytimer()
{
    // create a timer
    timer = new QTimer(this);

    // setup signal and slot
    connect(timer, SIGNAL(timeout()),
         this, SLOT(mytimerSlot()));

    // msec
    timer->start(100);
   // ui->Nombre->setText("Turno de "+ mijugador->comprobar());
}

void Mesa::mytimerSlot()
{
    qDebug() << "Timer...";

     micarta->turno = mijugador->turno;
     micarta->Cambio = mijugador->ActCar;
     mijugador->ActCar =  micarta->Cambio;
     //micarta->Voltear32();
     micarta->eleccion();
     /*if(micarta->Nivel==8)
    {
     micarta->Voltear8();
     }
     else if(micarta->Nivel==16)
    {
     micarta->Voltear32();
     }
*/
     mijugador->ActCar =  micarta->Cambio;


    ui->C1->setText(QString(micarta->Imagen[0])+QStringLiteral("%1").arg(micarta->Op[1]));
    ui->C2->setText(QString(micarta->Imagen[1])+QStringLiteral("%1").arg(micarta->Op[2]));
    ui->C3->setText(QString(micarta->Imagen[2])+QStringLiteral("%1").arg(micarta->Op[3]));
    ui->C4->setText(QString(micarta->Imagen[3])+QStringLiteral("%1").arg(micarta->Op[4]));
    ui->C5->setText(QString(micarta->Imagen[4])+QStringLiteral("%1").arg(micarta->Op[5]));
    ui->C6->setText(QString(micarta->Imagen[5])+QStringLiteral("%1").arg(micarta->Op[6]));
    ui->C7->setText(QString(micarta->Imagen[6])+QStringLiteral("%1").arg(micarta->Op[7]));
    ui->C8->setText(QString(micarta->Imagen[7])+QStringLiteral("%1").arg(micarta->Op[8]));
    //16
    ui->C9->setText(QString(micarta->Imagen[8])+QStringLiteral("%1").arg(micarta->Op[9]));
    ui->C10->setText(QString(micarta->Imagen[9])+QStringLiteral("%1").arg(micarta->Op[10]));
    ui->C11->setText(QString(micarta->Imagen[10])+QStringLiteral("%1").arg(micarta->Op[11]));
    ui->C12->setText(QString(micarta->Imagen[11])+QStringLiteral("%1").arg(micarta->Op[12]));
    ui->C13->setText(QString(micarta->Imagen[12])+QStringLiteral("%1").arg(micarta->Op[13]));
    ui->C14->setText(QString(micarta->Imagen[13])+QStringLiteral("%1").arg(micarta->Op[14]));
    ui->C15->setText(QString(micarta->Imagen[14])+QStringLiteral("%1").arg(micarta->Op[15]));
    ui->C16->setText(QString(micarta->Imagen[15])+QStringLiteral("%1").arg(micarta->Op[16]));
    //32
    ui->C17->setText(QString(micarta->Imagen[16])+QStringLiteral("%1").arg(micarta->Op[17]));
    ui->C18->setText(QString(micarta->Imagen[17])+QStringLiteral("%1").arg(micarta->Op[18]));
    ui->C19->setText(QString(micarta->Imagen[18])+QStringLiteral("%1").arg(micarta->Op[19]));
    ui->C20->setText(QString(micarta->Imagen[19])+QStringLiteral("%1").arg(micarta->Op[20]));
    ui->C21->setText(QString(micarta->Imagen[20])+QStringLiteral("%1").arg(micarta->Op[21]));
    ui->C22->setText(QString(micarta->Imagen[21])+QStringLiteral("%1").arg(micarta->Op[22]));
    ui->C23->setText(QString(micarta->Imagen[22])+QStringLiteral("%1").arg(micarta->Op[23]));
    ui->C24->setText(QString(micarta->Imagen[23])+QStringLiteral("%1").arg(micarta->Op[24]));

    ui->C25->setText(QString(micarta->Imagen[24])+QStringLiteral("%1").arg(micarta->Op[25]));
    ui->C26->setText(QString(micarta->Imagen[25])+QStringLiteral("%1").arg(micarta->Op[26]));
    ui->C27->setText(QString(micarta->Imagen[26])+QStringLiteral("%1").arg(micarta->Op[27]));
    ui->C28->setText(QString(micarta->Imagen[27])+QStringLiteral("%1").arg(micarta->Op[28]));
    ui->C29->setText(QString(micarta->Imagen[28])+QStringLiteral("%1").arg(micarta->Op[29]));
    ui->C30->setText(QString(micarta->Imagen[29])+QStringLiteral("%1").arg(micarta->Op[30]));
    ui->C31->setText(QString(micarta->Imagen[30])+QStringLiteral("%1").arg(micarta->Op[31]));
    ui->C32->setText(QString(micarta->Imagen[31])+QStringLiteral("%1").arg(micarta->Op[32]));

    ui->Nombre->setText("Turno de "+ mijugador->comprobar());
    ui->Puntos1->setText(mijugador->getNombre1()+QStringLiteral("%1").arg(micarta->puntos[0]));
    ui->Puntos2->setText(mijugador->getNombre2()+QStringLiteral("%1").arg(micarta->puntos[1]));

    if(mijugador->ActCar ==1)
    {
        micarta->Op[1]=0;
        micarta->Op[2]=0;
        micarta->Op[3]=0;
        micarta->Op[4]=0;
        micarta->Op[5]=0;
        micarta->Op[6]=0;
        micarta->Op[7]=0;
        micarta->Op[8]=0;
        //16
        micarta->Op[9]=0;
        micarta->Op[10]=0;
        micarta->Op[11]=0;
        micarta->Op[12]=0;
        micarta->Op[13]=0;
        micarta->Op[14]=0;
        micarta->Op[15]=0;
        micarta->Op[16]=0;

        micarta->Op[17]=0;
        micarta->Op[18]=0;
        micarta->Op[19]=0;
        micarta->Op[20]=0;
        micarta->Op[21]=0;
        micarta->Op[22]=0;
        micarta->Op[23]=0;
        micarta->Op[24]=0;
        //32
        micarta->Op[25]=0;
        micarta->Op[26]=0;
        micarta->Op[27]=0;
        micarta->Op[28]=0;
        micarta->Op[29]=0;
        micarta->Op[30]=0;
        micarta->Op[31]=0;
        micarta->Op[32]=0;
    }
    if(micarta->puntos[0]>micarta->puntos[1])
    {
        ui->Ganador->setText("Ganador "+mijugador->getNombre1());
    }

    else if(micarta->puntos[1]>micarta->puntos[0])
    {
        ui->Ganador->setText("Ganador "+mijugador->getNombre2());
    }
    else
    {
        ui->Ganador->setText("Ningun ganador ");
    }

   if(micarta->Nivel==8 && (micarta->puntos[1]+micarta->puntos[0]==4))

    {
        ui->Reiniciar->show();
        ui->Salir->show();

    }
   else if(micarta->Nivel==16 && (micarta->puntos[1]+micarta->puntos[0]==8) )

    {
        ui->Reiniciar->show();
           ui->Salir->show();

    }
   else if(micarta->Nivel==32 && (micarta->puntos[1]+micarta->puntos[0]==16) )

    {
        ui->Reiniciar->show();
           ui->Salir->show();

    }
   else
   {
       ui->Reiniciar->hide();
          ui->Salir->show();
   }

   if(micarta->Nivel==8)
   {
        ui->P9->hide();
        ui->C9->hide();
        ui->P10->hide();
        ui->C10->hide();
        ui->P11->hide();
        ui->C11->hide();
        ui->P12->hide();
        ui->C12->hide();
        ui->P13->hide();
        ui->C13->hide();
        ui->P14->hide();
        ui->C14->hide();
        ui->P15->hide();
        ui->C15->hide();
        ui->P16->hide();
        ui->C16->hide();
        ui->P17->hide();
        ui->C17->hide();
        ui->P18->hide();
        ui->C18->hide();
        ui->P19->hide();
        ui->C19->hide();
        ui->P20->hide();
        ui->C20->hide();
        ui->P21->hide();
        ui->C21->hide();
        ui->P22->hide();
        ui->C22->hide();
        ui->P23->hide();
        ui->C23->hide();
        ui->P24->hide();
        ui->C24->hide();
        ui->P25->hide();
        ui->C25->hide();
        ui->P26->hide();
        ui->C26->hide();
        ui->P27->hide();
        ui->C27->hide();
        ui->P28->hide();
        ui->C28->hide();
        ui->P29->hide();
        ui->C29->hide();
        ui->P30->hide();
        ui->C30->hide();
        ui->P31->hide();
        ui->C31->hide();
        ui->P32->hide();
        ui->C32->hide();

   }
   else if(micarta->Nivel==16)
   {
       ui->P17->hide();
       ui->C17->hide();
       ui->P18->hide();
       ui->C18->hide();
       ui->P19->hide();
       ui->C19->hide();
       ui->P20->hide();
       ui->C20->hide();
       ui->P21->hide();
       ui->C21->hide();
       ui->P22->hide();
       ui->C22->hide();
       ui->P23->hide();
       ui->C23->hide();
       ui->P24->hide();
       ui->C24->hide();
       ui->P25->hide();
       ui->C25->hide();
       ui->P26->hide();
       ui->C26->hide();
       ui->P27->hide();
       ui->C27->hide();
       ui->P28->hide();
       ui->C28->hide();
       ui->P29->hide();
       ui->C29->hide();
       ui->P30->hide();
       ui->C30->hide();
       ui->P31->hide();
       ui->C31->hide();
       ui->P32->hide();
       ui->C32->hide();
   }

}








void Mesa::on_Reiniciar_clicked()
{
    for (int a=0;a>33;a++)
    {
    micarta->temporal[a]=false;
    }
    micarta->temporal[0]=false;
    micarta->temporal[1]=false;
    micarta->temporal[2]=false;
    micarta->temporal[3]=false;
    micarta->temporal[4]=false;
    micarta->temporal[5]=false;
    micarta->temporal[6]=false;
    micarta->temporal[7]=false;
    micarta->temporal[8]=false;
    micarta->temporal[9]=false;
    //16
    micarta->temporal[10]=false;
    micarta->temporal[11]=false;
    micarta->temporal[12]=false;
    micarta->temporal[13]=false;
    micarta->temporal[14]=false;
    micarta->temporal[15]=false;
    //32
    micarta->temporal[16]=false;
    micarta->temporal[17]=false;
    micarta->temporal[18]=false;
    micarta->temporal[19]=false;
    micarta->temporal[20]=false;
    micarta->temporal[21]=false;
    micarta->temporal[22]=false;
    micarta->temporal[23]=false;
    micarta->temporal[24]=false;
    micarta->temporal[25]=false;
    micarta->temporal[26]=false;
    micarta->temporal[27]=false;
    micarta->temporal[28]=false;
    micarta->temporal[29]=false;
    micarta->temporal[30]=false;
    micarta->temporal[31]=false;
    micarta->temporal[32]=false;
    micarta->temporal[33]=false;

    mijugador->turno=0;
    micarta->Op[0]=0;
    micarta->Op[1]=0;
    micarta->Op[2]=0;
    micarta->Op[3]=0;
    micarta->Op[4]=0;
    micarta->Op[5]=0;
    micarta->Op[6]=0;
    micarta->Op[7]=0;
    micarta->Op[8]=0;
    //16
    micarta->Op[9]=0;
    micarta->Op[10]=0;
    micarta->Op[11]=0;
    micarta->Op[12]=0;
    micarta->Op[13]=0;
    micarta->Op[14]=0;
    micarta->Op[15]=0;
    micarta->Op[16]=0;
    micarta->Op[17]=0;

    micarta->Op[18]=0;
    micarta->Op[19]=0;
    micarta->Op[20]=0;
    micarta->Op[21]=0;
    micarta->Op[22]=0;
    micarta->Op[23]=0;
    micarta->Op[24]=0;
    //16
    micarta->Op[25]=0;
    micarta->Op[26]=0;
    micarta->Op[27]=0;
    micarta->Op[28]=0;
    micarta->Op[29]=0;
    micarta->Op[30]=0;
    micarta->Op[31]=0;
    micarta->Op[32]=0;

    micarta->puntos[0]=0;
    micarta->puntos[1]=0;

    ui->Reiniciar->hide();

    mijugador->ActCar=-1;
    micarta->organizar();


}




void Mesa::on_Salir_clicked()
{
    this->close();
}
