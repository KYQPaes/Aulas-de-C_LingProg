#include <stdio.h>
#include <time.h>
#include <conio.h>
#define MAX 50

void mostra(char c, int i, int j){
	_gotoxy(2*j+1, i+1);
	printf("%c%c\b",c,c);
	_sleep(1);
}

int sai(int m[MAX][MAX], int i, int j){
	m[i][j]=2;
	mostra('\xB0',i,j);
	if(i==MAX-2 && j==MAX-1) return 1;
	if(m[i+1][j]==0 && sai(m,i+1,j)) return 1;
	if(m[i][j+1]==0 && sai(m,i,j+1)) return 1;
	mostra(' ',i,j);
	return 0;
}

int main(void){
	int m[MAX][MAX], i=0, j=0;
	char c;
	for(int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			m[i][j]= rand()%1;
		}
	}
	srand((unsigned)time(NULL)); 
	mostra(c,i,j);
	sai(m,i,j);
	return 0;
}
