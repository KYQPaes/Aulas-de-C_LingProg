#include <stdio.h>

int main(void){
	int s,n,r,fretz=0,backup;
	printf("Numero do cartao?");
	scanf("%d",&n);
	backup=n;
	for( int cont = 6; cont>0; cont--){
		s=n%10;
		n=n/10;
		fretz=s+fretz;
		if(n==0) break;
	}
	r=fretz%10;
	printf("%06d-%d",backup,r);
	return 0;
}
