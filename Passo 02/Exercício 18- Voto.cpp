#include <stdio.h>

int main() {
	
	int anonascimento, idade, anoatual=2021;
	
	printf ("Digite o seu ano de nascimento: ");
	scanf ("%i", &anonascimento);
	idade = anoatual - anonascimento; 
	if (idade >= 18) {
		printf ("Voce está habilitado para votar.");
	} else {
		printf ("Voce ainda nao esta habilitado para votar.");
	}	
	return 0;			 
}
