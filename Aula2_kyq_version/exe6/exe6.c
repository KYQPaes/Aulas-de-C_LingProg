#include <stdio.h>
#include <conio.h>

int main (void) {
	int faltas;
	float n1, n2, m;
	printf("Numero1 e 2 e faltas");
	scanf("%f %f %d", &n1,&n2, &faltas);
	m = (n1 + n2)/2;
	if(m>=6 && faltas<=5){
		_textcolor(9);
		puts("aprovado");
	}
	else{
		_textcolor(12);
		puts("reprovado");
	}
	return 0;
}
