#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
	
	int somaNumMaior = 0;
	int somaNumDivisivelPorTres = 0;
	int arrayNum[10];
	
	printf("Lista de numeros sorteados: \n\n");
	
	for (int i=0; i<10; i ++) { 
		arrayNum[i] = rand() % 20;
		
		if (arrayNum[i] > 5) {
			somaNumMaior++;
		}
		
		if (arrayNum[i] % 3 == 0) {
			somaNumDivisivelPorTres++;
		}
	}
	
	for (int i=0; i<10; i ++) {
		printf("- %i\n", arrayNum[i]);
	}
	
	printf("\n\nNumeros maiores que 5: %i", somaNumMaior);
	printf("\nNumeros divisiveis por 3: %i", somaNumDivisivelPorTres);
	
}


