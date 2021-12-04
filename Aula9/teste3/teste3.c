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
		printf("Admissao: %d/%d/%d \n\n\n\n\n",f[cont].admissao.dia,f[cont].admissao.mes,f[cont].admissao.ano); 
		cont++;
	}
}

int main(void){
	func f[]={{23,"Kayque",2190.90,{20,06,2020}},
			{43,"Leo",1289.90,{06,07,2010}},
			{12,"Nucci",289.90,{12,12,2001}}};
	exibetab(f, 3);
	return 0;
}
