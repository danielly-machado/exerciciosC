#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c, delta;
	
	printf ("Digite um valor para a: ");
	scanf ("%i",&a);
	printf ("Digite um valor para b: ");
	scanf ("%i",&b);
	printf ("Digite um valor para c: ");
	scanf ("%i",&c);
	delta = (b*b) - (4 * a * c);
	printf ("Resultado e %i", delta);
	return 0;	
}
