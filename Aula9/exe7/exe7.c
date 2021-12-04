#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct ponto{
	int x;
	int y;
}Ponto;

Ponto le_ponto(int n){
	Ponto xy;
	printf("%d ponto:",n);
	scanf("%d %d",&xy.x, &xy.y);
	return(xy);
}

float diametro(Ponto a, Ponto b){
	float di=sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));

	return(di);
}

int main(void){
	Ponto a = le_ponto(1);
	Ponto b = le_ponto(2);
	printf("Distancia: %.1f\n",diametro(a,b));	
	return 0;
}
