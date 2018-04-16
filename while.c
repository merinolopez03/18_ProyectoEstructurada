/*AUTOR:MERINO LÓPEZ PEDRO*/
/*E_MAIL:pedromerino97@outlook.com*/
/*FECHA DE CREACION:11 DE ABRIL DE 2018*/
/*FECHA DE ACTUALIZACION:16 DE ABRIL DE 2018*/
/* REALIZAR UN PROGRAMA QUE INDIQUE CUANTAS VECES SE REPITE UN NUMERO*/
/*Declaración de bibliotecas*/
#include <stdio.h>

/*Declaración de la función principal a usar */
int main(void)
{
	int num;  /*Declaración de variables y constantes  */
	num = 0;
 	while (++num <= 10)    /*Declaración del ciclo asi como la condicion */
	{
		printf ("Numero de veces que se repite el ciclo: %d\n", num);  /*imprime el resultado */
	}
	return 0; /*se copila con exito*/
}
