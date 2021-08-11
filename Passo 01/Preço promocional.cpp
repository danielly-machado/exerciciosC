#include <stdio.h>
#include <stdlib.h>

int main(){
	float valorproduto, desconto, precopromocional;
	printf ("Digite o valor do produto: ");
	scanf ("%f", &valorproduto);
	desconto = (valorproduto/100*15);
	precopromocional = (valorproduto-desconto);
	printf ("Preco promocional = %f", precopromocional);
	return 0;
}
