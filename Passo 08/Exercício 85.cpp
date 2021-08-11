#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nomeColaborador [5] [40];
	int sexo [5];
	float salario [5];
	
	for (int i = 0; i < 5; i++){
		printf ("Digite o nome do colaborador: ");
		scanf ("%s", &nomeColaborador[i]);
		printf ("Informe o sexo do colaborador. Para feminino digite 1 e masculino digite 2: ");
		scanf ("%i", &sexo[i]);
		printf ("Informe o valor do salário: R$ ");
		scanf ("%f", &salario[i]);
	}
	
	for (int i = 0; i < 5; i++){
		
		if (sexo[i] == 1 && salario[i] > 5000) {
			printf ("\nNome: %s --> salario: %1.f", nomeColaborador[i], salario[i]);
		}
}

return 0;

}
