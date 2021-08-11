#include <stdio.h>

int main() {
	
	float km, totvalor;
	int dias;
	int tipo_carro;
	
	printf ("ALUGA FACIL - LOCADORA DE CARROS");
	printf ("\nDigite o tipo veiculo (1.Popular / 2.Luxo): ");
	scanf ("%i", &tipo_carro);
	printf ("Digite a quantidade de dias locados: ");
	scanf ("%i", &dias);
	printf ("Digite quantos km rodados: ");
	scanf ("%f", &km);
	if (tipo_carro == 1 )  {
		if (km < 100) {
			totvalor = (km * 0.20) + (dias * 90);
			printf ("%2.f", totvalor);
		} else {
			totvalor = (km * 0.10) + (dias * 90);
			printf ("%2.f", totvalor);
		}
    } else if (tipo_carro == 2) {
    	if (km < 200) {
    		totvalor = (km * 0.30) + (dias * 150);
    		printf ("%2.f", totvalor);
		} else {	
			totvalor = (km * 0.25) + (dias * 150);
			printf ("%2.f", totvalor);
		}
    }
	return 0;		
}
