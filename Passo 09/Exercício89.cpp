#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int retornaOpcaoSelecionada();
void mostraComBorda(int opcao);

int main() {
	int opcao = retornaOpcaoSelecionada();
	mostraComBorda(opcao);
	return 0;
}

void mostraComBorda(int opcao) {
	switch (opcao) {
		case 1: 
		printf ("\n+-------=======------+\n");
		printf ("\n OPCAO 1 \n");
		printf ("\n OPCAO 1 \n");
		printf ("\n OPCAO 1 \n");
		printf ("\n+-------=======------+\n");
		//break;	
		case 2: 
		printf ("\n~~~~~~~~:::::::~~~~~~~\n");
		printf ("\n OPCAO 2 \n");
		printf ("\n OPCAO 2 \n");
		printf ("\n OPCAO 2 \n");
		printf ("\n~~~~~~~~:::::::~~~~~~~\n");
		//break;
		case 3: 
		printf ("\n<<<<<<<<------->>>>>>>\n");
		printf ("\n OPCAO 3 \n");
		printf ("\n OPCAO 3 \n");
		printf ("\n OPCAO 3 \n");
		printf ("\n<<<<<<<<------->>>>>>>\n");
		//break;
		default:
		printf("\nNoooooo\n");
		break;		
	}
}

int retornaOpcaoSelecionada() {
	int opcao = 0;
	printf ("\nEscolha uma das tres opcoes de borda:\n");
	printf ("BORDA 1: +-------=======------+\n");
	printf ("BORDA 2: ~~~~~~~~:::::::~~~~~~~\n");
	printf ("BORDA 3: <<<<<<<<------->>>>>>>\n");
	scanf("%i", &opcao);
	return opcao;
}

