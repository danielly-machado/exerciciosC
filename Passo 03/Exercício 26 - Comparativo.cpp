#include <stdio.h>

int main() {
	
	int a, b;
	
	printf ("Digite o primeiro valor: ");
	scanf ("%i", &a);
	printf ("Digite o segundo valor: ");
	scanf ("%i", &b);
	if (a > b) {
		printf ("O primeiro valor e maior que o segundo.");
	} else if (a < b) {
		printf ("O segundo valor e maior que o primeiro.");
	} else {
		printf (" Não existe valor maior, os dois sao iguais.");
	}
	return 0; 
}
