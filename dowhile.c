/*AUTOR:MERINO LÓPEZ PEDRO*/
/*E_MAIL:pedromerino97@outlook.com*/
/*FECHA DE CREACION:11 DE ABRIL DE 2018*/
/*FECHA DE ACTUALIZACION:16 DE ABRIL DE 2018*/
/* REALIZAR UN PROGRAMA QUE INDIQUE CUANTAS VECES SE REPITE UN NUMERO*/
/*Declaración de bibliotecas*/
#include <stdio.h>

/*Declaración de la función principal*/
int main(void)
{
	int num;  /*declaracion de la variables*/
	num = 0;
	do     /*Declaración del ciclo que indica hacer hasta el limite */
	{
		printf ("Numero de veces que se repite el ciclo: %d  \n", num);/*imprime el resultado*/

	}while (++num <= 10 );   /*el limite del ciclo*/

	return 0;  /*se copila con exito*/
}
