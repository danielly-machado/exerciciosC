#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main() {
	
	int i;
	float notas[10];
	float notasDigitadas;
	float somatorioNotas=0;
	float mediaNotas;
	int alunosAcimaDaMedia;
	float maiorNotaDigitada;
	float maiorNotaIndex;
	
	for (i=0;i<10;i++){
		printf ("Digite a nota do aluno [%i]: ", i);
		scanf ("%f", &notasDigitadas);
		notas[i] = notasDigitadas;
	}
	
	for (int i=0;i<10;i++){
		somatorioNotas = somatorioNotas + notas[i];
		
		if (notas[i] > maiorNotaDigitada){
			maiorNotaDigitada = notas[i];
			maiorNotaIndex = i;
		}		
	}
	
	mediaNotas = somatorioNotas/10;
	
	for (i=0;i<10;i++){
		if (notas[i] > mediaNotas){
			alunosAcimaDaMedia++;
	}
	}
	printf ("\nMedia da turma: %.1f", mediaNotas);
	printf ("\nQuantidade de alunos acima da média da turma: %i", alunosAcimaDaMedia);
	printf ("\nMaior nota digitada: %.1f", maiorNotaDigitada);
	printf ("\nPosicoes onde aparece maior nota:  %f", maiorNotaIndex);
	
	return 0;	
}

