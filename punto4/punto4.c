/**************************************************
* Fecha: 15/08/2022
* Autor: Santiago Mora
* Materia: Parallel and Distributed Computing
* Punto 4, muestra los 10 pimeros numero naturales
**************************************************/

#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>

void numeros_naturales()
{
	int i;
	printf("Los numeros naturales son: \n");
	for (i=1;i<=10;i++){
		printf("%i ", i);
	
	}
	printf("\n");
}

void bienvenida()
{
	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=    primeros 10 Numeros Naturales     =\n");
	printf("========================================\n");	
}

int main()
{
	bienvenida();
	numeros_naturales();
	return 0;
}
