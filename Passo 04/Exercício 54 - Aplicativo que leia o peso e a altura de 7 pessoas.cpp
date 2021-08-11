#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float altura=0;
	float peso=0;
	float somatoriaaltura=0;
	float mediaAlturaGrupo=0;
	float pessoasAcimaNoventaQuilos=0;
	float pessoasMenosCinquentaQuilosEUmESessentaDeAltura=0;
	float pessoasMaisDeCemQuilosEUmENoventaDeAltura=0;
	
	printf ("Aplicativo Peso e Altura\n");
	
	for (int i=0;i<7;i++) {
		printf ("\nInforme a altura:" );
		scanf ("%f", &altura);
		printf ("\nInforme o peso: ");
		scanf ("%f", &peso);
		
		somatoriaaltura = somatoriaaltura + altura;
		
		if (peso>90) {
			pessoasAcimaNoventaQuilos++;
		}
		
		if (peso<50 && altura<1.60) {
			pessoasMenosCinquentaQuilosEUmESessentaDeAltura ++;
		}
		
		if (peso>100 && altura>1.90) {
			pessoasMaisDeCemQuilosEUmENoventaDeAltura++;
		}
	}
	
	mediaAlturaGrupo = somatoriaaltura/7;
	
	printf ("A media de altura do grupo: %f\n", mediaAlturaGrupo);
	printf ("Pessoas acima de 90kg: %f\n", pessoasAcimaNoventaQuilos);
	printf ("Pessoas com menos de 50kg e 1,60 de altura: %f\n", pessoasMenosCinquentaQuilosEUmESessentaDeAltura);
	printf ("Pessoas com mais de 100kg e 1,90 de altura: %f\n", pessoasMaisDeCemQuilosEUmENoventaDeAltura);
	
}
