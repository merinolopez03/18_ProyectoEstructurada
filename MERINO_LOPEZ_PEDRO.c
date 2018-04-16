/*------------------------------------------------------*/
/*autor:P edro Merino Lopez                           */
/*e-mail:pedromerino97@outlook.com                     */
/*fecha  de inicio: 14/04/2018                                     */
/*fecha de actualizacion: 14/04/2018                                     */
/*descripcion: programa que ordene un arreglo de numeros enteros de forma ascendente*/
/*------------------------------------------------------*/





#include<stdio.h>                    /*declaracion de bibliotecas*/

#define ARREGLO 100



int main() {                  /*declaracion de la funcion principal*/


	int aux;        /*se declaran las variables*/

	int dim;

	int i;

	int j;

	int num[ARREGLO];  /*se declara la dimension de num*/

	dim = 10;              /*se declara el limite de dim */

	for (i=0;i<=dim-1;i+=1) { /*se declara el inicio y limite del ciclo */

		printf("dame el numero\n"); /*se imprime una peticion*/

		scanf("%i",&num[i]);        /*se lee el dato*/



	}

	for (j=1;j<=dim-1;j+=1) {     /*se declara el inicio y limite del ciclo */

		for (i=0;i<=dim-2;i+=1) {     /*se declara el inicio y limite del ciclo */

			if (num[i]>num[i+1]) {       /*se pone una condicion */

				aux = num[i+1];          /*el auxiliar toma el valor de num mas uno que es una posicion mas adelante */

				num[i+1] = num[i];        /*una vez quedado en blanco toma el valor del que estaba antes de el */

			num[i] = aux;   /*aca el valor inicial de num toma el valor del auxiliar */


			}
		}

	}



	for (i=0;i<=dim-1;i+=1) {   /*se declara el inicio y limite del ciclo */

		printf("%i\n",num[i]);   /*imprime el orden */
	}

	return 0;                      /*copila con exito*/

}
