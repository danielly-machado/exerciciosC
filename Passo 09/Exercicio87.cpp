#include <stdio.h>
#include <stdlib.h>

int learn(){
	
	int resposta; 
	
	printf ("Est� aprendendo linguagem C? Digite 1 para SIM e 2 para NAO: ");
	scanf ("%i", &resposta);
	
	if (resposta == 1){
		printf ("Legal! Seja bem-vindo!");
	} else {
		printf ("Vamos aprender?");
	}

}

int main(){
	learn();
}
