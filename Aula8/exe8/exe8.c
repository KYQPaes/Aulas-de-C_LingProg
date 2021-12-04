int pos(char posic, char v[]){
	int i=0;
	while(v[i]!=posic){
		if(v[i]=='\0') return (-1);
		i++;
	}
	return i;
}

int main(void){
	char v[10] = "35171";
	printf("Posicao do 1: %d\n",pos('1',v));
	printf("Posicao do 9: %d\n",pos('9',v)); 
	return 0;
}
