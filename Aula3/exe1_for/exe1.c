#include <stdio.h>

int main(void){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);

	for( int cont = n; n>=0; n--){
		printf("%d\n",n);
	}
	
	return 0;
}
