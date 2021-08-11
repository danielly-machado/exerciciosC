#include <stdio.h>
#include <stdlib.h>

int valorDigitado();
void numeroMaior(int valor1, int valor2, int valor3);


int main() {
	int a = valorDigitado();
	int b = valorDigitado();
	int c = valorDigitado();
	numeroMaior (a,b,c);
}

void numeroMaior(int valor1, int valor2, int valor3) {
	if ((valor1 > valor2) && (valor1 > valor3)){
		printf ("\n%i e maior que os demais valores", valor1);
	}
	if ((valor2 > valor1) && (valor2 > valor3)){
		printf ("\n%i e maior que os demais valores", valor2);
	} else if ((valor3 > valor1) && (valor3>valor2)) {
		printf ("\n%i e maior que os demais valores", valor3);
	}
}

int valorDigitado() {
	int x = 0;
	printf ("Digite um valor: ");
	scanf ("%i", &x);
	return x;
}
