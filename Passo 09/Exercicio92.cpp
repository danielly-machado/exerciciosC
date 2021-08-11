#include <stdio.h>
#include <stdlib.h>

int recebeValorDigitadoPeloUsuario();
void ParOuImpar(int x);


int main(){
	int xpto = recebeValorDigitadoPeloUsuario();
	ParOuImpar(xpto);
	return 0;	
}

void ParOuImpar(int x){
	if (x% 2 == 0){
		printf ("O numero digitado e par.");
	} else {
		printf ("O numero digitado e impar.");
    }		
} 

int recebeValorDigitadoPeloUsuario(){
	int a = 0;
	printf ("Digite um numero inteiro: ");
	scanf ("%i", &a);
	return a; 
}

