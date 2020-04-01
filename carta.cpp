#include "carta.h"

carta::carta()
{

}
void carta::organizar()
{

    int i,j;
    int vector[32];

    vector[0]=0;
    vector[1]=1;
    vector[2]=2;
    vector[3]=3;
    vector[4]=4;
    vector[5]=5;
    vector[6]=6;
    vector[7]=7;
//16
    vector[8]=8;
    vector[9]=9;
    vector[10]=10;
    vector[11]=11;
    vector[12]=12;
    vector[13]=13;
    vector[14]=14;
    vector[15]=15;
//32
    vector[16]=16;
    vector[17]=17;
    vector[18]=18;
    vector[19]=19;
    vector[20]=20;
    vector[21]=21;
    vector[22]=22;
    vector[23]=23;
    vector[24]=24;
    vector[25]=25;
    vector[26]=26;
    vector[27]=27;
    vector[28]=28;
    vector[29]=29;
    vector[30]=30;
    vector[31]=31;

    if(Nivel==8)
       {
           srand(time(0)); // iniciando la semilla aleatoria

           // Formula a + rand() % (b-a+1)


           for(i=0;i<8;i++)
           {
               // Genera numero aleatorio
               int num = rand()%8;

              if(i>0)
              {
                 // Verifica si no se ha generado antes
                 for(j=0; j < i; j++)

                     if(num==vector[j])
                     {
                        num = rand()%8;
                        j=-1;
                     }
               }

               vector [ i ] =num;
           }
       }

    else if(Nivel==16)
    {
        srand(time(0)); // iniciando la semilla aleatoria

        // Formula a + rand() % (b-a+1)


        for(i=0;i<16;i++)
        {
            // Genera numero aleatorio
            int num = rand()%16;

           if(i>0)
           {
              // Verifica si no se ha generado antes
              for(j=0; j < i; j++)

                  if(num==vector[j])
                  {
                     num = rand()%16;
                     j=-1;
                  }
            }

            vector [ i ] =num;
        }
    }

    else if(Nivel==32)
    {
        srand(time(0)); // iniciando la semilla aleatoria

        // Formula a + rand() % (b-a+1)


        for(i=0;i<32;i++)
        {
            // Genera numero aleatorio
            int num = rand()%32;

           if(i>0)
           {
              // Verifica si no se ha generado antes
              for(j=0; j < i; j++)

                  if(num==vector[j])
                  {
                     num = rand()%32;
                     j=-1;
                  }
            }

            vector [ i ] =num;
        }
    }




Vec[0]=vector[0];
Vec[1]=vector[1];
Vec[2]=vector[2];
Vec[3]=vector[3];
Vec[4]=vector[4];
Vec[5]=vector[5];
Vec[6]=vector[6];
Vec[7]=vector[7];

//Con 16

Vec[8]=vector[8];
Vec[9]=vector[9];
Vec[10]=vector[10];
Vec[11]=vector[11];
Vec[12]=vector[12];
Vec[13]=vector[13];
Vec[14]=vector[14];
Vec[15]=vector[15];
//Con 32

Vec[16]=vector[16];
Vec[17]=vector[17];
Vec[18]=vector[18];
Vec[19]=vector[19];
Vec[20]=vector[20];
Vec[21]=vector[21];
Vec[22]=vector[22];
Vec[23]=vector[23];

//Con 16

Vec[24]=vector[24];
Vec[25]=vector[25];
Vec[26]=vector[26];
Vec[27]=vector[27];
Vec[28]=vector[28];
Vec[29]=vector[29];
Vec[30]=vector[30];
Vec[31]=vector[31];

Imagen[Vec[0]]='A';
Imagen[Vec[1]]='B';
Imagen[Vec[2]]='C';
Imagen[Vec[3]]='D';
Imagen[Vec[4]]='A';
Imagen[Vec[5]]='B';
Imagen[Vec[6]]='C';
Imagen[Vec[7]]='D';
//Con 16

Imagen[Vec[8]]='E';
Imagen[Vec[9]]='F';
Imagen[Vec[10]]='G';
Imagen[Vec[11]]='H';
Imagen[Vec[12]]='E';
Imagen[Vec[13]]='F';
Imagen[Vec[14]]='G';
Imagen[Vec[15]]='H';

//Con 32

Imagen[Vec[16]]='I';
Imagen[Vec[17]]='J';
Imagen[Vec[18]]='K';
Imagen[Vec[19]]='L';
Imagen[Vec[20]]='I';
Imagen[Vec[21]]='J';
Imagen[Vec[22]]='K';
Imagen[Vec[23]]='L';


Imagen[Vec[24]]='M';
Imagen[Vec[25]]='N';
Imagen[Vec[26]]='O';
Imagen[Vec[27]]='P';
Imagen[Vec[28]]='M';
Imagen[Vec[29]]='N';
Imagen[Vec[30]]='O';
Imagen[Vec[31]]='P';



}

