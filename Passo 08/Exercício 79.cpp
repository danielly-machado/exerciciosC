#include <stdio.h>
#include <stdlib.h>

int main(){ 
	
	int numeros [10];
	
	for (int i=0;i<=9;i++) {
		printf ("Digite um numero inteiro [%i]: ",i);
		scanf ("%i", &numeros[i]);
	}
	
	for (int i=0;i<=10;i++) {
		if (numeros [i] % 2 == 0) {
			printf ("numeros pares digitados: %i\n", numeros[i]);
			printf ("posicao dos numeros: %i\n", i);
		}		
	}

}
