#include <stdio.h>
#include <math.h>

int main (void) {
	int n1, n2;
	printf("Numero1 e 2");
	scanf("%d %d", &n1,&n2);
	if(n1>n2) printf("o maior eh: %d", n1);
	else printf("o maior eh: %d", n2);
	return 0;
}
