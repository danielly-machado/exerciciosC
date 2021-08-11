#include <stdio.h>

int main (void) {
	
	int resultado = 0;
	
	for (int numero = 500; numero >= 0; numero -=50) {
		resultado = resultado + numero;
	}
		printf (" % i", resultado);
}
