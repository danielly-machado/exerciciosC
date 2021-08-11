#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome [4] [40];
	int idade [4];
	int idadeDigitada; 
	
	for (int i = 0; i < 4; i++){
		printf ("Digite o nome: ");
		scanf ("%s", nome[i]);
		printf ("Digite a idade: ");
		scanf ("%i", &idadeDigitada);
		idade[i] = idadeDigitada;
	}
	
	for (int i = 0; i < 4; i++){
		
		if (idade[i] < 18) {
			printf ("\nNome: %s --> idade: %i", nome[i], idade[i]);
		}
	}
	return 0;	
	
}
	
	

