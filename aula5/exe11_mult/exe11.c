#include <stdio.h>

float quo(float a, float b, float cont){
 	if(b==0){
		return cont;
	}else{
		return quo(a,b-1,cont+a);
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
