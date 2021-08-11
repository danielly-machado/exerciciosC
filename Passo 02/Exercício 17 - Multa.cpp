#include <stdio.h>

int main(){
	
	float km, multa;
	
	printf ("-----DETRAN-----");
	printf ("\n Qual a velocidade do carro: Km ");
	scanf ("%f", &km);
	if (km > 80)
	{
		multa = (km - 80)*5;
	}
	printf ("Voce ultrapassou a velocidade permitida de 80km/h, portanto está recebendo a multa no valor de R$ %f, valor cobrado por km acima da velocidade", multa);
	
}
