#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int sexo;
	int idade=0;
	int opcaocontinuar;
	int maiorIdade=0;
	int homensCadastrados=0;
	int idadeMulherMaisJovem=999;
	int mediaIdadeHomens=0;
	int somatoriaHomens=0;
	
	do {
		printf ("Informe a idade: ");
		scanf ("%i",&idade);
		printf ("Informe o sexo. Digite [1] para masculino e [2] para feminino:");
		scanf ("%i",&sexo);
		printf ("Deseja continuar o cadastro? Digite 3 para sim e 4 para nao:");
		scanf ("%i",&opcaocontinuar);
		
			if (sexo==1){
				homensCadastrados++;
				somatoriaHomens=somatoriaHomens+idade;
			} 
			if (sexo == 2 && idade < idadeMulherMaisJovem){
				idadeMulherMaisJovem=idade;
			}	
			if (idade > maiorIdade){
				maiorIdade=idade;
			}	
					
	} while (opcaocontinuar==3);
	
	mediaIdadeHomens = somatoriaHomens/homensCadastrados;
	
	printf ("Maior idade: %i\n", maiorIdade);
	printf ("Homens cadastrados: %i\n",homensCadastrados);
	printf ("Idade da mulher mais jovem: %i\n", idadeMulherMaisJovem);
	printf ("Media de idade entre os homens: %i\n", mediaIdadeHomens);
	
	return 0;
}
