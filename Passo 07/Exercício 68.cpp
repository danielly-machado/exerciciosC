#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sexo=0;
	int peso=0;
	int mulheresCadastradas;
	int quantidadeHomensPesamAcimaDeCem=0;
	float somatoriaPesoMulheres=0;
	float mediaPesoEntreMulheres=0;
	float maiorPesoEntreHomens=0;
	
	printf ("Programa de Pesagem\n\n"); 
	
	for (int i=0; i<=4;i++) {
		printf ("Informe o sexo. Digite [1] para Masculino e [2] para feminino: ");
		scanf ("%i", &sexo);
		printf ("Digite o peso(kg): ");
		scanf ("%i", &peso);
		
		if (sexo == 2) {
			mulheresCadastradas++;
			somatoriaPesoMulheres = somatoriaPesoMulheres + peso;
		} 
		if (sexo == 1 && peso > 100) {
			quantidadeHomensPesamAcimaDeCem++;	
		}
		if (sexo == 1 && peso > maiorPesoEntreHomens) {
			maiorPesoEntreHomens=peso;
		}
			
	}
		
	mediaPesoEntreMulheres = somatoriaPesoMulheres / mulheresCadastradas;
		
	printf ("Quantidade de mulheres cadastradas:%i\n", mulheresCadastradas);
	printf ("Quantidade de homens acima de 100kg:%i\n", quantidadeHomensPesamAcimaDeCem);
	printf ("Media de peso entre as mulheres: %f\n", mediaPesoEntreMulheres);
	printf ("Maior peso entre os homens:%f\n", maiorPesoEntreHomens);
	
	return 0;
	
}
	



