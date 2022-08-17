/********************************************
*Fecha: 15 Agosto 2022
*Autor: Santiago Mora
*Materia: Prallel and Distributed Computing
*Topico: Punto 6 matriz NxN 
********************************************/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>


void bienvenida(){
	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=          Matriz NxN print 1          =\n");
	printf("========================================\n");

}
void inicializar_matriz(int n,int a[]){
	// se inicializa la matriz
	int i,j;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			a[i+j*n]=1;
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
	printf("El tamano debe ser superior a 1 y menor que 8 \n");	

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
