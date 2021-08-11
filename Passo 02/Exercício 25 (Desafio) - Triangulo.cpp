#include <stdio.h>

int main() {
	
	float a, b, c;
	
	printf ("E TRIANGULO OU NAO E?");
	printf ("Digite o valor da reta a: ");
	scanf ("%f", &a);
	printf ("Digite o valor da reta b: ");
	scanf ("%f", &b);
	printf ("Digite o valor da reta c: ");
	scanf ("%f", &c);
	if ((a + b > c) && (a + c > b)){
		printf (" E um triangulo!");
	} else {
		printf ("Nao e triangulo!");
	}
	return 0; 
}
