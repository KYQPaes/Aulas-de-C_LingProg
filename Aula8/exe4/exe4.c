#include <stdio.h>
#include <string.h>

char len(char v[]){
	int i=0;
	while (v[i]!='\0') i++;
	return i;
}

char rev(char v[]){
	char m;
	int i=0;
	int cont=0;
	i=len(v)-1;
	while(i>cont){
		m=v[i];
		v[i]=v[cont];
		v[cont]=m;
		i--;
		cont++;
	}
}

int main (void){
	char v[10]="ROMA";
	rev(v);
	puts (v);
	return 0;
}
