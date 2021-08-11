#include <stdio.h>
#include <stdlib.h>

int recebeValorParaInicializarSoma();
int recebeValorParaFinalizarSoma();
void superSomador(int x, int y);

int main(){
	
	int ab = recebeValorParaInicializarSoma();
	int cd = recebeValorParaFinalizarSoma();
	superSomador (ab, cd);
	return 0;	
}

void superSomador(int x, int y){
	
	int soma=0; 
	
	for (int contador=x; contador<=y; contador++){
		soma = soma + contador;
		printf (" %i + ",contador);
	}
	printf ("= %i", soma);
}

int recebeValorParaInicializarSoma(){
	int a = 0;
	printf ("Digite um valor para inicializar o somador: ");
	scanf ("%i", &a);
	return a;
}

int recebeValorParaFinalizarSoma(){
	int b = 0;
	printf ("Digite um valor para finalizar o somador: ");
	scanf ("%i", &b);
	return b;
}
