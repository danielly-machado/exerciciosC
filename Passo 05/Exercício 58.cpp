#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int idade=0;
	int somatoriaAlunos;
	int somatoriaIdade;
	int mediaIdadeTurma;
	
	for (idade=0; idade<999; idade++) {
		printf ("Digite a idade do aluno: ");
		scanf ("%i", &idade);
		somatoriaAlunos++;
		somatoriaIdade = somatoriaIdade + idade;	
	}
	
	mediaIdadeTurma = somatoriaIdade/somatoriaAlunos;
	
	printf ("Quantidade de alunos na turma: %i\n", somatoriaAlunos);
	printf ("Media de idade da turma: %i\n", mediaIdadeTurma);
}
