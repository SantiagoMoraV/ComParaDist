/********************************************
*Fecha: 15 Agosto 2022
*Autor: Santiago Mora
*Materia: Prallel and Distributed Computing
*Topico: Punto 10 dos matrices NxN con numeros 
*aleatorios que se multiplican
********************************************/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>


void bienvenida(){
	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=        2 Matriz NxN aleatorio        =\n");
	printf("=        resultado del producto        =\n");
	printf("========================================\n");
}


void inicializar_matriz(int n,int a[], int b[], int c[]){

	int i,j;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			int r1 = rand() % (9-0+1) + 0;
			int r2 = rand() % (9-0+1) + 0;
			a[i+j*n]=r1;
			b[i+j*n]=r2;
			c[i+j*n]=0;	
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

void producto_matriz(int n, int a[], int b[], int c[]){
	
	int i,j,k;
	int suma_parcial;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			suma_parcial = 0;
			for(k=0; k<n; k++){
				suma_parcial += a[j+k*n]*b[k+i*n];
			}
			c[j+i*n] = suma_parcial;
		}
		
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
		int matrizA[Size],matrizB[Size],matrizC[Size];
	
		inicializar_matriz(N, matrizA, matrizB, matrizC);

		imprimir_matriz(N, matrizA);
		imprimir_matriz(N, matrizB);			
		
		producto_matriz(N, matrizA, matrizB, matrizC);
		
		printf("El producto de las matrices da como resultado : \n");
		imprimir_matriz(N, matrizC);
	} else {
	
		printf("El valor no es valido \n");
	
	}
	
	return 0;
}
