#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int contador;
	int numero;
	
	printf ("Contagem crescente\n\n");
	printf ("Digite um numero inteiro e positivo: ");
	scanf ("%i", &numero);
	printf ("Contagem:");
	
	for (contador=0;contador<=numero; contador++){
		printf ("% i", contador);
	}
	printf (" FIM!");
	
	return 0;
}
