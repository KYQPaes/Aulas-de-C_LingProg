void exibe(char v[][8], int n){
	for(int i=0; i<5;i++)
		puts(v[i]);
}

int main (void){
	char v[][8]={"Ana","Beatriz","Jose","Vanessa","Adriana"};
	exibe(v,4);
	return 0;
}
