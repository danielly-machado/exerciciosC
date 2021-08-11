#include <stdio.h>

int main() {
	
	int anonascimento, idade, anoatual = 2021, maioridade, menoridade;
	
	printf ("ALISTAMENTO MILITAR");
	printf ("\n Digite o ano de nascimento do candidato: ");
	scanf ("%i,", &anonascimento);
	idade = anoatual - anonascimento;
	if (idade > 18) {
		maioridade = idade - 18;
		printf (" O candidato esta apto para o alistamento ha %i anos", maioridade);	
	} else {
		menoridade = 18 - idade;
		printf (" O candidato ainda nao esta apto para o alistamento. Faltam %i anos", menoridade);
	}
	return 0;
}
