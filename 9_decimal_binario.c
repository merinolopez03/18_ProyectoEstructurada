/*AUTOR:MERINO LÓPEZ PEDRO                           */
/*E_MAIL:pedromerino97@outlook.com                   */
/*FECHA DE CREACION:24 DE ABRIL DE 2018              */
/*FECHA DE ACTUALIZACION:25 DE ABRIL DE 2018         */
/* programa para convertir a binario                 */
/*Declaración de bibliotecas                         */
#include <stdio.h>

int main ()
{
	/*declaracion de variables */
int n,N,i;
int j = 0;
int b[100];
int c[100];
/*imprime una peticion */
printf("Escribe el numero que deseas convertir  a binario\n");
scanf("%i", &n);
/*comienza la conversion*/
for(i=0;i<100;i++)
	{
	b[i]=2;
	c[i]=2;
	}
N=n;

for(i=0;n!=0;i++)
	{
	b[i] = n%2;
	n = n/2;
	}

for(i=0;i<100;i++)
	{
	if (b[i]!=2)
		{
		j = j+1;
		}
	}
	/*imprime el mensaje*/
printf("El numero %i tiene %i cifras en binario\n", N, j);

for(i=j-1;i>=0;i--)
	{
	c[j-1-i]=b[i];
	}
/*imprime el resultado */
printf("El numero %i en binario es:",N);
for(i=0;i<j;i++)
	{
	printf("%i",c[i]);
	}
printf("\n");

}
