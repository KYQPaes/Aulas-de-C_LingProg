#include <stdio.h>


void binario(int n)  {
	int v[10], cont;
	for(cont=9;cont>=0 ; cont-- ){
		if(n%2==0){
			v[cont]=0;
			
		}else{
			v[cont]=1;
		}

		n=n/2;
	}
	for(cont=0; cont<=9; cont++){
		printf("%d",v[cont]);
	}
}
int main(void) {
	int n;
	printf("Numero: ");
	scanf("%d",&n);
	binario(n);
	puts("");
	return 0;
}
