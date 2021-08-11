#include<stdlib.h>
#include<stdio.h>

int valoresDigitado();
void somador(int valor, int valor2);

int main() {
	int a = valoresDigitado();
	int b = valoresDigitado();
	somador(a, b);
	return 0;
}

void somador(int valor, int valor2) { 
	int soma = valor + valor2;
	printf ("\nA soma entre %i + %i = %i", valor, valor2, soma);	
} 

int valoresDigitado(){
	int a = 0;
	printf ("\nDigite um numero inteiro: ");
	scanf ("%i", &a);
	return a;
}
