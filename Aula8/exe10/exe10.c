int ocorrencias(char letra, char v[]){
	int i=0;
	int cont=0;

	while (v[i]!='\0'){
		if (letra ==  v[i])
			cont++;
		i++;
	}
	return cont;
}
int main (void){
	char v[]="banana";
	printf("Ocorrencias: %d\n",ocorrencias('a',v));
	return 0;
}
