#include <stdio.h>

int main() {
	
	int horas, pontos;
	float premio;
	
	printf ("PROGRAMA VIDA SAUDAVEL");
	printf ("\nCada hora de atividade fisica no mes vale pontos!");
	printf ("\nDigite quantas horas de exercicios foram realizados: ");
	scanf ("%i", &horas);
	if (horas < 10) {
		pontos = 2 *horas;
		premio = pontos * 0.05;
		printf ("Voce fez %i pontos e ganhou R$ %0.2f", pontos, premio);
	} else if (horas > 10 && horas < 20) { 
		pontos = 5 * horas;
		premio = pontos * 0.05;
		printf ("Voce fez %i pontos e ganhou R$ %0.2f", pontos, premio);
	} else {
		pontos = 10 * horas;
		premio = pontos * 0.05;
		printf ("Voce fez %i pontos e ganhou R$ %0.2f", pontos, premio);
	}
	return 0;
}
