#include <stdio.h>
#include <math.h>

int main(void){
	float n;

	do{
		printf("Digite um numero: ");
		scanf("%f", &n);

	}
	while(n<0);

	printf("%.1f\n", sqrt(n));

	return 0;
}
