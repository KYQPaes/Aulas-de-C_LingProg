#include <stdio.h>
#include <math.h>

int main(void){
	float peso, altura, imc;
	puts("peso? altura?");
	scanf("%f %f", &peso, &altura);
	imc = peso/pow(altura,2);
	if(imc>18.5 && imc<30)
		puts("normal");
	else if(imc<=18.5)
		puts("magra");
	else
		puts("obesa");
	return 0;
}
