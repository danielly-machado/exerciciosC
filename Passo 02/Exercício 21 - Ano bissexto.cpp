#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int ano; 
	bool bissexto;
	
	printf ("Digite um ano: ");
	scanf ("%i", &ano);
	if (ano % 400 == 0) {
		bissexto = true;
	} else if ((ano % 4 == 0) && (ano % 100 != 0)) {
		bissexto = true;
	} else {
		bissexto = false;		
	}
	
	if (bissexto == true) {
		printf ("O ano e bissexto!");
	} else {
		printf ("O ano nao e bissexto!");
	}
	return 0;
}
