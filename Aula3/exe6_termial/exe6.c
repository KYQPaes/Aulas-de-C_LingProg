#include <stdio.h>

int main(void){
	int ter=1,n;
	printf("Digite o numero: ");
	scanf("%d",&n);

	for( int cont = n; cont>1; cont--){
		ter=ter+cont;
	}
	if(n==0){puts("Terminal: 0");}else{
	printf("Termial: %d\n",ter);}
	return 0;
}
