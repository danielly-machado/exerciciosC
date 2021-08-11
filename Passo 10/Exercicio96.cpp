#include <stdio.h>
#include <stdlib.h>

float nota1Aluno();
float nota2Aluno();
void media(float a, float b);

int main(){
	
	float x = nota1Aluno();
	float y = nota2Aluno();
	media(x, y);

}

void media(float a, float b){
	
	 float mediaAluno;
	 float soma;
	  
	 soma = a + b;
	 
	 mediaAluno = soma/2;
	 
	 printf ("A media do aluno e: %0.2f", mediaAluno);
}

float nota1Aluno(){
	
	float nota1;	
	printf ("Digite a primeira nota do aluno: ");
	scanf("%f", &nota1);
	return nota1;
}

float nota2Aluno(){
	
	float nota2;
	printf ("Digite a segunda nota do aluno: ");
	scanf("%f", &nota2);
	return nota2;
}
	
