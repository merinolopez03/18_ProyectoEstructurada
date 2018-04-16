/*------------------------------------------------------*/
/*autor:Pedro Merino Lopez                           */
/*e-mail:pedromerino97@outlook.com                     */
/*fecha  de inicio: 14/04/2018                                     */
/*fecha de actualizacion: 14/04/2018                                     */
/*descripcion: programa que ordene un arreglo de numeros enteros de forma ascendente*/
/*------------------------------------------------------*/


/*Declaración de bibliotecas*/
#include <stdio.h>

/*Declaracion de constantes*/
/*No se reserva espacio en la memoria*/
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100

/*Implementacion de macro*/
#define SUMA(X,Y) X+Y
#define RESTA(X,Y) X-Y
#define MULT(X,Y) X*Y
#define DIV(X,Y) X/Y
#define POTCUADRADO(X) X*X
#define POTCUBO(X) X*X*X

/*Definir ciclos Macros*/
#define CICLOFOR(X,Y) for(X=0;X<Y;X++)

/*DEclaracion de constantes con cont*/
/*Se reserva espacio en la memoria*/
const float pi=3.1416;
const float g =9.81;
const int tamanio =10;
const int min =0;
const int max =100;

int main(void)
{

/*Imprimir constantes #define*/
printf("El valor de PI\n %f\n",PI);
printf("El valor de la gravedad\n %f\n",G);
printf("Valor del tamaño\n %d\n",TAMANIO);
printf("Valor del minimo\n %d\n",MIN);
printf("Valor del maximo\n %d\n",MAX);

/*Imprimir Macros*/
printf("Operacion suma\n %d\n",SUMA(3,4));
printf("Resta\n %d\n",RESTA(8,3));
printf("Multiplicacion\n %d\n",MULT(4,5));
printf("Divicion\n %d\n",DIV(10,2));
printf("Potencia al cuadrado\n %d\n",POTCUADRADO(4));
printf("Potencia al cubo\n %d\n",POTCUBO(5));
/*Utilizando las macros del ciclo*/
int X;
int Y=10;

CICLOFOR(X,Y)
{
  printf("\n Hola Mundo...\n");
}
/*Tarea par el dia lunes 16 de abril el ciclo while,do while*/

/*Imprimir constantes const*/
printf(" El valor de PI\n %f \n",pi);
printf("El valor de la gravedad\n %f\n",g);
printf("Valor del tamaño\n %d\n",tamanio);
printf("Valor del minimo\n %d\n",min);
printf("Valor del maximo\n %d\n",max);

return 0;
}
