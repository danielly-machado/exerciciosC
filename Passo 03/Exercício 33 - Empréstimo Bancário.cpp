#include <stdio.h>

int main() {
	
	float valordoimovel, salario, valorprestacao;
	int meses;
	
	printf ("SIMULADOR DE EMPRESTIMO BANCARIO IMOBILIARIO");
	printf ("\nInforme o salario do comprador : R$ ");
	scanf ("%f", &salario);
	printf ("Informe o valor do imovel a ser adquirido: R$ ");
	scanf ("%f", &valordoimovel);
	printf ("Quantos meses para o pagamento: ");
	scanf ("%f", &meses); 
	valorprestacao = (valordoimovel / meses);
	if (valorprestacao > (salario /100)*30) {
		printf ("EMPRESTIMO NEGADO");	
	} else {
		printf ("EMPRESTIMO LIBERADO");
	}
	return 0;
}
	
