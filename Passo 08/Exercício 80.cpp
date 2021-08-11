#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int numeros [5];
	int numeroDigitado;
	
	srand(time(NULL));
	
	for (int i=0;i<=5;i++) {
		int numeroRand = rand()%15;
		numeros[i] = numeroRand; 
	}
	
	for (int i=0;i<=5;i++){
		printf("Numero %i \n", numeros[i]);
	}
	
	printf ("Digite um número chave: ");
	scanf ("%i", &numeroDigitado);
	
	for (int i=0;i<=5;i++){
		if (numeros[i] == numeroDigitado) {
			printf("Numero %i ---> Numero encontrado na posicao [%i]\n", numeros[i], i);
		} else {
			printf("Numero %i \n", numeros[i]);
		}
	}
	
	return 0;
}
