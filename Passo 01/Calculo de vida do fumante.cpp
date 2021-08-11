#include <stdio.h>

int main(){
	
	int cigarrospordia, anosdefumo,totcigarros, diasperdidos; 
	
	printf ("Digite a quantidade de cigarros fumados por dia: ");
	scanf ("%i", &cigarrospordia);
	printf ("Digite a quantidade de anos fumando: ");
	scanf ("%i", &anosdefumo);
	totcigarros = (anosdefumo *365)*cigarrospordia;
	diasperdidos = (totcigarros*10)*24;
	printf ("O fumante perdera %d", diasperdidos);
	return 0;
		
}
