#include <stdio.h>

int main(void){
	int placa;
	puts("Numero da placa?");
	scanf("%d", &placa);
	placa = placa%10;
	switch(placa){
		case 1:
		case 2: puts("Segunda"); break;
		case 3:
		case 4: puts("terca"); break;
		case 5:
		case 6: puts("quarta"); break;
		case 7:
		case 8: puts("quinta"); break;
		case 9:
		case 0: puts("sexta"); break;
	}
	return 0;
}
