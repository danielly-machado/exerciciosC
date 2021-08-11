#include <stdio.h>

int main (){
	
	float meter;
	float km;
	float hc;
	float dam;
	float dc;
	float cm;
	float mm;
	 
	printf ("Digite uma distancia em metros: ");
	scanf ("%f", &meter);
	km = meter/1000;
	printf ("\n A distancia de %f metros em km e: %0.5f", meter, km);
	hc = meter*100;
	printf ("\n A distancia de %f metros em hm e: %0.4f", meter, hc);
	dam = meter*10;
	printf ("\n A distancia de %f metros em dam e: %0.3f", meter, dam);
	dc = meter/10;
	printf ("\n A distancia de %f metros em dm e: %0.1f", meter, dc);
	cm = meter/100;
	printf ("\n A distancia de %f metros em cm e: %0.1f", meter, cm);
	mm = meter*1000;
	printf ("\n A distancia de %f metros em mm e: %0.1f", meter, mm);
	return 0;
}
