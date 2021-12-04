#include <stdio.h>

typedef struct Data{
	int dia;
	char mes[10];
	int ano;
}data;

typedef struct func{
	int codigo;
	char nome[21];
	float salario;
	data admissao;	
}func;

int main(void){
	func f;
	printf("Codigo: "); scanf("%d",&f.codigo);
	printf("Nome: "); scanf("%s",&f.nome);
	printf("Salario: "); scanf("%f",&f.salario);
	printf("admissao: "); scanf("%d %s %d",&f.admissao.dia, &f.admissao.mes, &f.admissao.ano);

	printf("Codigo: %d \n",f.codigo);
	printf("Nome: %s \n",f.nome); 
	printf("Salario: %0.2f \n ",f.salario); 
	printf("admissao: %d %s %d \n",f.admissao.dia,f.admissao.mes,f.admissao.ano); 
	return 0;
}
