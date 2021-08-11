#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {
	
	int numerosAleatorios [7];
	
	srand(time(NULL));
	
	for (int i=0; i<=7;i++) {
		printf ("%i\n", rand()%100);
	}
	return 0;
}
