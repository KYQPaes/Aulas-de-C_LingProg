#include <stdio.h>
#include <conio.h>

int main(void){
	char c, cont=1;

	while(!_kbhit())
	{
		puts("TESTE");
		cont++;
	}
	return 0;
}
