#include <stdio.h>

int main() {
	
	float area, comprimento, largura;
	
	printf ("IMOBILIÁRIA CASAGRANDE");
	printf ("\nConfira a categoria do terreno escolhido");
	printf ("\nDigite a largura do terreno: ");
	scanf ("%f", &largura);
	printf ("Digite o comprimento do terreno: ");
	scanf ("%f", &comprimento);
	area = comprimento * largura;
	if (area <= 100) {
		printf ("Terreno Popular");
	} else if ((area > 100) && (area <= 500)) {
		printf ("Terreno Master");
	} else {
		printf ("Terreno VIP");
	}
	return 0;
}
