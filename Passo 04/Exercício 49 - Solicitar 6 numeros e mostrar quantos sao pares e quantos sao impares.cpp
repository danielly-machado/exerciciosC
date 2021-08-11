#include <stdio.h>

int main (void) {
	
	int number=0; 
	int somapar=0;
	int somaimpar=0;
	
	for (int i=0; i < 6; i ++)	{
		printf ("Digite um numero inteiro: ");
		scanf ("%i", &number);
		
		if (number % 2 == 0) {
			somapar++;
		} else {
			somaimpar++;
		}
	} 
		
	printf ("O total de numeros pares sao %i", somapar);
	printf ("\nO total de numeros impares sao %i", somaimpar);
}
	
	

