#include <stdio.h>

int main (void) {

	int number;
	int somatorio = 0;
	
	for (int i = 0; i < 7; i++) {
		printf ("Digite um numero inteiro: " );
		scanf ("%i", &number);
		somatorio = somatorio + number; 
	}
	printf ("%i", somatorio);
}
