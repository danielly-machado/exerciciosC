#include <stdio.h>

int main (void) {
	
	int contador, primeirovalor, ultimovalor, incremento;
	
	printf ("Digite o primeiro valor: ");
	scanf ("%i", &primeirovalor);
	printf ("Digite o último valor: ");
	scanf ("%i", &ultimovalor);
	printf ("Informe o incremento: ");
	scanf ("%i", &incremento);
	
	for (contador = primeirovalor; contador <= ultimovalor; contador += incremento) {
		printf ("% i", contador);
	}
	printf (" acabou!");
}
