#include <stdio.h>

int main(void){
	float x, y;
	char o;
	printf("Numero1? Expressao? Numero2?");
	scanf("%f %c %f", &x, &o, &y);
	switch( o ){
		case '+': printf("VALOR = %.2f\n",x+y); break;
		case '-': printf("VALOR = %.2f\n",x-y); break;
		case '*': printf("VALOR = %.2f\n",x*y); break;
		case '/':
				 if(y!=0) printf("VALOR = %.2f\n",x/y);
				 else puts("numero2 = 0 invalido");
				 break;
		default : printf("Operador Invalido: %c\n",0);
	}
	return 0;
}