void carta::Voltear8()
{
    bool temporalA[8];
    char temporalB[8];
    int punto=0;
    int cambiar=Cambio;




    temporalA[Vec[0]]=  temporal[Vec[0]];
    temporalA[Vec[1]]=  temporal[Vec[1]];
    temporalA[Vec[2]]=  temporal[Vec[2]];
    temporalA[Vec[3]]=  temporal[Vec[3]];
    temporalA[Vec[4]]=  temporal[Vec[4]];
    temporalA[Vec[5]]=  temporal[Vec[5]];
    temporalA[Vec[6]]=  temporal[Vec[6]];
    temporalA[Vec[7]]=  temporal[Vec[7]];



    temporalB[Vec[0]]=  Imagen[Vec[0]];
    temporalB[Vec[1]]=  Imagen[Vec[1]];
    temporalB[Vec[2]]=  Imagen[Vec[2]];
    temporalB[Vec[3]]=  Imagen[Vec[3]];
    temporalB[Vec[4]]=  Imagen[Vec[4]];
    temporalB[Vec[5]]=  Imagen[Vec[5]];
    temporalB[Vec[6]]=  Imagen[Vec[6]];
    temporalB[Vec[7]]=  Imagen[Vec[7]];




    if(Op[Vec[0]+1]==1 && Op[Vec[4]+1]==1)
    {
        if(temporalA[0]==0)
        {
        punto=punto+1;
        }
        temporalA[0]=1;


    }

    if((Op[Vec[1]+1]==1 && Op[Vec[5]+1]==1))
    {

        if(temporalA[1]==0)
        {
        punto=punto+1;
        }
        temporalA[1]=1;


    }
    if((Op[Vec[2]+1]==1 && Op[Vec[6]+1]==1))
    {

        if(temporalA[2]==0)
        {
        punto=punto+1;
        }
        temporalA[2]=1;

    }
    if((Op[Vec[3]+1]==1 && Op[Vec[7]+1]==1))
    {

        if(temporalA[3]==0)
        {
        punto=punto+1;
        }
        temporalA[3]=1;

    }
    if(Op[Vec[0]+1]==1||temporalA[0]==1)//A
    {
         temporalB[Vec[0]] = 'A';

    }
    else
    {
         temporalB[Vec[0]] = 'x';
    }
    if(Op[Vec[4]+1]==1||temporalA[0]==1)//A
    {
         temporalB[Vec[4]] = 'A';
    }
    else
    {
         temporalB[Vec[4]] = 'x';
    }


    if(Op[Vec[1]+1]==1||temporalA[1]==1)//B
    {
         temporalB[Vec[1]] = 'B';
    }
    else
    {
         temporalB[Vec[1]] = 'x';
    }
    if(Op[Vec[5]+1]==1||temporalA[1]==1)
    {
         temporalB[Vec[5]] = 'B';
    }
    else
    {
         temporalB[Vec[5]] = 'x';
    }

    //C

    if(Op[Vec[2]+1]==1||temporalA[2]==1)//C
    {
         temporalB[Vec[2]] = 'C';
    }
    else
    {
         temporalB[Vec[2]] = 'x';
    }
    if(Op[Vec[6]+1]==1||temporalA[2]==1)
    {
         temporalB[Vec[6]] = 'C';
    }
    else
    {
         temporalB[Vec[6]] = 'x';
    }

    //D

    if(Op[Vec[3]+1]==1||temporalA[3]==1)//B
    {
         temporalB[Vec[3]] = 'D';
    }
    else
    {
         temporalB[Vec[3]] = 'x';
    }
    if(Op[Vec[7]+1]==1||temporalA[3]==1)
    {
         temporalB[Vec[7]] = 'D';
    }
    else
    {
         temporalB[Vec[7]] = 'x';
    }



    temporal[Vec[0]]=  temporalA[Vec[0]];
    temporal[Vec[1]]=  temporalA[Vec[1]];
    temporal[Vec[2]]=  temporalA[Vec[2]];
    temporal[Vec[3]]=  temporalA[Vec[3]];
    temporal[Vec[4]]=  temporalA[Vec[4]];
    temporal[Vec[5]]=  temporalA[Vec[5]];
    temporal[Vec[6]]=  temporalA[Vec[6]];
    temporal[Vec[7]]=  temporalA[Vec[7]];

    Imagen[Vec[0]]= temporalB[Vec[0]];
    Imagen[Vec[1]]= temporalB[Vec[1]];
    Imagen[Vec[2]]= temporalB[Vec[2]];
    Imagen[Vec[3]]= temporalB[Vec[3]];
    Imagen[Vec[4]]= temporalB[Vec[4]];
    Imagen[Vec[5]]= temporalB[Vec[5]];
    Imagen[Vec[6]]= temporalB[Vec[6]];
    Imagen[Vec[7]]= temporalB[Vec[7]];


    if(punto>=1)
    {
        cambiar=-1;
    }
    puntos[turno]= puntos[turno]+ punto;

    Cambio=cambiar;
    punto=0;



}




