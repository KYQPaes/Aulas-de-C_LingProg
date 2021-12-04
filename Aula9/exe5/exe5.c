#include <stdio.h>

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

float total_salarios (func f[], int n){
	float sal=0;
	for(int i=0; i<=n-1; i++)
		sal=sal+f[i].salario;
	return sal;
}

void ordenatab (func f[], int n){
	for(int i=1; i<=n-1; i++)
		for(int j=0;j<n-1; j++)
			if(f[j].nome[0]>f[j+1].nome[0]){
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
	printf("Total salario: %.2f\n\n",total_salarios(f,5));
	exibetab(f, 5);
	return 0;
}
