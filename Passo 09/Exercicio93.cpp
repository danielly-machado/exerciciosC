#include <stdio.h>
#include <stdlib.h>

int recebeValorInicio();
int recebeValorFinal();
int recebeValorIncremento();
void Contador (int x, int y, int z);

int main() {
	int x = recebeValorInicio();
	int y = recebeValorFinal();
	int z = recebeValorIncremento();
	Contador(x, y, z);
	return 0;
}

void Contador(int a, int b, int c){
	for (int contagem=a; contagem<=b; contagem=contagem+c){
		printf ("%i,", contagem);
	}
}

int recebeValorInicio() {
	int x = 0;
	printf ("Digite um valor inicial para contagem: ");
	scanf ("%i", &x);
	return x;
}

int recebeValorFinal() {
	int y = 0;
	printf ("Digite um valor final para contagem: ");
	scanf ("%i", &y);
	return y;
}

int recebeValorIncremento() {
	int z = 0;
	printf ("Digite um valor de incremento para contagem: ");
	scanf ("%i", &z);
	return z;
}


