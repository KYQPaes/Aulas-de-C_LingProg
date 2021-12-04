#include <stdio.h>

struct funcionario{
	int codigo;
	char nome[21];
	float salario;
};

typedef struct aluno{
	int cod;
	char nome[20];
	float nota;	
}alu;

int main(void){
	struct funcionario f;
	printf("Codigo:.......:  "); scanf("%d*c",&f.codigo);
	printf("Nome:.........:  "); scanf("%s",&f.nome);
	printf("Salario:......:  "); scanf("%f",&f.salario);
	printf("%d %s %f\n", f.codigo, f.nome, f.salario);
	
	
	alu a={12,"Mano Brown", 7.28};
	printf("%d\n%s\n%f",a.cod,a.nome,a.nota);
	return 0;
}
