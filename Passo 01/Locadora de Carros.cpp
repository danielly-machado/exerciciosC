#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float km, kmrodado, valortotal;
	int dias, locacaodia;
	
	printf ("LOCADORA DE CARROS -- FREE CAR --");
	printf ("\n\n Digite quantos quilometros foram rodados: ");
	scanf ("%f", &km);
	printf ("Digite quantos dias o carro foi alugado: ");
	scanf ("%i", &dias);
	locacaodia = 90 * dias;
	kmrodado = km * 0.20; 
	valortotal = locacaodia + kmrodado;
	printf ("O valor total a ser pago e R$ %5.2f", valortotal);
	return 0;
}
