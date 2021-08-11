#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
		
	int i;
	int fib1=1;
	int fib2=1;
	int fib3;
	int soma;

	printf ("%i\n",fib1);
	printf ("%i\n",fib2);
	
	
	for (i=3; i<=10; i++){
		fib3=fib1+fib2;
		printf ("%i\n", fib3);
		soma = fib1 + fib2;                    
        fib1 = fib2;                           
        fib2 = soma;  
}

return 0; 

}
