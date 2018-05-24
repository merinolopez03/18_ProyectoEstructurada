/*----------------------------------------------------------------*/
/* Autor: merino lopez pedro	  														  */
/* E-mail: pedromerino97@outlook.com*/
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion:  implementacion de funciones sobre la estructura  */
/*suma de matrices*/

#include<stdio.h>
#include<stdbool.h> //valores booleanos

#define ROW 10
#define COL 10

bool validarSumaMatriz(int filaA, int colA, int filaB, int colB);
void leerDatosMatriz(int matriz[ROW][COL], int fila, int col);
void imprimirMatriz(int matriz[ROW][COL], int fila, int col);
void sumaMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matrizResultado[ROW][COL], int fila, int col);


int main(void)

{
int filaA, colA;
int filaB, colB;


int matrizB[ROW][COL];
int matrizA[ROW][COL];
int matrizResultado[ROW][COL];

printf("\nintroduce la fila de la matriz A:");
scanf("%d",&filaA);

printf("\nintroduce la columna de la matriz A:");
scanf("%d",&colA);

printf("\nintroduce la fila de la matriz B:");
scanf("%d",&filaB);

printf("\nintroduce la columna de la matriz B:");
scanf("%d",&colB);

if(validarSumaMatriz(filaA,colA,filaB,colB))
{
printf("\nsi se puede realizar la operacion\n");

leerDatosMatriz(matrizA, filaA, colA);
leerDatosMatriz(matrizB, filaB, colB);

imprimirMatriz(matrizA, filaA, colA);
imprimirMatriz(matrizB, filaB, colB);

sumaMatriz(matrizA, matrizB, matrizResultado, filaA, colA);

printf("\nEl resultado de la suma es: \n");
imprimirMatriz(matrizResultado, filaA, colB);

/*desglose de la operacion*/
}else{
  printf("No se puede realizar la suma de matrizes");
}

  return 0;

}
void sumaMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matrizResultado[ROW][COL], int fila, int col)

{

  for(int i = 0; i< fila; i++)
  {
    for(int j = 0; j< col; i++)
    {
      matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];

    }
  }
}



void leerDatosMatriz(int matriz[ROW][COL], int fila, int col)

{
  for(int i = 0; i< fila; i++)
  {
    for(int j = 0; j< col; i++)
    {
      printf("Introduce el elemento [%d][%d]", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}



bool validarSumaMatriz(int filaA, int colA, int filaB, int colB)
{

  if((filaA == filaB) && (colA == colB))
 {
return true;

}
return false;

}

void imprimirMatriz(int matriz[ROW][COL], int fila, int col)

  {
    printf("\n\n");
    for(int i = 0; i< fila; i++)
    {
      printf("|");
      for(int j = 0; j< col; i++)
      {
        printf("%d", matriz[i][j]);
      }
      printf("|\n");
    }
  }
