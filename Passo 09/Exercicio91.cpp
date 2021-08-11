#include <stdio.h>
#include <stdlib.h>

int valorDigitado();
void maior(int valor1, int valor2);

int main() {
	int x = valorDigitado();
	int z = valorDigitado();
	maior(x, z);
}

void maior(int valor1, int valor2) { 
	if(valor1 > valor2) {
		printf ("\n%i e maior que %i", valor1, valor2);
	} 
	if(valor1 < valor2) {
		printf ("\n%i e maior que %i", valor2, valor1);
	} 
	if(valor1 == valor2) {
		printf ("\nOs valores sao iguais");
	}
}
	
int valorDigitado() {
	int x = 0;
	printf ("\nDigite um numero inteiro: ");
	scanf ("%i", &x);
	return x; 
}
