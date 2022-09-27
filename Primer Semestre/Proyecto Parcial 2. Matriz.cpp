#include<stdio.h>
#include<conio.h>
#include<ctime>
#include<iostream>
#include<string.h>
#include<sstream>
#include<iomanip>
#include<ctype.h>
#include<cstdlib>
#include"projibrary.h"

int main ()
{
    system("color 3e");
    char palabra[20], invertido[20],letra;
    int select,opciones,opciones2,capicuas,i,j;
    printf ("----------programing-------------\n");
menu:
    printf ("\n----------------------MENU------------------------\n");
    printf ("\nSelecciona la opcion que deseas...\n");
    printf ("\n1.-Matriz\n");
    printf ("\n2.-Palabra inversa\n");
    printf ("\n3.-Salir\n");
    select=validarcaracter();
    system ("cls");

    switch(select)
    {
// CASO SWITCH ORIGINAL...
    case '1':
        printf ("--------Matriz 4x4 sin numeros repetidos--------\n");
        int matriz[4][4];
        int f,c,x,w,aleatorio;
        srand(time(0));
        for(f=0; f<4; f++)
        {
            for(c=0; c<4; c++)
            {
                aleatorio=1+rand()%20;
                while(matrizaleatoria(matriz,5,5,aleatorio)== false)
                {
                    aleatorio=1+rand()%20;
                }
                matriz[f][c]=aleatorio;
            }
        }
menux:
        imprime(matriz);

        printf("\n\t\t\tQuieres ordenar la matriz?\n");
        printf("\t1.Ordenar la matriz");
        printf("\t\t\t2.Salir al menu de opciones\n");
        opciones=validarcaracter();
        system ("cls");
        switch(opciones)
        {
        case '1':
menu2:
            imprime(matriz);
            printf("\n1.Ordenar de forma creciente\n2.Ordenar de forma decreciente\n3.Salir al menu de opciones\n");
            opciones2=validarcaracter();
            switch(opciones2)
            {
                case '1':
                puts("\nMatriz Ordenada de forma creciente\n");
                creciente(matriz);
                imprime(matriz);
                system ("pause");
                system ("cls");
                goto menu2;
                break;

                case '2':

                    puts("\nMatriz Ordenada de forma Decreciente\n");
                    ordena(matriz);
                    imprime(matriz);
                    system ("pause");
                    system ("cls");
                    goto menu2;
                    break;

                case '3':

                    system ("pause");
                    system ("cls");
                    goto menu;
                    break;

                default:

                    printf("\nNo has seleccionado una opcion correcta...\nIntente de nuevo...\n");
                    system ("pause");
                    system ("cls");
                    goto menu2;
                    break;

            }

        case '2':
                puts("Saliendo...");
                printf("\n\n");
                system ("pause");
                goto menu;

            break;
           default:
                puts("\nNo has oprimido una opcion\n");
                printf("\n\n");
                system ("pause");
                system ("cls");
                goto menux;
                break;
        }
        break;
// CASO SWITCH ORIGINAL...
        case '2':
        capicua:
        printf ("--------Palabra inversa --------\n\n\n\n");
        printf("Introduce una palabra sin espacios:");
        scanf("%s",&palabra);
        printf("\nLa palabra ingresada es:%s\n",palabra);
        strcpy(invertido,palabra);
        strrev(invertido);
        printf("\nLa palabra invertida es: %s\n",invertido);
        if(strcmp(palabra,invertido)==0)
        {
            printf("\nLa palabra se lee igual al derecho y al reves...\n");
            vocales(palabra);
        }

        else
        {
            printf("\nLa palabra no es igual al reves...\n");

            printf("----------------------------------");
            capicua2:
             printf("\n1.Intentar de nuevo\n");
              printf("\n2.Salir al menu\n");
              capicuas=validarcaracter();
            switch(capicuas)
            {
                case '1':

            system ("pause");
            system ("cls");
            goto capicua;
                case '2':
            system ("pause");
            system ("cls");
            goto menu;
                default:
            printf ("\nNo seleccionaste una opcion adecuada\n");
            getch();
            system ("pause");
            system ("cls");
            goto capicua2;
            break;

            }

        }
        system ("pause");
        system ("cls");
        goto menu;
        break;

// CASO SWITCH ORIGINAL...
    case '3':
        printf ("--------salir--------\n\n\n\n");
        system("shutdown");
        system ("cls");
        break;
// CASO SWITCH ORIGINAL...
    default:
        printf ("No seleccionaste una opcion adecuada\n");
        getch();
        system ("pause");
        goto menu;
        break;

    }
    return 0;
}


