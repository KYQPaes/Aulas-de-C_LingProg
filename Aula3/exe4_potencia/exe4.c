#include <stdio.h>

int main(void){
	int base, exp, pot=1;
	puts("Digite a base: ");
	scanf("%d", &base);
	puts("Digite o expoente: ");
	scanf("%d", &exp);

	for( int cont = 1; cont<=exp; cont++){
		pot=pot*base;
	}
	printf("Potencia: %d\n",pot);
	return 0;
}
