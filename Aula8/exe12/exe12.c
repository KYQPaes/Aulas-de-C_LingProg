#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bsort (char num[][8], int n){
	int v[n];
	for(int i=0;i<n;i++){
		v[i]=atoi(num[i]);
	}

	for(int i=1; i<=n-1; i++)
		for(int i=1; i<=n-1; i++)
			for(int j=0; j<n-1; j++){
				if(v[j]>v[j+1]){
					int x = v[j];
					v[j] = v[j+1];
					v[j+1] = x;
				}
			}
	for(int i=0;i<n;i++){
		printf("%d\n",v[i]);
	}
}


int main(void){
	char v[][8] = {"12893","839210","321","32434","1234567"};
	bsort(v,5);
}
