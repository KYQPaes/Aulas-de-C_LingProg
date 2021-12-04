#include <stdio.h>
int val(char v[]){
	return atoi(v);
}

int main(void){
	char v[] = "351";
	printf("Valor: %d\n",val(v)*2);
	return 0;
}
