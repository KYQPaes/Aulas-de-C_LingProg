#include <stdio.h>
#include <math.h>

int main (void) {
	float a, b, c, xp, xn, delta;
	printf("a!=0? b? c?");
	scanf("%f %f %f", &a,&b,&c);
	if(a == 0){
		printf("a invalido");
		return 0;
	}
	delta = pow(b,2) - 4*a*c;
	xp = ((-1*b)+sqrt(delta))/(2*a);
	xn = ((-1*b)-sqrt(delta))/(2*a);

	printf("positivo: %f negativo %f", xp, xn);
	return 0;
}
