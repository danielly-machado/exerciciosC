#include <stdio.h>

int main() {
	
	float a,b,c; 
	
	printf ("Qual e o tipo de triangulo");
	printf ("\nDigite o valor do lado a: ");
	scanf ("%f", &a);
	printf ("Digite o valor do lado b: ");
	scanf ("%f", &b);
	printf ("Digite o valor do lado c: ");
	scanf ("%f", &c);
	if (a + b >= c && a + c >=b && b + c >= a) {
		if (a==b && b==c && a==c) {
			printf ("Triangulo Equilatero");
		} else if (a==b || b==c || c== a) {
			printf ("Triangulo Isosceles");
		} else if (a!=b && b!=c && c!=a) {
			printf ("Triangulo Escaleno");
		} else {
			printf ("Valores invalidos para um triangulo");
		}
	}
	return 0; 
}
