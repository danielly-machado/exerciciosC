#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade[8];
	int idadeDigitada;
	int somaIdades = 0;
	int idadeMaiorVinteECinco;
	int maiorIdadeDigitada=0;
	int mediaIdade;
	int maiorIdadeIndex;
	
	for (int i=0;i<8;i++){
		printf ("Digite a idade [%i]: ",i);
		scanf ("%i", &idadeDigitada);
		idade[i] = idadeDigitada;
	}
	
	for (int i=0;i<8;i++) {
		somaIdades=somaIdades+idade[i];
		
		if (idade[i] > 25){
			printf ("\nPosicao com pessoas de mais de 25 anos:%i", i);
		}
		
		if (idade[i] > maiorIdadeDigitada){
			maiorIdadeDigitada = idade[i];
			maiorIdadeIndex = i;
		}
	}
	
	
	mediaIdade=somaIdades/8;
	
	printf ("\nMedia de idade das pessoas cadastradas:%i", mediaIdade);
	printf ("\nMaior idade digitada:%i ", maiorIdadeDigitada);
	printf ("\nPosicao com maior idade digitada:%i ", maiorIdadeIndex);
	
	return 0;
}
