#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome [40];
	float n1, n2, media;
	
	printf ("Digite o nome do aluno: ");
	gets (nome);
	printf ("Digite a primeira nota: ");
	scanf ("%f", &n1);
	printf ("Digite a segunda nota: ");
	scanf ("%f", &n2);
	media = (n1 + n2)/2;
	if (media >=7) {
		printf ("O aluno %s teve media %f, tendo um bom aproveitamento", nome, media);	
	} else {
		printf ("O aluno %s teve media %f, não tendo um bom aproveitamento", nome, media);
	}
	system ("pause");
	return 0;
} 
