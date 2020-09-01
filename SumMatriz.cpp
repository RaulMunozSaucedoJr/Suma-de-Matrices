//Programa: Suma de Matrices.

//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{ //Inicia Main

//Declaramos a la matriz.
int matriz[4][5];
int horizontal[5];
int vertical[4];
int fila,columna;
int suma=0;
int i; //Dato de entrada

/*Bucle que registra los numeros introducidos de teclado*/
for(fila=0;fila<4;fila++)
{
    for(columna=0;columna<5;columna++)
    {
        printf("Introduce un numero para la posicion %d,%d: ",fila,columna); //Se imprime en pantalla el numero de la posicion fila columna.
        scanf("%d",&matriz[fila][columna]);
    }
}

/*Bucle que suma las filas y registra el resultado en el vector vertical*/
for(fila=0;fila<4;fila++)
{
    suma=0;
    for(columna=0;columna<5;columna++)
    {
        suma+=matriz[fila][columna];
    }
    vertical[fila]=suma;
}

/*Recorre el vector vertical y muestra los resultados*/
for(i=0;i<4;i++)
{
    printf("%d\n",vertical[i]);
}

/*Bucle que suma las columnas y registra el resultado en el vector horizontal*/
for(columna=0;columna<5;columna++)
{
    suma=0;
    for(fila=0;fila<4;fila++)
    {
        suma+=matriz[fila][columna];
    }
    horizontal[columna]=suma;
}

/*Recorre el vector horizontal y muestra los resultados*/
for(i=0;i<5;i++)
{
    printf("%d",horizontal[i]);
}
system("PAUSE");
}
