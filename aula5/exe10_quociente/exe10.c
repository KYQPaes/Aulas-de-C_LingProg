#include <stdio.h>

float quo(float a, float b, float cont){
 	if(a<b){
		return cont;
	}else{
		return quo(a-b,b,cont+1);
	}
}

int main(void){
	float a,b;
	printf("Digite o a: ");
	scanf("%f", &a);
	printf("Digite o b: ");
	scanf("%f", &b);
	printf("%0.f\n",quo(a,b,0));
	return 0;
}
