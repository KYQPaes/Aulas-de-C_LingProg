#include <stdio.h>
#include <string.h>

int main (void){
	char s[513];
	printf("Senha?");
	scanf("%s", s);
	if(_stricmp(s,"Abracadabra")==0) puts("Senha correta");
	else puts("senha incorreta");
	return 0;
}
