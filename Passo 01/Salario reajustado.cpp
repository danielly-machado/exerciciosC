#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[10];
	float salario, reajuste, salarioatual;
	
	printf ("Nome do colaborador: ");
	gets (nome);
	printf ("Digite o salario atual: R$ ");
	scanf ("%f",&salario);
	reajuste = (salario/100 *15);
	salarioatual = (salario + reajuste);
	printf ("O valor do salario reajustado do colaborador %s e de R$ %f", nome, salarioatual);
	return 0;
}
