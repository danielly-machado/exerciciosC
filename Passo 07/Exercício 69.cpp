#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//n quantidade de elementos
	
	int a1; //primeiro valor
	int r; //diferen�a entre os dois numeros
	int an;//�ltimo termo da P.A
	int soma=0;
	
	printf ("Digite um valor inicial para a progress�o aritm�tica: ");
	scanf ("%i",&a1);
	printf ("Informe o incremento, chamado de raz�o na progress�o aritm�tica: ");
	scanf ("%i",&r);
	
	for (int n=a1; n<=10;n+=r){
		an=a1+(10-1)*r;	
	}
	for (int n=a1; n<=an;n+=r){
		printf ("% i", n); 
		soma=soma+n;
		printf ("% i\n", soma);
	}	
	
	return 0;	
}
