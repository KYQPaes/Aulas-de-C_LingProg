#include <stdio.h>

int main(void){
	int c;
	printf("Caracter decimal?");
	scanf("%d", &c);
	printf("Caracter correspondente = %c\n",c);
	printf("ASCII em octal = %o\n",c);
	printf("ASCII em hexadecimal = %X\n",c);
	return 0;
}
