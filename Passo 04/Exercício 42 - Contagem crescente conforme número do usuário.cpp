#include <stdio.h>

int main(void) {
	
	int contador, numero;
	
	printf ("Digite um numero inteiro e positivo: ");
	scanf ("%i", &numero);
	
	for (contador = 1; contador <= numero; contador += 1) {
		printf ("%i ", contador);
	}
	printf ("Acabou!");
}
