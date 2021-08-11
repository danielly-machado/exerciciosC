#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numeros;
	int somatorioNumeros;
	int mediaNumeros;
	int quantidadeValoresPares=0;
	int opcaoescolhida;
	int menorValorDigitado=0;
	int quantidadeNumerosDigitados;
	
	do {
		printf("Digite um numero inteiro: ");
		scanf("%i", &numeros);
		printf("Deseja inserir novos valores? Digite [1] para Sim e [2] para Nao: ");
		scanf("%i", &opcaoescolhida);
		
		quantidadeNumerosDigitados++;
		somatorioNumeros=somatorioNumeros+numeros;
		
		if(numeros%2 == 0) {
			quantidadeValoresPares++;
		}
		
		if (numeros < menorValorDigitado) {
			menorValorDigitado = numeros;
		}
		
	} while(opcaoescolhida==1);
	
	mediaNumeros = somatorioNumeros/quantidadeNumerosDigitados;
	
	printf("Soma dos numeros digitados:%i\n", somatorioNumeros);
	printf("Menor valor digitado:%i\n", menorValorDigitado);
	printf ("Media entre todos os valores:%i\n", mediaNumeros);
	printf ("Quantidade de valores pares:%i\n", quantidadeValoresPares);
	
	return 0;
}
