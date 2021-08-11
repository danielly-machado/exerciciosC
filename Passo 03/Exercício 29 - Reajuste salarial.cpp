#include <stdio.h>



int main() {
	
	char nome [40];
	int anosdeempresa;
	float salarioatual, ajustesalarial, salreajustado;
	const int PERCENTUAL_ATE_TRES_ANOS = 1.03;
		
	printf ("AUMENTO SALARIAL");
	printf ("\nDigite o nome do colaborador: ");
	gets (nome);
	printf ("Digite o valor do salario atual: ");
	scanf("%f", &salarioatual);
	printf ("Digite os anos de empresa: ");
	scanf ("%i", &anosdeempresa);
	if (anosdeempresa <= 3) {
		salreajustado = salarioatual * PERCENTUAL_ATE_TRES_ANOS;
		printf (" O colaborador %s teve o salario reajustado para %f", nome, salreajustado);
	} else if ((anosdeempresa > 3) && (anosdeempresa <= 10)) {
		salreajustado = salarioatual * 1.125;
		printf ("O colaborador %s teve o salario reajustado para %f", nome, salreajustado);
	} else {
		salreajustado = (salarioatual / 100) * 120;
		printf ("O colaborador %s teve o salario reajustado para %f", nome, salreajustado);
	}
	return 0;
}
