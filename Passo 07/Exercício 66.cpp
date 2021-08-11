#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numero;
	int contador=0;
	
	printf ("Tabuada\n\n");
	printf ("Digite um numero da tabuada: ");
	scanf ("%i", &numero);
	
	for (contador=0;contador<=10;contador++) {
		printf ("%i x %i = %i \n", numero, contador, numero*contador);
	}
	return 0;
}
