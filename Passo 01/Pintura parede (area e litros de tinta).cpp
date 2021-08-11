#include <stdio.h>

int main(){
	float l,a,area,litros;
	printf ("Digite a altura da parede: ");
	scanf ("%f",&a);
	printf ("Digite a largura da parede: ");
	scanf ("%f",&l);
	area = l*a;
	litros = area*2;
	printf("A area a ser pintada e de %0.2f m² e a quantidade de tinta necessaria e %1.f", area, litros);
	return 0;
}
