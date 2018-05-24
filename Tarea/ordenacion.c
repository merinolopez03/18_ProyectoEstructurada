/*----------------------------------------------------------------*/
/* Autor: Pedro Merino Lopez	  														  */
/* E-mail: pedromerino97@outlook.com*/
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numLente;

int * ordenarAscendente(Lente listaLente[], int arrayTemp[])
{
  for(int i = 0; i < numLente; i++)
  {
    for(int j = i + 1; j < numLente; j++)
    {
      if(strcmp(listaLente[arrayTemp[i]].Material, listaLente[arrayTemp[j]].Material) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Lente listaLente[], int arrayTemp[])
{
  for(int i = 0; i < numLente; i++)
  {
    for(int j = i + 1; j < numLente; j++)
    {
      if(strcmp(listaLente[arrayTemp[i]].Material, listaLente[arrayTemp[j]].Material) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
