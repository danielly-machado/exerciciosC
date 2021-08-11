#include <stdio.h>

int main() {
	
	char sexo;
	float salario_atual, salario_reajustado;
	int anos;
	
	printf ("\nEmpresa Tudo em Cima");
	printf ("\nCalculadora de Reajuste Salarial");
	printf ("\nInfome o sexo do colaborador [M/F]: ");
	scanf ("%c", &sexo);
	printf ("\nInforme o salario atual R$: ");
	scanf ("%f", &salario_atual);
	printf ("\nInforme a quantidade de anos trabalhados na empresa: ");
	scanf ("%i", &anos);
	if (sexo == 'F') {
		if (anos < 15) {
			salario_reajustado = (salario_atual / 100) * 105;
			printf ("O salario reajustado e de R$ %2.f ", salario_reajustado);
		} else if ( anos > 15 && anos < 20) {
			salario_reajustado = (salario_atual / 100) * 112;
			printf ("O salario reajustado e de R$ %2.f ", salario_reajustado);	
		} else {
			salario_reajustado = (salario_atual / 100) * 123;
			printf ("O salario reajustado e de R$ %2.f ", salario_reajustado);	
		}
    } else if (sexo == 'M') {
    	if (anos < 20) {
			salario_reajustado = (salario_atual / 100) * 103;
			printf ("O salario reajustado e de R$ %2.f ", salario_reajustado);
		} else if ( anos > 20 && anos < 30) {
			salario_reajustado = (salario_atual / 100) * 113;
			printf ("O salario reajustado e de R$ %2.f ", salario_reajustado);	
		} else {
			salario_reajustado = (salario_atual / 100) * 125;
			printf ("O salario reajustado e de R$ %2.f ", salario_reajustado);
		}
    }	
	return 0;
}
