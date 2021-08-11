#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int valorBasePotencia();
int valorExpoentePotencia();
void calculoPotencia(int a, int b);

int main() {
	int x = valorBasePotencia();
	int y = valorExpoentePotencia();
	calculoPotencia(x,y);	
}

void calculoPotencia(int a, int b){
	
	int potenciacao;
	
	potenciacao = pow(a,b);
	printf ("%i elevado a %i e igual a %i", a, b, potenciacao);
		
}

int valorBasePotencia() {
	int c=0;
	printf ("Digite o numero base da potencia: ");
	scanf ("%i", &c);
	return c; 
}

int valorExpoentePotencia() {
	int d=0;
	printf ("Digite o numero expoente da potencia: ");
	scanf ("%i", &d);
	return d; 
}
