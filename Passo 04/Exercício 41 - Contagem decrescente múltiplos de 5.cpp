#include <stdio.h>

int main (void) {
	
	int contador;
	
	for (contador = 100; contador >= 0; contador -=5) {
		printf ("%i ", contador);	
	}
	printf ("Acabou!");
} 
