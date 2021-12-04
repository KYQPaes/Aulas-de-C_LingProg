#include <stdio.h>


typedef struct livro{
	char titulo[21];
	char autor[21];
	int ano;
}Livro;

void exibetab(Livro f[], int quant){
	int cont=0;
	while(cont<=quant-1){
		printf("|%s|",f[cont].titulo);
		printf("|%s|",f[cont].autor); 
		printf("|%d|\n",f[cont].ano); 
		cont++;
	}
}

int main(void){
	Livro f[]={{"Frankestein","Mary Shelley",1818},
			{"Dracula","Bram Stoker",1897,},
			{"Carmilla","Sheridan Le Fanu",1872},
			{"Varney","Thomas Prest",1847}};
	exibetab(f, 4);
	return 0;
}
