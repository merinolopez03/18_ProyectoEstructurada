
/*----------------------------------------------------------------*/
/* Autor: Pedro Merino Lopez	  														  */
/* E-mail: pedromerino97@outlook.com                          */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: Definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_MATERIAL      12        /* Tamaño del material de la ropa               */
#define TAM_LE    10        /* Tamaño del lente                                  */

#define TAM_MARCA    10        /* Tamanio de la Marca del lente                    */
#define TOTAL_LE 10        /* Tamanio total del lente                               */


/* Se define una estructura para modelar los datos de un lente.  */
/* Los miembros de la estructura son:                              */
/*                                    - Material                   */
/*                                    - Tamaño                     */
/*                                    - Marca                      */
/*                                    - color                      */

typedef struct
{
	char Material[TAM_MATERIAL];
	int Tamanio;
	char Marca[TAM_MARCA];
	char Color[20];

}Lente;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarLente(Lente);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de Lente */
Lente crearnuevoLente(void);
void mostrarListaLente(Lente [], int);
void buscarLente(Lente []);
void actualizarLente(Lente []);
void eliminarLente(Lente []);


/* Funcion que permite eliminar Ropa, es invocada por la funcion eliminarLente() */
Lente * eliminarunLente(Lente [], int);


/* Funciones que permiten ordenar los datos de los alumnos */
int * ordenarAscendente(Lente [], int []);
int * ordenarDescendente(Lente [], int []);


#endif
