#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//n quantidade de elementos
	
	int a1; //primeiro valor
	int r; //diferença entre os dois numeros
	int an;//último termo da P.A
	int soma=0;
	
	printf ("Digite um valor inicial para a progressão aritmética: ");
	scanf ("%i",&a1);
	printf ("Informe o incremento, chamado de razão na progressão aritmética: ");
	scanf ("%i",&r);
	
	for (int n=a1; n<=10;n+=r){
		an=a1+(10-1)*r;	
	}
	for (int n=a1; n<=an;n+=r){
		printf ("% i", n); 
		soma=soma+n;
		printf ("% i\n", soma);
	}	
	
	return 0;	
}
