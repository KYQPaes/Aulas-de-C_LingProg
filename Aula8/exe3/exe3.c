#include <stdio.h>
#include <string.h>
int len(char v[]){
	int i = 0;
	while(v[i]!='\0'){
		i++;
	}
	return i;
}

int main (void){
	char v[10]="Teste";
	printf("Comprimento: %d\n", len(v));
	return 0;
}
