#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15

void gera(int m[MAX][MAX]){
	for(int i=0; i<MAX; i++){
		for(int j=0; j<8; j++){
			m[i][j]= rand()%1;
		}
	}
}

void exibe(int m[MAX][MAX]){
	for(int i=0; i<MAX; i++){
		for(int j=0; j<8; j++)
			printf("%s",m[i][j] ? "\xDB\xDB" : "  ");
		puts("");
	}
}

int main(void) {
   int m[MAX][MAX];
	srand((unsigned)time(NULL)); 
	gera(m);
   exibe(m);
   return 0;
}
