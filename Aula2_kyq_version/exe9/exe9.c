#include <stdio.h>
#include <math.h>

int main (void) {
	float sal, imposto;
	printf("Salario");
	scanf("%f", &sal);
	if(sal<=1903.98){
		printf("Isento");
	}else if(sal>1903.98 && sal<2826.65){
		imposto=sal*0.075;
	}else if(sal>2826.65 && sal<3751.05){
		imposto=sal*0.15;
	}else if(sal<4664.68 && sal>3751.05){
		imposto=sal*0.225;
	}else{
		imposto=sal*0.275;
	}
	printf("imposto: %f", imposto);
	return 0;
}
