/*----------------------------------------------------------------*/
/* Autor: merino lopez pedro	  														  */
/* E-mail: pedromerino97@outlook.com*/
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion:  implementacion de funciones sobre la estructura  */
/*              alumno: crear, listar, ordenar, buscar,           */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numLente;



Lente crearnuevoLente(void)
{
  Lente lente;

  printf(_TBLANCO _NEGRITA "Introduce el nombre del Material: "              _NNEGRITA _TVERDE);
  fgets(lente.Material, TAM_NOM, stdin);                                    /* Solicita el material del lente al usuario          */
  strcpy(lente.Material, strtok(lente.Material, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce la Marca del lente: " _NNEGRITA _TVERDE);
  fgets(lente.Marca, TAM_NOM, stdin);                         /* Solicita la marca al usuario        */
  strcpy(lente.Marca, strtok(lente.Marca, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el color del lente: " _NNEGRITA _TVERDE);
  fgets(lente.Color, 20, stdin);                         /* Solicita la marca al usuario        */
  strcpy(lente.Color, strtok(lente.Color, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el numero del lente: "           _NNEGRITA _TVERDE);
  scanf("%d", &lente.Tamanio);

  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
  printf("\n\n");

  return lente;
}




void mostrarListaLente(Lente listaLente[], int ordenar)
{
  int arrayTemp[numLente];
  for(int i = 0; i < numLente; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaLente, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaLente, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numLente; i++)
  {
    mostrarLente(listaLente[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarLente(Lente listaLente[])
{
  int opcionBuscar;
  char MaterialBuscar[TAM_MATERIAL];            /* Almacena el material a buscar dentro de la estructura                */
	char MarcaBuscar[TAM_MARCA];         /* Almacena la marca a buscar dentro de la estructura             */

  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
  printf(_TCYAN     _NEGRITA "Buscar lente por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Material\n");
  printf(_TBLANCO   _NEGRITA "\t2. Marca \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
    case _xMaterial:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

        printf(_TCYAN _NEGRITA "\n\nIngrese el material del lente: ");
        fgets(MaterialBuscar, TAM_MATERIAL, stdin);
        strcpy(MaterialBuscar, strtok(MaterialBuscar, "\n"));

        for(int i = 0; i < numLente; i++){
            if(strcmp(MaterialBuscar, listaLente[i].Material) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarLente(listaLente[i]);
            }
          }
            break;

      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(MarcaBuscar, TAM_NOM, stdin);
          strcpy(MarcaBuscar, strtok(MarcaBuscar, "\n"));

          for(int i = 0; i < numLente; i++)
          if(strcmp(MarcaBuscar, listaLente[i].Marca) == 0)
          {
            mostrarEncabezadoTabla();
            mostrarLente(listaLente[i]);
          }
          break;
  }
}



void actualizarLente(Lente listaLente[])
{
  int opcionBuscar;
  char MaterialBuscar[TAM_MATERIAL];            /* Almacena el nombre a buscar dentro de la estructura                */
	char MarcaBuscar[TAM_MARCA];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Buscar el lente a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Material\n");
  printf(_TBLANCO   _NEGRITA "\t2. Marca \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xMaterial:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
          fgets(MaterialBuscar, TAM_MATERIAL, stdin);
          strcpy(MaterialBuscar, strtok(MaterialBuscar, "\n"));

          for(int i = 0; i < numLente; i++)
          {
              if(strcmp(MaterialBuscar, listaLente[i].Material) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLente(listaLente[i]);

                  printf("\n\n");

                  listaLente[i] = crearnuevoLente();

                  mostrarEncabezadoTabla();
                  mostrarLente(listaLente[i]);

                  break;
              }
          }
          break;

      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el Material: ");
          fgets(MarcaBuscar, 50, stdin);
          strcpy(MarcaBuscar, strtok(MarcaBuscar, "\n"));

          for(int i = 0; i < numLente; i++)
          {
              if(strcmp(MarcaBuscar, listaLente[i].Marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLente(listaLente[i]);

                  printf("\n\n");

                  listaLente[i] = crearnuevoLente();

                   mostrarEncabezadoTabla();
                  mostrarLente(listaLente[i]);

                  break;
              }
          }

          break;
  }
}



void eliminarLente(Lente listaLente[])
{
  int opcionBuscar;
  char MaterialBuscar[TAM_MATERIAL];            /* Almacena el nombre a buscar dentro de la estructura                */
	char MarcaBuscar[TAM_MARCA];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Eliminar lente por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. Material\n");
  printf(_TBLANCO   _NEGRITA "2. Marca \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xMaterial:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el Material: ");
          fgets(MaterialBuscar, TAM_MATERIAL, stdin);
          strcpy(MaterialBuscar, strtok(MaterialBuscar, "\n"));

          for(int i = 0; i < numLente; i++)
          {
              if(strcmp(MaterialBuscar, listaLente[i].Material) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLente(listaLente[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaLente));
                    listaLente = eliminarunLente(listaLente, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(MarcaBuscar, TAM_MARCA, stdin);
          strcpy(MarcaBuscar, strtok(MarcaBuscar, "\n"));

          for(int i = 0; i < numLente; i++)
          {
              if(strcmp(MarcaBuscar, listaLente[i].Marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLente(listaLente[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaLente = eliminarunLente(listaLente, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}



Lente * eliminarunLente(Lente listaLente[], int posicion)
{
  if(posicion < (numLente - 1))
  {
    for(int j = posicion; j < numLente-1; j++)
    {
      strcpy(listaLente[j].Material,          listaLente[j+1].Material);
      listaLente[j].Tamanio    = listaLente[j+1].Tamanio;
      strcpy(listaLente[j].Marca, listaLente[j+1].Marca);
      strcpy(listaLente[j].Color, listaLente[j+1].Color);

    }
  }

  strcpy(listaLente[numLente-1].Material,          "");
    listaLente[numLente-1].Tamanio     = -1;
  strcpy(listaLente[numLente-1].Marca,       "");
  strcpy(listaLente[numLente-1].Color, "");

  numLente--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaLente;
}
