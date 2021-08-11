#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nomes [7] [20];
	
	for (int i=0; i<=7;i++){
		printf ("Digite o nome: ");
		scanf ("%s", nomes [i]);
	}
	for (int i=7; i>=0;i--) {
		printf ("%s\n", nomes [i]);
	}
	return 0;
}
