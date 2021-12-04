#include <stdio.h>
void exibir(int v[], int n){
	int cont = 0;
	for(cont; cont<=n-1; cont++)
		printf("%d\n",v[cont]);
}

void troca(int v[], int j, int y){
	int troca;
	troca=v[j];
	v[j]=v[y];
	v[y]=troca;
}

	void empurra (int v[], int n){
		for(int j=0; j<n-1; 	j++)
			if(v[j]>v[j+1])
				troca(v,j,j+1);
}

int main (void){
	int v[5]={48,19,31,52,27};
	empurra(v,5);
	exibir(v,5);
	return 0;
}