void carta::Voltear16()
{
    bool temporalA[16];
    char temporalB[16];
    int punto=0;
    int cambiar=Cambio;




    temporalA[Vec[0]]=  temporal[Vec[0]];
    temporalA[Vec[1]]=  temporal[Vec[1]];
    temporalA[Vec[2]]=  temporal[Vec[2]];
    temporalA[Vec[3]]=  temporal[Vec[3]];
    temporalA[Vec[4]]=  temporal[Vec[4]];
    temporalA[Vec[5]]=  temporal[Vec[5]];
    temporalA[Vec[6]]=  temporal[Vec[6]];
    temporalA[Vec[7]]=  temporal[Vec[7]];

    temporalA[Vec[8]]=  temporal[Vec[8]];
    temporalA[Vec[9]]=  temporal[Vec[9]];
    temporalA[Vec[10]]=  temporal[Vec[10]];
    temporalA[Vec[11]]=  temporal[Vec[11]];
    temporalA[Vec[12]]=  temporal[Vec[12]];
    temporalA[Vec[13]]=  temporal[Vec[13]];
    temporalA[Vec[14]]=  temporal[Vec[14]];
    temporalA[Vec[15]]=  temporal[Vec[15]];
    //Con 16



    temporalB[Vec[0]]=  Imagen[Vec[0]];
    temporalB[Vec[1]]=  Imagen[Vec[1]];
    temporalB[Vec[2]]=  Imagen[Vec[2]];
    temporalB[Vec[3]]=  Imagen[Vec[3]];
    temporalB[Vec[4]]=  Imagen[Vec[4]];
    temporalB[Vec[5]]=  Imagen[Vec[5]];
    temporalB[Vec[6]]=  Imagen[Vec[6]];
    temporalB[Vec[7]]=  Imagen[Vec[7]];

    temporalB[Vec[8]]=  Imagen[Vec[8]];
    temporalB[Vec[9]]=  Imagen[Vec[9]];
    temporalB[Vec[10]]=  Imagen[Vec[10]];
    temporalB[Vec[11]]=  Imagen[Vec[11]];
    temporalB[Vec[12]]=  Imagen[Vec[12]];
    temporalB[Vec[13]]=  Imagen[Vec[13]];
    temporalB[Vec[14]]=  Imagen[Vec[14]];
    temporalB[Vec[15]]=  Imagen[Vec[15]];

    //Con 16






    if(Op[Vec[0]+1]==1 && Op[Vec[4]+1]==1)
    {
        if(temporalA[0]==0)
        {
        punto=punto+1;
        }
        temporalA[0]=1;


    }

    if((Op[Vec[1]+1]==1 && Op[Vec[5]+1]==1))
    {

        if(temporalA[1]==0)
        {
        punto=punto+1;
        }
        temporalA[1]=1;


    }
    if((Op[Vec[2]+1]==1 && Op[Vec[6]+1]==1))
    {

        if(temporalA[2]==0)
        {
        punto=punto+1;
        }
        temporalA[2]=1;

    }
    if((Op[Vec[3]+1]==1 && Op[Vec[7]+1]==1))
    {

        if(temporalA[3]==0)
        {
        punto=punto+1;
        }
        temporalA[3]=1;

    }

    //Con 16

      if((Op[Vec[8]+1]==1 && Op[Vec[15]+1]==1))
       {

           if(temporalA[4]==0)
           {
           punto=punto+1;
           }
           temporalA[4]=1;

       }

       if((Op[Vec[9]+1]==1 && Op[Vec[14]+1]==1))
       {

           if(temporalA[5]==0)
           {
           punto=punto+1;
           }
           temporalA[5]=1;

       }

       if((Op[Vec[10]+1]==1 && Op[Vec[13]+1]==1))
       {

           if(temporalA[6]==0)
           {
           punto=punto+1;
           }
           temporalA[6]=1;

       }
       if((Op[Vec[11]+1]==1 && Op[Vec[12]+1]==1))
       {

           if(temporalA[7]==0)
           {
           punto=punto+1;
           }
           temporalA[7]=1;

       }

    if(Op[Vec[0]+1]==1||temporalA[0]==1)//A
    {
         temporalB[Vec[0]] = 'A';

    }
    else
    {
         temporalB[Vec[0]] = 'x';
    }
    if(Op[Vec[4]+1]==1||temporalA[0]==1)//A
    {
         temporalB[Vec[4]] = 'A';
    }
    else
    {
         temporalB[Vec[4]] = 'x';
    }


    if(Op[Vec[1]+1]==1||temporalA[1]==1)//B
    {
         temporalB[Vec[1]] = 'B';
    }
    else
    {
         temporalB[Vec[1]] = 'x';
    }
    if(Op[Vec[5]+1]==1||temporalA[1]==1)//B
    {
         temporalB[Vec[5]] = 'B';
    }
    else
    {
         temporalB[Vec[5]] = 'x';
    }

    //C

    if(Op[Vec[2]+1]==1||temporalA[2]==1)//C
    {
         temporalB[Vec[2]] = 'C';
    }
    else
    {
         temporalB[Vec[2]] = 'x';
    }
    if(Op[Vec[6]+1]==1||temporalA[2]==1)//C
    {
         temporalB[Vec[6]] = 'C';
    }
    else
    {
         temporalB[Vec[6]] = 'x';
    }

    //D

    if(Op[Vec[3]+1]==1||temporalA[3]==1)//D
    {
         temporalB[Vec[3]] = 'D';
    }
    else
    {
         temporalB[Vec[3]] = 'x';
    }
    if(Op[Vec[7]+1]==1||temporalA[3]==1)//D
    {
         temporalB[Vec[7]] = 'D';
    }
    else
    {
         temporalB[Vec[7]] = 'x';
    }

           if(Op[Vec[8]+1]==1||temporalA[4]==1)//E
            {
                 temporalB[Vec[8]] = 'E';

            }
            else
            {
                 temporalB[Vec[8]] = 'x';
            }

            if(Op[Vec[15]+1]==1||temporalA[4]==1)//E
            {
                 temporalB[Vec[15]] = 'E';
            }
            else
            {
                 temporalB[Vec[15]] = 'x';
            }


            if(Op[Vec[9]+1]==1||temporalA[5]==1)//F
            {
                 temporalB[Vec[9]] = 'F';

            }
            else
            {
                 temporalB[Vec[9]] = 'x';
            }
            if(Op[Vec[14]+1]==1||temporalA[5]==1)//F
            {
                 temporalB[Vec[14]] = 'F';
            }
            else
            {
                 temporalB[Vec[14]] = 'x';
            }

            if(Op[Vec[10]+1]==1||temporalA[6]==1)//G
            {
                 temporalB[Vec[10]] = 'G';

            }
            else
            {
                 temporalB[Vec[10]] = 'x';
            }
            if(Op[Vec[13]+1]==1||temporalA[6]==1)//G
            {
                 temporalB[Vec[13]] = 'G';
            }
            else
            {
                 temporalB[Vec[13]] = 'x';
            }
            if(Op[Vec[11]+1]==1||temporalA[7]==1)//H
            {
                 temporalB[Vec[11]] = 'H';

            }
            else
            {
                 temporalB[Vec[11]] = 'x';
            }
            if(Op[Vec[12]+1]==1||temporalA[7]==1)//H

            {
                 temporalB[Vec[12]] = 'H';
            }
            else
            {
                 temporalB[Vec[12]] = 'x';
            }






    temporal[Vec[0]]=  temporalA[Vec[0]];
    temporal[Vec[1]]=  temporalA[Vec[1]];
    temporal[Vec[2]]=  temporalA[Vec[2]];
    temporal[Vec[3]]=  temporalA[Vec[3]];
    temporal[Vec[4]]=  temporalA[Vec[4]];
    temporal[Vec[5]]=  temporalA[Vec[5]];
    temporal[Vec[6]]=  temporalA[Vec[6]];
    temporal[Vec[7]]=  temporalA[Vec[7]];

    temporal[Vec[8]]=  temporalA[Vec[8]];
    temporal[Vec[9]]=  temporalA[Vec[9]];
    temporal[Vec[10]]=  temporalA[Vec[10]];
    temporal[Vec[11]]=  temporalA[Vec[11]];
    temporal[Vec[12]]=  temporalA[Vec[12]];
    temporal[Vec[13]]=  temporalA[Vec[13]];
    temporal[Vec[14]]=  temporalA[Vec[14]];
    temporal[Vec[15]]=  temporalA[Vec[15]];

    Imagen[Vec[0]]= temporalB[Vec[0]];
    Imagen[Vec[1]]= temporalB[Vec[1]];
    Imagen[Vec[2]]= temporalB[Vec[2]];
    Imagen[Vec[3]]= temporalB[Vec[3]];
    Imagen[Vec[4]]= temporalB[Vec[4]];
    Imagen[Vec[5]]= temporalB[Vec[5]];
    Imagen[Vec[6]]= temporalB[Vec[6]];
    Imagen[Vec[7]]= temporalB[Vec[7]];
    //16

    Imagen[Vec[8]]= temporalB[Vec[8]];
    Imagen[Vec[9]]= temporalB[Vec[9]];
    Imagen[Vec[10]]= temporalB[Vec[10]];
    Imagen[Vec[11]]= temporalB[Vec[11]];
    Imagen[Vec[12]]= temporalB[Vec[12]];
    Imagen[Vec[13]]= temporalB[Vec[13]];
    Imagen[Vec[14]]= temporalB[Vec[14]];
    Imagen[Vec[15]]= temporalB[Vec[15]];


    if(punto>=1)
    {
        cambiar=-1;
    }
    puntos[turno]= puntos[turno]+ punto;

    Cambio=cambiar;
    punto=0;




}


