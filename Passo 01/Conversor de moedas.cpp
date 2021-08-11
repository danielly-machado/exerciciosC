#include <stdio.h>

int main(){
	float reais, dolar;
	printf ("Informe quanto possui em reais: R$ ");
	scanf ("%f", &reais);
	dolar = reais/3.45;
	printf ("Voce pode comprar US$ %0.2f dolares", dolar);
	return 0;
}
