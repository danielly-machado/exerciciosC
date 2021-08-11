#include <stdio.h>
#include <stdlib.h>

int numeroTermosFibonacci();
void sequenciaFibonacci(int y);

int main() {
	int x = numeroTermosFibonacci();
	sequenciaFibonacci(x);
	return 0;
}

void sequenciaFibonacci(int y) {
	 
	int fib1=0;
	int fib2=1;
	int fib3;
	int soma;
	
	printf("%i\n", fib1);
	printf("%i\n", fib2);
	
	for (int i=0;i<(y-2);i++){
		fib3=fib1+fib2;
		printf ("%i\n", fib3);
		soma = fib1 + fib2;                    
	    fib1 = fib2;
		fib2 = soma;  
	}

}

int numeroTermosFibonacci(){
	int a = 0;
	printf ("\nQuantos termos da sequencia Fibonacci voce deseja visualizar: ");
	scanf ("%i", &a);
	return a; 
}
