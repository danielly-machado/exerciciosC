#include <stdio.h>
#include <stdlib.h>

int main() {
		
	int valores [15];
	int posicaoValoresMultiplos10;
	
	for (int i=1;i<=15;i++) {
		printf ("Digite um numero inteiro da posicao %i: ",i);
		scanf ("%i", &valores [i]);
	}
	
	for (int i=1;i<=15;i++) {
		if (valores [i] % 10 == 0){
			posicaoValoresMultiplos10=valores[i];
			printf ("\n\nPosição dos numeros multiplos de 10: %i\n",i);
		}
	}

	return 0;	
	
}


