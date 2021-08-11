#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int somatoria=0;
	int idade=0;
	int mediaDeIdade=0;
	int maiorDeDezoito=0;
	int menorDeCinco=0;
	int maiorIdade=0;
	
	for (int i=0;i<10;i++) {
		printf ("Digite a idade: ");
		scanf ("%i", &idade);
		
		somatoria = somatoria + idade;
		
		if (idade > 18) {
			maiorDeDezoito++;
		}
		
		if (idade < 5) {
			menorDeCinco++;
		}
		
		if (idade > maiorIdade) {
			maiorIdade = idade;
		}
	}
	
	mediaDeIdade = somatoria/10;
	
	printf ("A media de idade: %i\n", mediaDeIdade);
	printf ("Maiores de 18 anos: %i\n", maiorDeDezoito);
	printf ("Menores de 5 anos: %i\n:", menorDeCinco);
	printf ("A maior idade: %i\n:", maiorIdade);
	
	return 1;
	
}
