#include <stdio.h>

int main() { 
	
	int numero;
	
	printf ("Digite um número inteiro: ");
	scanf ("%i,", &numero);
	if (numero % 2 == 0) {
		printf ("O numero %i e par", numero);
	} else {
		printf ("O numero %i e impar", numero);
	}
	return 0;	
}
