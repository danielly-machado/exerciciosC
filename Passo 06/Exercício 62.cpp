#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int idade;
	int mediaIdades;
	int somatoriaIdades;
	int pessoasVinteEUmAnosOuMais=0;
	int opcaoescolhida;
	int quantidadeDeIdadesDigitadas=0;
	
	do {
		printf ("Digite a idade: ");
		scanf ("%i", &idade);
		printf ("Deseja cadastrar novas idades? Digite [1] para Sim e [2] para Nao: ");
		scanf ("%i", &opcaoescolhida);
		
		somatoriaIdades=somatoriaIdades+idade;
		quantidadeDeIdadesDigitadas++;
		
		if (idade>=21) {
			pessoasVinteEUmAnosOuMais++;	
		} 
		
	} while (opcaoescolhida==1);
	
	mediaIdades = somatoriaIdades/quantidadeDeIdadesDigitadas;
	
	printf ("Quantidade de idades digitadas:%i\n ", quantidadeDeIdadesDigitadas);
	printf ("Media entre as idades digitadas:%i\n", mediaIdades);
	printf ("Pessoas com 21 anos ou mais:%i\n ", pessoasVinteEUmAnosOuMais);
}
