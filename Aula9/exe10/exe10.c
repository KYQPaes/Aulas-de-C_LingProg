#include <stdio.h>

typedef struct{
	int origem;
	int destino;
}Via;

int pertence (int x, int r[], int n){
	for(int i=0; i<n; i++)
		if(x==r[i]) return 1;
	return 0;
}

void exibe(int r[], int n){
	for(int j=0; j<n; j++) printf("%d,",r[j]);
	printf("\b. \n");
}

void rotas(int x, int y, Via v[], int n, int prof){
	static int r[100], i=0;
	int m = prof;
	r[i++] = x;
	if (x==y) 
		exibe(r,i);
	else if(i!=prof)
		for(int j=0; j<n; j++)
			if(v[j].origem==x && !pertence(v[j].destino,r,i))
				rotas(v[j].destino,y,v,n,prof);
	i--;
}

int main(void){
	int p1, p2, prof;
	Via v[10]={{1,2},{1,3},
			{2,1},{2,4},
			{3,2},{3,4},{3,5},
			{4,3},{4,5},
			{5,4}};
	printf("Digite o 1 ponto:");
	scanf("%i",&p1);
	printf("Digite o 2 ponto:");
	scanf("%i",&p2);
	printf("Digite profundidade:");
	scanf("%i",&prof);

	rotas(p1,p2,v,10,prof);
	return 0;
}


/*#include <stdio.h>

typedef struct Data{
	int dia;
	int mes;
	int ano;
}data;

typedef struct func{
	int codigo;
	char nome[21];
	float salario;
	data admissao;	
}func;

void exibetab(func f[], int quant){
	int cont=0;
	while(cont<=quant-1){
		printf("Codigo: %d \n",f[cont].codigo);
		printf("Nome: %s \n",f[cont].nome); 
		printf("Salario: %0.2f \n",f[cont].salario); 
		printf("Admissao: %02d/%02d/%02d \n\n",f[cont].admissao.dia,f[cont].admissao.mes,f[cont].admissao.ano); 
		cont++;
	}
}

void troca (func f[], int j, int n){
	func x=f[j];
	f[j]=f[n];
	f[n]=x;

}

void ordenatab (func f[], int n){
	for(int i=1; i<=n-1; i++)
		for(int j=0;j<n-1; j++)
			if(f[j].codigo>f[j+1].codigo){
				troca(f,j,j+1);
			}		
}
int main(void){
	func f[]={{561,"Eva Maranhao",9200,{2,7,2012}},
			{295,"Ana Teixeira",6100,{5,9,2015}},
			{473,"Denise Lagoa",8500,{1,6,2013}},
			{102,"Catia Telles",7300,{3,8,2014}},
			{384,"Beatriz Lagoa",5400,{4,9,2016}}};
	ordenatab(f, 5);
	exibetab(f, 5);
	return 0;
}*/

