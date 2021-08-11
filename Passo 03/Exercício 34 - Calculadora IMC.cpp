#include <stdio.h>

int main() {
	
	float peso, altura, imc;
	
	printf ("CALCULADORA IMC");
	printf ("\nDigite a sua altura: ");
	scanf ("%f", &altura);
	printf ("\nDigite o seu peso: ");
	scanf ("%f", &peso);
	imc = peso / (altura * altura);
	if (imc < 18.5) {
		printf ("Abaixo do peso");
	} else if (imc > 18.5 && imc < 25){
		printf ("Peso ideal");
	} else if (imc > 25 && imc < 30){
		printf ("Sobrepeso");
	} else if (imc > 30 && imc < 40) {
		printf ("Obesidade");
	} else {
		printf ("Obesidade morbida");
	}
return 0;
}
