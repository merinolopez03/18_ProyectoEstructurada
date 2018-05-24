/*----------------------------------------------------------------*/
/* Autor: Merino Lopez Pedro	  														  */
/* E-mail: pedromerino97@outlook.com*/
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: programa para ejemplificar archivos .h y .c       */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo se definen las secuencia para los colores            */
#include "enums.h"                     /* En este archivo se definen los enums para los menus                 */
#include "prototipofunciones.h"        /* En este archivo se definen todos los prototipos de funciones        */

                                       /* Los #define estan en el archivo prototipofunciones.h                */

int numLente;                           /* Variable global: se define aqui en el main, pero se utiliza,        */
                                       /* manteniendo su valor en operacionesLente.c y ordenacion.c          */

int main(void)
{
  Lente listaLente[TOTAL_LE];          /* Declaracion de una variable de arreglo de estructura Lente[]         */
	int opcion;                          /* Variable que ontrola las opciones del menu principal.               */

	do{
    menuPrincipal();                   /* Se llama (invoca) a la funcion menuPrincipal() implementada en      */
                                       /* operacionespantalla.c                                               */

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case INSERTAR:
              while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */
              printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     LENTE\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de Lente: " _TVERDE);
							scanf("%d",&numLente);
							printf("\n\n" _ARESET);

							for(int i = 0; i < numLente; i++)
							{
                while(getchar() != '\n');              /* Limpiar el buffer en caso de tener almacenado el salto de linea                */
                listaLente[i] = crearnuevoLente();       /* Se invoca a la funcion crearnuevoLista() implementada en operacionesLente.c  */
              }
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea                */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR:
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    LENTE\n\n");
              mostrarListaLente(listaLente, 0);          /* Se invoca a la funcion mostrarLente() implementada en operacionesLente.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ORDENAR_ASCENDENTE:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. O R D E N A R    A S C E D E N T E\n\n");
              mostrarListaLente(listaLente, 1);          /* Se invoca a la funcion mostrarLente() implementada en operacionesLente.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ORDENAR_DESCENDENTE:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. O R D E N A R   D E S C E D E N T E\n\n");
              mostrarListaLente(listaLente, 2);          /* Se invoca a la funcion mostrarRopa() implementada en operacionesLente.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case BUSCAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
						  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
              buscarLente(listaLente);                   /* Se invoca a la funcion buscarLente() implementada en operacionesLente.c      */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
              actualizarLente(listaLente);               /* Se invoca a la funcion actualizarLente() implementada en operacionesLente.c  */
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
              eliminarLente(listaLente);                 /* Se invoca a la funcion eliminarLente() implementada en operacionesLente.c    */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case SALIR:
							system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);                                 /* Termina la ejecucion del programa                               */
		}
	}while(opcion != SALIR);

	return 0;
}
