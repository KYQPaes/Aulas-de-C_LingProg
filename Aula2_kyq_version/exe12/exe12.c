#include <stdio.h>

int main(void){
	int dia, mes, ano, result, passo1, passo2, passo3;
	printf("dia? mes? ano?");
	scanf("%d %d %d", &dia, &mes, &ano);
	result = (dia * 100) + mes;
	passo1 = result + ano;
	passo2 = (passo1/100) + (passo1%100);
	passo3 = passo2%5;

	switch(passo3){
		case 0: puts("timido"); break;
		case 1: puts("sonhador"); break;
		case 2: puts("PAQUERADOR"); break;
		case 3: puts("atraente"); break;
		case 4: puts("irresistivel"); break;
	}
	
	return 0;
}
