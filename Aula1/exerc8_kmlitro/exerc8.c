#include <stdio.h>

int main(void){
	float km, litros, kml;
	printf("Quantos km rodou? ");
	scanf("%f", &km);
	printf("Quantos litros gastou? ");
	scanf("%f", &litros);
	kml = km/litros;
	printf("Km/litro = %.3f\n",kml);
	return 0;
}
