#include <stdlib.h>
#include <conio.h>

void centraliza(char v[], int pos){
	int i = 0;
	while (v[i]!='\0') i++;
	int col = (80 - i)/2;
	_clrscr();
	_gotoxy(col,pos);
	printf("%s\n",v);
}

int main(void){
	char v[] = "Apenas um teste";
	centraliza(v,13);
	return 0;
}
