#include <stdio.h>
int bissexto(int a){
	int bisexual;
	if(a%4==0){
		bisexual=1;
	}else{ bisexual=0;}

	return bisexual;
}

int ultimo_dia(int m, int a){
	if(bissexto(a)==1){
		if(m==2){
			return 29;
		}else{
			return 28;
		}

	}
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: return 31; break;
		case 4:
		case 6:
		case 9:
		case 11: return 30; break;
	}
}

int valida(int d, int m, int a){
	int ult;
	if(m<=0 || m>=13){
		puts("mes invalido");
		return 0;
	}
	ult=ultimo_dia(m, a);
	if(d<1 || d>ult){
		puts("dia invalido");
		return 0;
	}
	return 1;
}
void exibe_ds(int d, int m, int a){
	int ult;
	ult = ultimo_dia(m, a);
	if((d+1)>ult){
		d=01;
		if((m+1)==13){
			m=1;
			a=a+1;
		}else{
			m=m+1;
		}
	}else{
		d=d+1;
	}
	printf("%d/%d/%d", d, m, a);
}


int main (void){
	int d, m, a;
	printf("digite o dia, mes e ano");
	scanf("%d %d %d", &d, &m, &a);
	exibe_ds(d, m, a);
}
