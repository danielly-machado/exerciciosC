#include <stdio.h>

int main() {
	
	char nome[40];
	char sexo;
	float totcompra, desconto, totdesconto;
	
	printf ("Nome do cliente: ");
	gets(nome);
	printf ("Infome qual o sexo [M/F]: ");
	scanf ("%c",&sexo);
	printf ("Digite o valor da compra: ");
	scanf ("%f", &totcompra);
	if (sexo == 'M') {
		totdesconto = (totcompra/100)*95;
		printf ("Cliente %s: Total da compra com desconto de 5%%: %.2f", nome, totdesconto);
	} else if (sexo == 'F') {
		totdesconto = (totcompra/100)*87;
		printf ("Cliente %s: Total da compra com desconto de 13%%: %f", nome, totdesconto);
	}
	return 0;
}
