#include <stdio.h>

void par(float n){
 	if(n==2){
		puts("Par");
	}else
	if(n==-1){
		puts("Impar");
	}else{
		par(n-2);
	}
}

int main(void){
	float n;
	printf("Digite o numero: ");
	scanf("%f", &n);
	par(n);
	return 0;
}
