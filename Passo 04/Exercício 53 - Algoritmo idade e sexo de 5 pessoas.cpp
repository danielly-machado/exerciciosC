#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int idade=0;
	int sexo;
	int somatoriaGrupo=0;
	int homensCadastrados=0;
	int somatoriaHomens=0;
	int mulheresCadastradas=0;
	int mediaIdadeGrupo=0;
	int mediaIdadeHomens=0;
	int mulheresAcimaVinte=0;
	
	printf ("Listagem\n");
	
	for (int i=0; i<5;i++) {
		printf ("\nInforme a idade: ");
		scanf ("%i",&idade);
		printf ("Informe o sexo. Digite [1] para masculino e [2] para feminino: ");
		scanf ("%i",&sexo);
		
		somatoriaGrupo = somatoriaGrupo+idade;
		
		 if (sexo==1) {
			homensCadastrados++;
			somatoriaHomens=somatoriaHomens+idade;
		} else if (sexo==2) {
			mulheresCadastradas++;
			if (idade>20){
			    mulheresAcimaVinte++;
			}
		}
	}
		 	
	mediaIdadeGrupo=somatoriaGrupo/5;
	
	if(homensCadastrados > 0) {
		mediaIdadeHomens=somatoriaHomens/homensCadastrados;
	}
	
	printf ("\nQuantidade de homens cadastrados %i\n", homensCadastrados);
	printf ("Quantidade de mulheres cadastradas %i\n", mulheresCadastradas);
	printf ("Media de idade do grupo %i\n", mediaIdadeGrupo);
	printf ("Media de idade dos homens %i\n", mediaIdadeHomens);
	printf ("Mulheres acima de vinte %i\n", mulheresAcimaVinte);
	
}

