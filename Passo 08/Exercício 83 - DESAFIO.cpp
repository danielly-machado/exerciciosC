#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int numeros[20];
	int aux;
	
	srand (time(NULL));
	
	for (int i=0;i<20;i++){
		int numeroRand = rand()%99;
		numeros[i] = numeroRand;
	}
	
	for (int i=0;i<20;i++){
		printf("Numero %i \n", numeros[i]);
	}
	
	for (int i=0;i<20;i++){
		for (int j=i+1;j<20;j++) {
			if (numeros[i] > numeros[j]){
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		} 
	}
	
	return 0;
	
}

	
	
	
