#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome [10];
	int dia, salariomensal;
	
	printf ("EMPRESA MAO NA MASSA");
	printf ("\nDigite o nome do colaborador: ");
	gets (nome);
	printf ("Digite os dias trabalhados: ");
	scanf ("%i", &dia);
	salariomensal = dia * 200;
	printf ("O colaborador %s recebera em junho R$ %i", nome, salariomensal);
	return 0;	
}
