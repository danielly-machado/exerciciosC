#include <stdio.h>

int main () {
	
	float n1, n2, media;
	
	printf ("Media do Aluno");
	printf ("Digite a primeira nota: ");
	scanf ("%f", &n1);
	printf ("Digite a segunda nota: ");
	scanf ("%f", &n2);
	media = (n1 + n2) /2; 
	if (media >= 7) {
		printf ("APROVADO");
	} else if ((media >= 5) && (media < 6.9)) {
		printf ("EM RECUPERACAO");
	} else {
		printf ("REPROVADO");
	}
	return 0;
}
