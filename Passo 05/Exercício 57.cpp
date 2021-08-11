#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float salario;
	int sexo;
	int opcaocontinuar = 1;
	float somatoriasalariohomens;
	float somatoriasalariomulheres;
	
	do {
		printf ("Informe o sexo. Digite [1] para masculino e [2] para feminino: ");
		scanf ("%i", &sexo);
		printf ("Informe o valor do salario: R$ ");
		scanf ("%f", &salario);
		printf ("Deseja inserir novo colaborador? Digite 1 para sim e 2 para nao.");
		scanf ("%i", &opcaocontinuar);
		if (sexo==1) {
				somatoriasalariohomens=somatoriasalariohomens + salario;
			} else if (sexo==2) {
				somatoriasalariomulheres=somatoriasalariomulheres + salario;
			}
	} while (opcaocontinuar==1);
	
	printf ("A somatoria do salario dos homens e: R$ %f\n", somatoriasalariohomens);
	printf ("A somatoria do salario das mulheres e: R$ %f\n", somatoriasalariomulheres);
		
	return 0;
}
