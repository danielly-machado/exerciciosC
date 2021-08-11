#include <stdio.h>

int main() {
	
	float MaiorPreco = -9999999;
	float MenorPreco = 9999999 ;
	float ValorDoProduto = 0;
	
	for (int i=0;i<8;i++) {
		printf ("Informe o valor do produto: R$ ");
		scanf ("%f", &ValorDoProduto);
		
		if (ValorDoProduto > MaiorPreco) {
			MaiorPreco = ValorDoProduto;
		}
		
		if (ValorDoProduto < MenorPreco) {
			MenorPreco = ValorDoProduto;
		}
	}
	
	printf ("O maior preco e R$ %0.2f\n", MaiorPreco);
	printf ("O menor preco e R$ %0.2f\n", MenorPreco);
}
