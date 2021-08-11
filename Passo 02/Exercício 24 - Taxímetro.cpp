#include <stdio.h>

int main() {
	
	float km, valorviagem;
	
	printf ("TAXIMETRO");
	printf ("\n Informe a distancia da viagem em km: ");
	scanf ("%f", &km);
	if (km <= 200) {
		valorviagem = km * 0.50;
		printf (" O valor total da viagem e de R$ %2.2f", valorviagem);
	} else if (km > 200) {
		valorviagem = km * 0.45;
		printf ("O valor total da viagem e de R$ %2.2f", valorviagem);
	}
	return 0;
}
