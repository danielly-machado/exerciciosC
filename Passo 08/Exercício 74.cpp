#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int valores [10];
	
	for (int i=0;i<=9;i++){
		if(i%2 == 0) {
			valores[i] = 5;
		} else {
			valores[i] = 3;
		}
	}
	
	for (int i=0;i<=9;i++){
		printf ("% i", valores [i]);
	}
}
