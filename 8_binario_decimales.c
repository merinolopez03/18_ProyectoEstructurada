/*AUTOR:MERINO LÓPEZ PEDRO*/
/*E_MAIL:pedromerino97@outlook.com*/
/*FECHA DE CREACION:24 DE ABRIL DE 2018*/
/*FECHA DE ACTUALIZACION:25 DE ABRIL DE 2018*/
/* PROGRAMA PARA CONVERTIR BINARIO A DECIMAL*/
/*Declaración de bibliotecas*/
#include <stdio.h>
#define Tamanio 35
void Recibe( int a[]);

void Imprime( int b[]);
int main()
{
/*declaracion de variables */
 int arreglo[Tamanio];

int evaluar;
/*imprime una peticion */

printf("\nEste programa recibe un numero "
        "binario y lo convierte a decimal bienvenido .\n");
Recibe(arreglo);

Imprime(arreglo);
return 0;

}

void Recibe( int a[])
{
/*declaracion de variables */
int i = 0;
/*imprime una peticion y las recolecta con un ciclo*/
for( i = 0; i < Tamanio; i++ )
a[i] = ' ';

printf("\nIntroduzca un numero binario por favor : \n");



i = 0;

while ( (a[i++] = getchar()) != '\n' && Tamanio > i );
printf("\n");
}


void Imprime( int b[] )

{
  /*declaracion de variables */

int i;
int potencia = 1;


int decimal = 0;

int inicio;

/*conversion de los datos*/
for ( i = Tamanio - 1; i >= 0; i-- )
{
if ( ' ' != b[i] )
{
inicio = i;
break;
}
}


int valido = 1;

 for ( i = inicio; i >= 0; i-- )
{
switch( b[i] )
{
case '0':
decimal += 0*potencia;
potencia *= 2;
break;
case '1':
decimal += 1*potencia;
potencia *= 2;
break;
default:
if ( '\n' != b[i])
{
  /*imprime sin no sale la conversion*/
printf("\nERROR. LA CADENA NO ES VALIDA!\n");
valido = 0;

printf("\nEste caracter no es valido: ");
putchar(b[i]);
printf("\n");
}
break;
}
}
/*imprime si es correcto*/
if ( 1 == valido )
printf("\nEl valor decimal es: %d\n", decimal);
else
printf("\nEl numero introducido no es valido.\n");

}  // Cierra Imprime
