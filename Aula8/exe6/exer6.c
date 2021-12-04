#include <stdio.h>
#include <ctype.h>
void upr(char v[]){
	int cont=0;
	while (v[cont]!='\0'){
		v[cont]=toupper(v[cont]);
		cont++;
	}
}
int main(void){
	char v[10] = "Teste";
	upr(v);
	puts(v);
	return 0;
}
