#include <stdio.h>
void cat(char v[], char w[]){
	int i=0;
	int x;
	while (v[i]!='\0') i++;
	x = i;
	while(w[i-x]!='\0'){
		v[i]=w[i-x];
		i++;
	}
}
int main(void){
	char v[10] = "aba";
	char w[10] = "cate";
	cat(v,w);
	puts(v);
	return 0;
}
