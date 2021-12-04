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

	void bsort (int v[], int n){
	for(int i=1; i<=n-1; i++)
		for(int j=0; j<n-1; 	j++)
			if(v[j]>v[j+1])
				troca(v,j,j+1);
}

int main (void){
	int v[10]={65,24,76,12,76,32,75,84,5,12};
	bsort(v,10);
	exibir(v,10);
	return 0;
}
