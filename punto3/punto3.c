/********************************************
* Fecha: 15/08/2022
* Autor: Santiago Mora
* Materia: Parallel and Distributed Computing
* Punto 3, distancia entre dos puntos
*********************************************/

#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>

float distancia,x,x2,y,y2,Rx,Ry;

void bienvenida()
{
	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=         calculo de Distancia         =\n");
	printf("=           entre dos puntos           =\n");
	printf("========================================\n");
	
	printf("Ingrese la posicion de x1: ");
	scanf("%f", &(x));
	printf("Ingrese la posicion y1: ");
	scanf("%f", &(y));
	printf("Ingrese la posicion x2: ");
	scanf("%f", &(x2));
	printf("Ingrese la posicion y2: ");
	scanf("%f", &(y2));
}

void distancia_entre_puntos()
{
	Rx = pow((x2-x),2);
	Ry = pow((y2-y),2);
	distancia = sqrt((Rx+Ry));
	printf("La distancia entre el primer punto y el segundo punto es: %f \n",distancia);
}

int main()
{
	bienvenida();
	distancia_entre_puntos();
	
	return 0;
}