void carta::Voltear32()
{
    bool temporalA[32];
    char temporalB[32];
    int punto=0;
    int cambiar=Cambio;




    temporalA[Vec[0]]=  temporal[Vec[0]];
    temporalA[Vec[1]]=  temporal[Vec[1]];
    temporalA[Vec[2]]=  temporal[Vec[2]];
    temporalA[Vec[3]]=  temporal[Vec[3]];
    temporalA[Vec[4]]=  temporal[Vec[4]];
    temporalA[Vec[5]]=  temporal[Vec[5]];
    temporalA[Vec[6]]=  temporal[Vec[6]];
    temporalA[Vec[7]]=  temporal[Vec[7]];

    //16
    temporalA[Vec[8]]=  temporal[Vec[8]];
    temporalA[Vec[9]]=  temporal[Vec[9]];
    temporalA[Vec[10]]=  temporal[Vec[10]];
    temporalA[Vec[11]]=  temporal[Vec[11]];
    temporalA[Vec[12]]=  temporal[Vec[12]];
    temporalA[Vec[13]]=  temporal[Vec[13]];
    temporalA[Vec[14]]=  temporal[Vec[14]];
    temporalA[Vec[15]]=  temporal[Vec[15]];

    //32
    temporalA[Vec[17]]=  temporal[Vec[17]];
    temporalA[Vec[18]]=  temporal[Vec[18]];
    temporalA[Vec[19]]=  temporal[Vec[19]];
    temporalA[Vec[20]]=  temporal[Vec[20]];
    temporalA[Vec[21]]=  temporal[Vec[21]];
    temporalA[Vec[22]]=  temporal[Vec[22]];
    temporalA[Vec[23]]=  temporal[Vec[23]];
    temporalA[Vec[24]]=  temporal[Vec[24]];
    temporalA[Vec[25]]=  temporal[Vec[25]];
    temporalA[Vec[26]]=  temporal[Vec[26]];
    temporalA[Vec[27]]=  temporal[Vec[27]];
    temporalA[Vec[28]]=  temporal[Vec[28]];
    temporalA[Vec[29]]=  temporal[Vec[29]];
    temporalA[Vec[30]]=  temporal[Vec[30]];
    temporalA[Vec[31]]=  temporal[Vec[31]];
    temporalA[Vec[32]]=  temporal[Vec[32]];




    temporalB[Vec[0]]=  Imagen[Vec[0]];
    temporalB[Vec[1]]=  Imagen[Vec[1]];
    temporalB[Vec[2]]=  Imagen[Vec[2]];
    temporalB[Vec[3]]=  Imagen[Vec[3]];
    temporalB[Vec[4]]=  Imagen[Vec[4]];
    temporalB[Vec[5]]=  Imagen[Vec[5]];
    temporalB[Vec[6]]=  Imagen[Vec[6]];
    temporalB[Vec[7]]=  Imagen[Vec[7]];
 //Con 16
    temporalB[Vec[8]]=   Imagen[Vec[8]];
    temporalB[Vec[9]]=   Imagen[Vec[9]];
    temporalB[Vec[10]]=  Imagen[Vec[10]];
    temporalB[Vec[11]]=  Imagen[Vec[11]];
    temporalB[Vec[12]]=  Imagen[Vec[12]];
    temporalB[Vec[13]]=  Imagen[Vec[13]];
    temporalB[Vec[14]]=  Imagen[Vec[14]];
    temporalB[Vec[15]]=  Imagen[Vec[15]];
  //Con 32
    temporalB[Vec[16]]=  Imagen[Vec[16]];
    temporalB[Vec[17]]=  Imagen[Vec[17]];
    temporalB[Vec[18]]=  Imagen[Vec[18]];
    temporalB[Vec[19]]=  Imagen[Vec[19]];
    temporalB[Vec[20]]=  Imagen[Vec[20]];
    temporalB[Vec[21]]=  Imagen[Vec[21]];
    temporalB[Vec[22]]=  Imagen[Vec[22]];
    temporalB[Vec[23]]=  Imagen[Vec[23]];
    temporalB[Vec[24]]=  Imagen[Vec[24]];
    temporalB[Vec[25]]=  Imagen[Vec[25]];
    temporalB[Vec[26]]=  Imagen[Vec[26]];
    temporalB[Vec[27]]=  Imagen[Vec[27]];
    temporalB[Vec[28]]=  Imagen[Vec[28]];
    temporalB[Vec[29]]=  Imagen[Vec[29]];
    temporalB[Vec[30]]=  Imagen[Vec[30]];
    temporalB[Vec[31]]=  Imagen[Vec[31]];








    if(Op[Vec[0]+1]==1 && Op[Vec[4]+1]==1)
    {
        if(temporalA[0]==0)
        {
        punto=punto+1;
        }
        temporalA[0]=1;


    }

    if((Op[Vec[1]+1]==1 && Op[Vec[5]+1]==1))
    {

        if(temporalA[1]==0)
        {
        punto=punto+1;
        }
        temporalA[1]=1;


    }
    if((Op[Vec[2]+1]==1 && Op[Vec[6]+1]==1))
    {

        if(temporalA[2]==0)
        {
        punto=punto+1;
        }
        temporalA[2]=1;

    }
    if((Op[Vec[3]+1]==1 && Op[Vec[7]+1]==1))
    {

        if(temporalA[3]==0)
        {
        punto=punto+1;
        }
        temporalA[3]=1;

    }

    //Con 16

      if((Op[Vec[8]+1]==1 && Op[Vec[15]+1]==1))
       {

           if(temporalA[4]==0)
           {
           punto=punto+1;
           }
           temporalA[4]=1;

       }

       if((Op[Vec[9]+1]==1 && Op[Vec[14]+1]==1))
       {

           if(temporalA[5]==0)
           {
           punto=punto+1;
           }
           temporalA[5]=1;

       }

       if((Op[Vec[10]+1]==1 && Op[Vec[13]+1]==1))
       {

           if(temporalA[6]==0)
           {
           punto=punto+1;
           }
           temporalA[6]=1;

       }
       if((Op[Vec[11]+1]==1 && Op[Vec[12]+1]==1))
       {

           if(temporalA[7]==0)
           {
           punto=punto+1;
           }
           temporalA[7]=1;

       }
      //32
       if(Op[Vec[16]+1]==1 && Op[Vec[20]+1]==1)
       {
           if(temporalA[8]==0)
           {
           punto=punto+1;
           }
           temporalA[8]=1;


       }

       if((Op[Vec[17]+1]==1 && Op[Vec[21]+1]==1))
       {

           if(temporalA[9]==0)
           {
           punto=punto+1;
           }
           temporalA[9]=1;


       }
       if((Op[Vec[18]+1]==1 && Op[Vec[22]+1]==1))
       {

           if(temporalA[10]==0)
           {
           punto=punto+1;
           }
           temporalA[10]=1;

       }
       if((Op[Vec[19]+1]==1 && Op[Vec[23]+1]==1))
       {

           if(temporalA[11]==0)
           {
           punto=punto+1;
           }
           temporalA[11]=1;

       }
       //Otro



         if((Op[Vec[24]+1]==1 && Op[Vec[28]+1]==1))
          {

              if(temporalA[12]==0)
              {
              punto=punto+1;
              }
              temporalA[12]=1;

          }

          if((Op[Vec[25]+1]==1 && Op[Vec[29]+1]==1))
          {

              if(temporalA[13]==0)
              {
              punto=punto+1;
              }
              temporalA[13]=1;

          }

          if((Op[Vec[26]+1]==1 && Op[Vec[30]+1]==1))
          {

              if(temporalA[14]==0)
              {
              punto=punto+1;
              }
              temporalA[14]=1;

          }
          if((Op[Vec[27]+1]==1 && Op[Vec[31]+1]==1))
          {

              if(temporalA[15]==0)
              {
              punto=punto+1;
              }
              temporalA[15]=1;

          }
       //


    if(Op[Vec[0]+1]==1||temporalA[0]==1)//A
    {
         temporalB[Vec[0]] = 'A';

    }
    else
    {
         temporalB[Vec[0]] = 'x';
    }
    if(Op[Vec[4]+1]==1||temporalA[0]==1)//A
    {
         temporalB[Vec[4]] = 'A';
    }
    else
    {
         temporalB[Vec[4]] = 'x';
    }


    if(Op[Vec[1]+1]==1||temporalA[1]==1)//B
    {
         temporalB[Vec[1]] = 'B';
    }
    else
    {
         temporalB[Vec[1]] = 'x';
    }
    if(Op[Vec[5]+1]==1||temporalA[1]==1)//B
    {
         temporalB[Vec[5]] = 'B';
    }
    else
    {
         temporalB[Vec[5]] = 'x';
    }

    //C

    if(Op[Vec[2]+1]==1||temporalA[2]==1)//C
    {
         temporalB[Vec[2]] = 'C';
    }
    else
    {
         temporalB[Vec[2]] = 'x';
    }
    if(Op[Vec[6]+1]==1||temporalA[2]==1)//C
    {
         temporalB[Vec[6]] = 'C';
    }
    else
    {
         temporalB[Vec[6]] = 'x';
    }

    //D

    if(Op[Vec[3]+1]==1||temporalA[3]==1)//D
    {
         temporalB[Vec[3]] = 'D';
    }
    else
    {
         temporalB[Vec[3]] = 'x';
    }
    if(Op[Vec[7]+1]==1||temporalA[3]==1)//D
    {
         temporalB[Vec[7]] = 'D';
    }
    else
    {
         temporalB[Vec[7]] = 'x';
    }

           if(Op[Vec[8]+1]==1||temporalA[4]==1)//E
            {
                 temporalB[Vec[8]] = 'E';

            }
            else
            {
                 temporalB[Vec[8]] = 'x';
            }

            if(Op[Vec[15]+1]==1||temporalA[4]==1)//E
            {
                 temporalB[Vec[15]] = 'E';
            }
            else
            {
                 temporalB[Vec[15]] = 'x';
            }


            if(Op[Vec[9]+1]==1||temporalA[5]==1)//F
            {
                 temporalB[Vec[9]] = 'F';

            }
            else
            {
                 temporalB[Vec[9]] = 'x';
            }
            if(Op[Vec[14]+1]==1||temporalA[5]==1)//F
            {
                 temporalB[Vec[14]] = 'F';
            }
            else
            {
                 temporalB[Vec[14]] = 'x';
            }

            if(Op[Vec[10]+1]==1||temporalA[6]==1)//G
            {
                 temporalB[Vec[10]] = 'G';

            }
            else
            {
                 temporalB[Vec[10]] = 'x';
            }
            if(Op[Vec[13]+1]==1||temporalA[6]==1)//G
            {
                 temporalB[Vec[13]] = 'G';
            }
            else
            {
                 temporalB[Vec[13]] = 'x';
            }
            if(Op[Vec[11]+1]==1||temporalA[7]==1)//H
            {
                 temporalB[Vec[11]] = 'H';

            }
            else
            {
                 temporalB[Vec[11]] = 'x';
            }
            if(Op[Vec[12]+1]==1||temporalA[7]==1)//H

            {
                 temporalB[Vec[12]] = 'H';
            }
            else
            {
                 temporalB[Vec[12]] = 'x';
            }

            if(Op[Vec[16]+1]==1||temporalA[8]==1)//I
            {
                 temporalB[Vec[16]] = 'I';

            }
            else
            {
                 temporalB[Vec[16]] = 'x';
            }
            if(Op[Vec[20]+1]==1||temporalA[8]==1)//I
            {
                 temporalB[Vec[20]] = 'I';
            }
            else
            {
                 temporalB[Vec[20]] = 'x';
            }


            if(Op[Vec[17]+1]==1||temporalA[9]==1)//J
            {
                 temporalB[Vec[17]] = 'J';
            }
            else
            {
                 temporalB[Vec[17]] = 'x';
            }
            if(Op[Vec[21]+1]==1||temporalA[9]==1)//J
            {
                 temporalB[Vec[21]] = 'J';
            }
            else
            {
                 temporalB[Vec[21]] = 'x';
            }

            //C

            if(Op[Vec[18]+1]==1||temporalA[10]==1)//K
            {
                 temporalB[Vec[18]] = 'K';
            }
            else
            {
                 temporalB[Vec[18]] = 'x';
            }
            if(Op[Vec[22]+1]==1||temporalA[10]==1)//K
            {
                 temporalB[Vec[22]] = 'K';
            }
            else
            {
                 temporalB[Vec[22]] = 'x';
            }

            //D

            if(Op[Vec[19]+1]==1||temporalA[11]==1)//L
            {
                 temporalB[Vec[19]] = 'L';
            }
            else
            {
                 temporalB[Vec[19]] = 'x';
            }
            if(Op[Vec[23]+1]==1||temporalA[11]==1)//L
            {
                 temporalB[Vec[23]] = 'L';
            }
            else
            {
                 temporalB[Vec[23]] = 'x';
            }

                   if(Op[Vec[24]+1]==1||temporalA[12]==1)//M
                    {
                         temporalB[Vec[24]] = 'M';

                    }
                    else
                    {
                         temporalB[Vec[24]] = 'x';
                    }

                    if(Op[Vec[28]+1]==1||temporalA[12]==1)//M
                    {
                         temporalB[Vec[28]] = 'M';
                    }
                    else
                    {
                         temporalB[Vec[28]] = 'x';
                    }


                    if(Op[Vec[25]+1]==1||temporalA[13]==1)//N
                    {
                         temporalB[Vec[25]] = 'N';

                    }
                    else
                    {
                         temporalB[Vec[25]] = 'x';
                    }
                    if(Op[Vec[29]+1]==1||temporalA[13]==1)//N
                    {
                         temporalB[Vec[29]] = 'N';
                    }
                    else
                    {
                         temporalB[Vec[29]] = 'x';
                    }

                    if(Op[Vec[26]+1]==1||temporalA[14]==1)//O
                    {
                         temporalB[Vec[26]] = 'O';

                    }
                    else
                    {
                         temporalB[Vec[26]] = 'x';
                    }
                    if(Op[Vec[30]+1]==1||temporalA[14]==1)//O
                    {
                         temporalB[Vec[30]] = 'O';
                    }
                    else
                    {
                         temporalB[Vec[30]] = 'x';
                    }
                    if(Op[Vec[27]+1]==1||temporalA[15]==1)//P
                    {
                         temporalB[Vec[27]] = 'P';

                    }
                    else
                    {
                         temporalB[Vec[27]] = 'x';
                    }
                    if(Op[Vec[31]+1]==1||temporalA[15]==1)//p

                    {
                         temporalB[Vec[31]] = 'P';
                    }
                    else
                    {
                         temporalB[Vec[31]] = 'x';
                    }






    temporal[Vec[0]]=  temporalA[Vec[0]];
    temporal[Vec[1]]=  temporalA[Vec[1]];
    temporal[Vec[2]]=  temporalA[Vec[2]];
    temporal[Vec[3]]=  temporalA[Vec[3]];
    temporal[Vec[4]]=  temporalA[Vec[4]];
    temporal[Vec[5]]=  temporalA[Vec[5]];
    temporal[Vec[6]]=  temporalA[Vec[6]];
    temporal[Vec[7]]=  temporalA[Vec[7]];

    temporal[Vec[8]]=  temporalA[Vec[8]];
    temporal[Vec[9]]=  temporalA[Vec[9]];
    temporal[Vec[10]]= temporalA[Vec[10]];
    temporal[Vec[11]]= temporalA[Vec[11]];
    temporal[Vec[12]]= temporalA[Vec[12]];
    temporal[Vec[13]]= temporalA[Vec[13]];
    temporal[Vec[14]]= temporalA[Vec[14]];
    temporal[Vec[15]]= temporalA[Vec[15]];

    temporal[Vec[16]]=  temporalA[Vec[16]];
    temporal[Vec[17]]=  temporalA[Vec[17]];
    temporal[Vec[18]]=  temporalA[Vec[18]];
    temporal[Vec[19]]=  temporalA[Vec[19]];
    temporal[Vec[20]]=  temporalA[Vec[20]];
    temporal[Vec[21]]=  temporalA[Vec[21]];
    temporal[Vec[22]]=  temporalA[Vec[22]];
    temporal[Vec[23]]=  temporalA[Vec[23]];

    temporal[Vec[24]]=  temporalA[Vec[24]];
    temporal[Vec[25]]=  temporalA[Vec[25]];
    temporal[Vec[26]]=  temporalA[Vec[26]];
    temporal[Vec[27]]=  temporalA[Vec[27]];
    temporal[Vec[28]]=  temporalA[Vec[28]];
    temporal[Vec[29]]=  temporalA[Vec[29]];
    temporal[Vec[30]]=  temporalA[Vec[30]];
    temporal[Vec[31]]=  temporalA[Vec[31]];


    //
    Imagen[Vec[0]]= temporalB[Vec[0]];
    Imagen[Vec[1]]= temporalB[Vec[1]];
    Imagen[Vec[2]]= temporalB[Vec[2]];
    Imagen[Vec[3]]= temporalB[Vec[3]];
    Imagen[Vec[4]]= temporalB[Vec[4]];
    Imagen[Vec[5]]= temporalB[Vec[5]];
    Imagen[Vec[6]]= temporalB[Vec[6]];
    Imagen[Vec[7]]= temporalB[Vec[7]];
    //16

    Imagen[Vec[8]]= temporalB[Vec[8]];
    Imagen[Vec[9]]= temporalB[Vec[9]];
    Imagen[Vec[10]]= temporalB[Vec[10]];
    Imagen[Vec[11]]= temporalB[Vec[11]];
    Imagen[Vec[12]]= temporalB[Vec[12]];
    Imagen[Vec[13]]= temporalB[Vec[13]];
    Imagen[Vec[14]]= temporalB[Vec[14]];
    Imagen[Vec[15]]= temporalB[Vec[15]];

    Imagen[Vec[16]]= temporalB[Vec[16]];
    Imagen[Vec[17]]= temporalB[Vec[17]];
    Imagen[Vec[18]]= temporalB[Vec[18]];
    Imagen[Vec[19]]= temporalB[Vec[19]];
    Imagen[Vec[20]]= temporalB[Vec[20]];
    Imagen[Vec[21]]= temporalB[Vec[21]];
    Imagen[Vec[22]]= temporalB[Vec[22]];
    Imagen[Vec[23]]= temporalB[Vec[23]];
    //16

    Imagen[Vec[24]]= temporalB[Vec[24]];
    Imagen[Vec[25]]= temporalB[Vec[25]];
    Imagen[Vec[26]]= temporalB[Vec[26]];
    Imagen[Vec[27]]= temporalB[Vec[27]];
    Imagen[Vec[28]]= temporalB[Vec[28]];
    Imagen[Vec[29]]= temporalB[Vec[29]];
    Imagen[Vec[30]]= temporalB[Vec[30]];
    Imagen[Vec[31]]= temporalB[Vec[31]];


    if(punto>=1)
    {
        cambiar=-1;
    }
    puntos[turno]= puntos[turno]+ punto;

    Cambio=cambiar;
    punto=0;




}

void carta::eleccion()
{
    if (Nivel==8)
    {
        Voltear8();
    }
    else if (Nivel==16)
    {
        Voltear16();
    }
    else if(Nivel ==32)
    {
        Voltear32();
    }
}
