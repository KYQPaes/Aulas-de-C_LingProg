#include <stdio.h>
#include <math.h>

int main(void){
	float raio;
	printf("qual o raio?");
	scanf("%f", &raio);
	float perim = 2*3.14*raio;
	printf("perimetro = %f\n",perim);
	return 0;
}
