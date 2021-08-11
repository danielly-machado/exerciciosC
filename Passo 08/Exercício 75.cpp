#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int fib [15];
	int fib1=1;
	int fib2=1;
	int fib3;
	int soma;
	
	printf ("%i\n", fib1);
	printf ("%i\n", fib2);
	
	for (int i=2;i<=15;i++){
		fib3=fib1+fib2;
		printf ("vetor[%i]= %i\n", i, fib3);
		soma = fib1 + fib2;                    
        fib1 = fib2;
		fib2 = soma;  
	}
}
