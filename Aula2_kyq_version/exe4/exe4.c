#include <stdio.h>
#include <math.h>

int main (void) {
	float p1, p2, m;
	printf("Notas?");
	scanf("%f %f",&p1,&p2);
	m=(p1+p2)/2;
	if(m>=6) puts("aprovado"); else puts("reprovado");
	return 0;
}
