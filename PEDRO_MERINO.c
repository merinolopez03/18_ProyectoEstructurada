
/*MERINO LÓPEZ PEDRO*/
/*pedromerino97@outlook.com*/
/*11 DE ABRIL DE 2018*/
/*12 DE ABRIL DE 2018*/
/* REALIZAR UN PROGRAMA QUE INDIQUE QUE NUMERO ES MAYOR Y CUAL ES EL MENOR USANDO UN ARREGLO*/

#include <stdio.h>

void main(){

int vector[3];/*declarar variables y constantes*/
int i;
int mayor=0;
int menor=0;

for (i=0; i<3; i++){                               /*indica el inicio y limite del ciclo y donde termina*/
   printf( "ingrese 10 numeros enteros. Numero %d\n", i+1);         /*imprime la peticion*/
   scanf("%d", &vector[i]);                           /*lee el dato solicitado*/

}

mayor=vector[0];               /*incializa a los dos datos*/

menor=vector[0];

for (i=0; i<3; i++){           /*indica el inicio y limite del ciclo y donde termina*/
   
  if (vector[i]>mayor){         /*pone la condicion y un resultado*/
    mayor=vector[i];

}
  if (vector[i]<menor){       /*pone la condicion y un segundo resultado*/
    menor=vector[i];
    }
}
{
printf("El mayor es %d\n", mayor);   /*imprime el resultado*/

printf("El menor es %d\n", menor);
}
}
