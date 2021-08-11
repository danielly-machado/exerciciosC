#include <stdio.h>
#include <stdlib.h>

float nota1Aluno();
void situacaoAluno(float media);
float mediaAluno(float a, float b);


int main(){
	
	float ab = nota1Aluno();
	float cd = nota1Aluno();
	int m = mediaAluno(ab, cd);
	situacaoAluno (m);
	
}

void situacaoAluno(float media){
	
	if (media >= 7){
		printf ("\nAPROVADO");
	} else if ((media < 7) && (media >= 5.5) ){
		printf ("\nRECUPERACAO");
	} else {
		printf ("\nREPROVADO");	
	}		
}

float mediaAluno(float a, float b){
	
	float soma;
	float media; 
	
	soma = a + b;
	media = soma/2;
	
	printf ("A media do aluno e: %0.2f", media);
	
	return media;	
}

float nota1Aluno(){
	
	float x=0;
	printf ("Digite a primeira nota: ");
	scanf ("%f", &x);
	return x;
}

