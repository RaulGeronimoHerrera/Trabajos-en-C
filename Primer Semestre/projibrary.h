#include<stdio.h>
#include<ctype.h>
#include<time.h>

using namespace std;

bool matrizaleatoria(int matriz[4][4],int f, int c, int aleatorio)
{
    for(f=0; f<4; f++)
    {
        for(c=0; c<4; c++)
        {
            if(aleatorio==matriz[f][c])
            {
                return false;
            }
        }
    }
    return true;
}


//IMPRESION DE MATRIZ
void imprime(int matriz[4][4])
{   int f,c;
printf("\n\t\t      MATRIZ\n");
    for(f=0; f<4; f++)
    {
        for(c=0; c<4; c++)
        {
            printf("%d\t\t",matriz[f][c]);
        }
        printf("\n");

    }
}
//CONDICIONAL PARA ORDENAR MATRIZ
void ordena(int matriz[4][4])
{
        int mayor=0,i,j,x,y;
            for(i=0;i<4;i++)
            {
              for(j=0;j<4;j++)
              {
                  for(x=0;x<4;x++)
                  {
                      for(y=0;y<4;y++)
                      {
                        if(matriz[i][j]>matriz[x][y])
                        {
                            mayor=matriz[i][j];
                            matriz[i][j]=matriz[x][y];
                            matriz[x][y]=mayor;
                        }
                      }
                  }
              }
            }
}
//ORDENAR MATRIZ DE FORMA CRECIENTE
void creciente(int matriz[4][4])
{
        int menor=0,i,j,x,y;
            for(i=0;i<4;i++)
            {
              for(j=0;j<4;j++)
              {
                  for(x=0;x<4;x++)
                  {
                      for(y=0;y<4;y++)
                      {      //5              //6
                        if(matriz[i][j]<matriz[x][y])
                        {     //0          //5
                            menor=matriz[i][j];
                            //5           //6
                            matriz[i][j]=matriz[x][y];
                            //5           //5
                            matriz[x][y]=menor;
                        }
                      }
                  }
              }
            }
}
//INGRESAR PALABRA
char validarcaracter()
{
    int j,switchh;
    char opcion[20],c=NULL;
    fflush(stdin);
    printf("\nIngresa una opcion: ");
    scanf("%s",&opcion);
    j=strlen(opcion);
    if(j==1)
    {
        if(isdigit(opcion[0])!=0)
        {
            switchh=1;
        }
    }
    if(switchh==1)
    {
        c=opcion[0];
    }
    return c;
}
//POSICION DE LAS VOCALES.
char vocales(char v[20])
{
    int x;
    for (x=0;x<21;x++){
switch (v[x]){

    case 'a':
        printf("\nLa vocal %c esta en esta pocicion: %d\n",v[x],x);
        break;

    case 'e':
        printf("\nLa vocal %c esta en esta pocicion: %d\n",v[x],x);
        break;

    case 'i':
        printf("\nLa vocal %c esta en esta pocicion: %d\n",v[x],x);
        break;

    case 'o':
        printf("\nLa vocal %c esta en esta pocicion: %d\n",v[x],x);
        break;

    case 'u':
        printf("\nLa vocal %c esta en esta pocicion: %d\n",v[x],x);
        break;

    }
    }
}





