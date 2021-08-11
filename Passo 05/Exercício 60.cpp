#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char nome[40];
	char nomePessoaMaisVelhaGrupo[40];
	char nomeMulherMaisJovem[40];
	int idadeMulherJovem=999;
	int idade=0;
	int idadePessoaMaisVelha=0;
	int sexo;
	int opcaoescolhida=3;
	int mediaIdadeGrupo=0;
	int somatoriaGrupo=0;
	int homensMaisTrinta=0;
	int mulheresMenosDezoito=0;
	int quantidadeDeIdadesDigitadas=0;
	
	do {
		printf ("Digite o nome: ");
		scanf ("%s", &nome);
		printf ("Digite a idade: ");
		scanf ("%i", &idade);
		printf ("Informe o sexo. Digite [1] para masculino e [2] para feminino: ");
		scanf ("%i", &sexo);
		printf ("Deseja continuar o cadastro? Digite [3] para sim e [4] para nao: ");
		scanf ("%i", &opcaoescolhida);
		
		somatoriaGrupo=somatoriaGrupo+idade;
		quantidadeDeIdadesDigitadas++;
		
		if (idade > idadePessoaMaisVelha){
			idadePessoaMaisVelha=idade;
			//nomePessoaMaisVelhaGrupo = nome;
			strcpy(nomePessoaMaisVelhaGrupo, nome);
		}
		if (sexo == 2 && idade < idadeMulherJovem){
			idadeMulherJovem=idade;
			//nomeMulherMaisJovem = nome;
			strcpy(nomeMulherMaisJovem, nome);
		}
		if (sexo == 2 && idade < 18){
			mulheresMenosDezoito++;
		}
		if (sexo==1 && idade > 30){
			homensMaisTrinta++;
		}
	} while (opcaoescolhida==3);
	
	mediaIdadeGrupo = somatoriaGrupo/quantidadeDeIdadesDigitadas;
	
	printf ("Nome da pessoa mais velha: %s\n",nomePessoaMaisVelhaGrupo);
	printf ("Nome da mulher mais jovem: %s\n",nomeMulherMaisJovem);
	printf ("Media idade do grupo: %i\n", mediaIdadeGrupo);
	printf ("Quantidade de homens acima de 30 anos: %i\n", homensMaisTrinta);
	printf ("Quantidade de mulheres abaixo de 18 anos: %i\n", mulheresMenosDezoito);
	return 1;
}
