#include <stdio.h>

int main(void){
	float cel, fah;
	printf("Digite a temperatura em Celcius: ");
	scanf("%f", &cel,"\n");
	fah = ((cel*9)/5)+32;
	printf("Fahrenheit: %.1f\n", fah);
	return 0;
}
