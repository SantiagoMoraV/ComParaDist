/********************************************
*Fecha: 15 Agosto 2022
*Autor: Santiago Mora
*Materia: Prallel and Distributed Computing
*Topico: Punto 7 matriz NxN con numeros 
*aleatorios 
********************************************/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void bienvenida(){
	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=         Matriz NxN aleatorio         =\n");
	printf("========================================\n");

}

void inicializar_matriz(int n,int a[]){

	int i,j;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			int r = rand() % (9-0+1) + 0;
			a[i+j*n]=r;
		}
	}
}

void imprimir_matriz(int n, int m[]){

	int i,j; 
	printf("\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf(" %d ", m[i+j*n]);	
		}
		printf("\n");
	}

}

int main(int argc, char *argv[]){

	bienvenida();
	printf("Ingrese el tamano de la matriz \n");
	printf("El tamano debe ser superior a 0 y menor que 8 \n");	

	int N, Size;
	scanf("%d",&N);
	
	if(N < 9 && N > 0){
		Size = N*N;
		int matriz[Size];
	
		inicializar_matriz(N, matriz);

		imprimir_matriz(N, matriz);	
	} else {
	
		printf("El valor no es valido \n");
	
	}
	
	return 0;
}
