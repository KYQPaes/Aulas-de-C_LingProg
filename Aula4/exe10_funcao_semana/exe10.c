#include <stdio.h>


void dds(int n){
	
	switch(n){
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda-Feira\n");
			break;

		case 3:
			printf("Terca-Feira\n");
			break;
		case 4:
			printf("Quarta-Feira\n");
			break;
		case 5:
			printf("Quinta-Feira\n");
			break;
		case 6:
			printf("Sexta-Feira\n");
			break;
		case 7:
			printf("Sabado\n");
			break;
		
		default:
			abort();
			break;
	}
}

int main(void){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	dds(n);
	return 0;
}
