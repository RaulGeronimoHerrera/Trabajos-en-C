#include<stdio.h>
#include<stdlib.h>

int main(){
int vingresado,vingresado2;
int a,b=0,c=0,d=0,e,m=0,l,x,y,multiplicacion;
float lcuadrado,areac,perimetroc,arear,perimetror,arectan,brectan,btrian,altrian,atrian,petrian,Rcirculo,acirculo,pcirculo;

printf("                                 Proyecto 1\n\n Desarrollado por Brian Ulises Orihuela Perez y Raul Gabriel Geronimo Herrera\n\n\nGrupo: O1\n\nMenu\n\n");
MENU:

printf("1.Cuadrado\n");
printf("2.Rectangulo\n");
printf("3.Triangulo\n");
printf("4.Circulo\n");
printf("5.Ciclo for\n");
printf("6.Ciclo while\n");
printf("7.Ciclo do  while\n");
printf("8.Salir\n");

printf("\nIngresa la opcion:  ");
scanf("%d",&vingresado);
getchar();
system("cls");
if(vingresado>=9||vingresado<1){
 printf("\n Favor de ingresar otra opcion \n\n");
goto MENU;
}else{
    switch (vingresado){

case 1:

  MENU2:
printf("\nHas seleccionado cuadrado\n\nSUBMENU\n\n");
  printf("1.Area\n");
  printf("2.Perimetro\n");
  printf("3.Regresar\n");

  printf("\nIngresa la opcion:  ");
  scanf("%d",&vingresado2);
  getchar();
  system("cls");
  if(vingresado2>3||vingresado2<1){
   printf("\n Incorrecto \n");
   goto MENU2;
  }else
  {
  switch(vingresado2)
  {
  case 1:
      system("cls");
      printf("'Has seleccionado el area del cuadrado'.\n");
  printf("\nIngresa el lado de tu cuadrado: ");
  scanf("%f",&lcuadrado);
  areac=lcuadrado*lcuadrado;
  printf("\nEl area del cuadrado es: %.2f\n\n",areac);
  goto MENU2;
  break;


  case 2:
      system("cls");
      printf("'Has seleccionado el perimetro del cuadrado'.\n");
  printf("\nIngresa el lado de tu cuadrado: ");
  scanf("%f",&lcuadrado);
  perimetroc=lcuadrado*4;
  printf("\nEl perimetro del cuadrado es: %.2f\n\n",perimetroc);
  goto MENU2;
  break;

  case 3:
      system("cls");
  printf("\nRegresando....\n\n");
  goto MENU;
  }}


case 2:
    system("cls");
MENU3:

  printf("1.Area\n");
  printf("2.Perimetro\n");
  printf("3.Regresar\n");

  printf("\nIngresa la opcion:  ");
  scanf("%d",&vingresado2);

  if(vingresado2>3||vingresado2<1){
   printf("\n Incorrecto \n");
   goto MENU3;
  }else
  {
  switch(vingresado2)
  {
  case 1:
      system("cls");
      printf("'Has seleccionado el area del rectangulo'.\n");
  printf("\nIngresa la base de tu rectangulo: ");
  scanf("%f",&brectan);
  printf("\nIngresa la altura de tu rectangulo: ");
  scanf("%f",&arectan);
  arear=brectan*arectan;
  printf("\nEl area del rectangulo es: %.2f\n\n",arear);
  goto MENU3;
  break;

  case 2:
      system("cls");
      printf("'Has seleccionado el perimetro del rectangulo'.\n");
  printf("\nIngresa la base de tu rectangulo: ");
  scanf("%f",&brectan);
  printf("\nIngresa la altura de tu rectangulo: ");
  scanf("%f",&arectan);
  perimetror=(brectan+arectan)*2;
  printf("\nEl perimetro del rectangulo es: %.2f\n\n",perimetror);
  goto MENU3;
  break;

  case 3:
      system("cls");
  printf("\nRegresando....\n\n");
  goto MENU;
  }}


case 3:
    system("cls");
MENU4:
printf("\n'Has seleccionado triangulo'\n\nSUBMENU\n\n");
  printf("1.Area\n");
  printf("2.Perimetro\n");
  printf("3.Regresar\n");

  printf("\nIngresa la opcion:  ");
  scanf("%d",&vingresado2);
  getchar();
  system("cls");
  if(vingresado2>3||vingresado2<1){
   printf("\n Incorrecto \n");
   goto MENU4;
  }else
  {
  switch(vingresado2)
  {
  case 1:
      system("cls");
      printf("'Has seleccionado el area del triangulo'.\n");
  printf("\nIngresa la base de tu triangulo: ");
  scanf("%f",&btrian);

  printf("\nIngresa la altura de tu triangulo: ");
  scanf("%f",&altrian);

  atrian=btrian*altrian/2;
  printf("\nEl area del triangulo es: %.2f\n\n",atrian);
  goto MENU4;
  break;

  case 2:
      system("cls");
      printf("'Has seleccionado el perimetro del triangulo'.\n");
  printf("\nIngresa el lado de tu triangulo equilatero: ");
  scanf("%f",&btrian);
  petrian=btrian*3;
  printf("\nEl perimetro del triangulo equilatero es: %.2f\n\n",petrian);
  goto MENU4;
  break;

  case 3:
      system("cls");
  printf("\nRegresando....\n\n");
  goto MENU;
  }}


case 4:
    system("cls");
MENU5:
printf("\nHas seleccionado circulo\n\nSUBMENU\n\n");
  printf("1.Area\n");
  printf("2.Perimetro\n");
  printf("3.Regresar\n");
  printf("\nIngresa la opcion:  ");
  scanf("%d",&vingresado2);
  getchar();
  system("cls");

  if(vingresado2>3||vingresado2<1){
   printf("\n Incorrecto \n");
   goto MENU5;
  }else
  {
  switch(vingresado2)
  {
  case 1:
      system("cls");
      printf("'Has seleccionado el area del circulo'.\n");
  printf("\nIngresa el radio del circulo: ");
  scanf("%f",&Rcirculo);
  acirculo=3.1592*Rcirculo*Rcirculo;
  printf("\nEl area del circulo es: %.2f\n\n",acirculo);
  goto MENU5;
  break;

  case 2:
      system("cls");
      printf("'Has seleccionado el perimetro del circulo'.\n");
  printf("\nIngresa el radio del circulo: ");
  scanf("%f",&Rcirculo);
  pcirculo=(Rcirculo*2)*3.1592;
  printf("\nEl perimetro del circulo es: %.2f\n\n",pcirculo);
  goto MENU5;
  break;

  case 3:
      system("cls");
  printf("\nRegresando....\n\n");
  goto MENU;
  }}


case 5:
    system("cls");
MENU6:
    printf("Ciclo for\n");
printf("\nCuantas tablas de multiplicar quieres ver?");
printf("\nIngresa el numero de tablas por ver: ");
scanf("%d",&a);

for(b=1;b<=a;b++){
    for(c=1;c<=10;c++){
        printf("%d*%d=%d\n",b,c,b*c);
    }
printf("\n");
}
goto MENU;
break;


case 6:
system("cls");

printf("Ciclo While\n");
printf("\nCuantas tablas de multiplicar quieres ver?");
printf("\nIngresa el numero de tablas por ver: ");
scanf("%d",&x);
e=1;
while(d<=x){
while(e<=10){
        printf("%d*%d=%d\n",d,e,d*e);
        e++;
    }
     e=1;
    d++;
    printf("\n");
    }
goto MENU;
break;



case 7:
    system("cls");
MENU8:
    printf("Ciclo do While\n");

printf("\nCuantas tablas de multiplicar quieres ver?");
printf("\nIngresa el numero de tablas por ver: ");
scanf("%d",&y);
m=1;
do{
l=1;
do{
    multiplicacion=m*l;
    printf("%d*%d=%d\n",m,l,multiplicacion);
     l++;
   }while(l<=10);
     m++;
     printf("\n");
    }while(m<=y);
goto MENU;
break;

  case 8:
      system("cls");
    printf ("\nDesarrollado por Brian Ulises Orihuela Perez y Raul Gabriel Geronimo Herrera\n");
    break;
    return 0;
    }
    }
    }
