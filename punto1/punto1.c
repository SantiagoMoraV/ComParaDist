/*************************************************
*Fecha: 15 Agosto 2022
*Autor: Santiago Mora
*Materia: Parallel and Distributed Computing
*Tema: TALLER 1
*Topico: Aplicacion para el calculo del producto
*Entre dos enteros
*************************************************/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int e1 = 0;
int e2 = 0;

void bienvenida(){

	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=      producto  de  dos  enteros      =\n");
	printf("========================================\n");

}


void operacion(){

	int pro = 0;

	printf("Introduzca el primer entero: ");
	
	scanf("%d", &(e1));

	printf("Introduzca el segundo entero: ");
	
	scanf("%d", &(e2));
	
	pro = e1 * e2;
	
	printf("El producto de los dos enteros es de: %d \n",pro); 
}

int main(int argc, char *argv[]){

	bienvenida();
	operacion();

	return 0;
}

