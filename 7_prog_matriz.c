
/*AUTOR:MERINO LÓPEZ PEDRO*/
/*E_MAIL:pedromerino97@outlook.com*/
/*FECHA DE CREACION:26 DE ABRIL DE 2018*/
/*FECHA DE ACTUALIZACION:26 DE ABRIL DE 2018*/
/* REALIZAR UN PROGRAMA de matriz cuadrada,rectangular y de columna */
/*Declaración de bibliotecas*/

#include <stdio.h>
int main (void)
{
        int j,a=0,b=0,i,c=0,d=0,k,f=0,g=0;
        int p=4,s=0;
        int q=5,r=3;
        int matrizcuadrada[p][p];
        int matrizrectangular[q][r];
	int columna[s][q];
    printf("matriz de cuadrada\n" );
        for( i=0;i<16;i++){
		matrizcuadrada[a][b]=i+1;
		printf("%i\t",matrizcuadrada[a][b]);
                if (a==3){
                        b=b+1;
			a=0;
			printf("\n");
                }
		else{
 			a=a+1;
                }
        }
	printf("\n");
    printf("matriz rectangular\n" );
        for( k=0;k<15;k++){
                        matrizrectangular[c][d]=k+1;
			printf("%i\t",matrizrectangular[c][d]);
                        if (c==4){
                                d=d+1;
                                c=0;
				printf("\n");
                        }
                        else{
                                c=c+1;

                        }
        }
        printf("\n");
  printf("matriz de columna\n" );

	for (j=0;j<5;j++){
		columna[f][g]=j;
		printf("%i \n",columna[f][g]);
		g=g+1;
	}
        return 0;

}
