/*AUTOR:MERINO LÓPEZ PEDRO*/
/*E_MAIL:pedromerino97@outlook.com*/
/*FECHA DE CREACION:20 DE ABRIL DE 2018*/
/*FECHA DE ACTUALIZACION:24 DE ABRIL DE 2018*/
/* REALIZAR UN PROGRAMA QUE CONVIERTA MINUSCULAS A MAYUSCULAS */
/*Declaración de bibliotecas*/

#include<stdio.h>

const int tamanio=50;

int main(void)
{

char c;
char array[tamanio];

int index=0;
printf("escriba una palabra en minuscula  para convertirla\n" );
while((c=getchar()) !='\n')
{                               /*tarea cvonvertir  a minusculas a mayusculas */
  if (c>=97 && c<=122)
   {
     /*validando unicamemnte caracteres: letras minusculas*/
c=c-32;
array[index]=c;
index ++;
}
}
printf("\n");
for(int i=0; i<tamanio; i++)
{
printf("%c",array[i]);
}
printf("\n");
return 0;                          /*tarea convertir a minuscula a mayuscula*/
}
