/********************************************
*Fecha: 15 Agosto 2022
*Autor: Santiago Mora
*Materia: Parallel and Distributed Computing
*Tema: TALLER 1
*Topico: convertidor de dias en anos
*********************************************/

#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>


int anos;
int semanas;
int dias;

void calculo()
{

	printf("===========================================\n");
	printf("=               Bienvenido                =\n");					
	printf("=  Convertidor de dias en anos y semanas  =\n");
	printf("===========================================\n");
	
	printf("Ingrese la cantidad de dias a transformar en anos: ");
	
	scanf("%i", &(dias));
	
	anos = dias / 365;
	printf("El numero de anos que representan la cantidad de dias ingresados son: %i \n",anos);
	
	semanas = dias / 40;
	printf("El numero de semanas que representan la cantidad de dias ingresados son: %i \n", semanas);

}

int main()
{
	calculo();
	return 0;
}


