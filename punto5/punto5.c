/********************************************
*Fecha: 15 Agosto 2022
*Autor: Santiago Mora
*Materia: Prallel and Distributed Computing
*Topico: Punto 5 triangulo rectangulo 
********************************************/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int filas;

void triangulo_rectangulo(){
	int i,j;
	
	printf("Ingrese el numero de filas a realizar \n");
	printf("El valor debe estar entre 1 y 14 filas \n");
	
	scanf("%i",&filas);
	if (filas <= 14 && filas >= 1){
		for (i = 1 ; i <= filas ; i++){
			for (j = 1 ; j <= i ; j++){
				printf("*");
			}
			
			printf("\n");	
		}
	}
	else{
		printf("valor invalido \n");
	}	
} 
void bienvenida()
{

	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=        Triangulo  Rectangulo         =\n");
	printf("========================================\n");	
}
int main()
{
	bienvenida();
	triangulo_rectangulo();
	return 0;
}

