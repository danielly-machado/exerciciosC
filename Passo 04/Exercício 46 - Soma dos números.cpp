#include <stdio.h>

int main (void) { 
	int resultado = 0; 
	
	for (int numero = 6; numero <= 100; numero += 2) {
		resultado = resultado + numero;
	}
	printf ("% i", resultado);	
}	

