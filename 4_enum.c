/*AUTOR:MERINO LÓPEZ PEDRO*/
/*E_MAIL:pedromerino97@outlook.com*/
/*FECHA DE CREACION:20 DE ABRIL DE 2018*/
/*FECHA DE ACTUALIZACION:24 DE ABRIL DE 2018*/
/* REALIZAR UN PROGRAMA QUE ENNUMERE UNA SERIE DE CARACTERES*/
/*Declaración de bibliotecas*/


#include<stdio.h>
enum DIAS{L, MI, J, V, S, D};
enum MESES{EN=1, FE, MAR, AB, MAY, JUN, JUL, AG, SE, OC, NO, DI};
enum FRUTAS{manzana, mango, durazno, pera, pina};

enum PRECIOAUTO{NUEVO=10, SEMINUEVO=-5, USADO, ISERVIBLE};
/*enumeracion anonimo*/
enum {PROG, MATEDIS, MATEII,TGS, ELECI}var1, var2,var3};
/*int array[]={0,1,2,3,4}*/
int main(void)
{

  printf("%d\n",  USADO);

  for(enum MESES index=EN; index<=DI; index++)
{
printf("%d\n",index);

printf("%d\n",MATEDIS);
printf("%d\n",PROG);
printf("%d\n",TGS);
printf("%d\n",ELECI);

printf("%d\n",var1);
printf("%d\n",var2);
printf("%d\n",var3);

switch (index)
{
  case EN:
  printf("\nENERO\n");

  break;
  case OC:
  printf("\nOCTUBRE\n");
  break;
}
}
printf("\n");
  return 0;
}
