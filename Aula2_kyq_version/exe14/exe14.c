#include <stdio.h>

int main(void){
	int placa;
	puts("Numero da placa?");
	scanf("%d", &placa);
	placa = placa%10;
	if(placa == 1 || placa == 2)
		 puts("Segunda");
	else if(placa == 3 || placa == 4)
		puts("terca");
	else if(placa == 5 || placa == 6)
		puts("quarta");
	else if(placa == 7 || placa == 8)
		puts("quinta");
	else
		puts("sexta");
	
	return 0;
}
