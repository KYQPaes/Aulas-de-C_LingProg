#include <stdio.h>
float valorab (float r, float x){
	if(((r * r)-x)<0.001){
		return r;
	}else{
		r=((r*r)+x)/(2*r);
		valorab(r,x);
	}
}
float raiz(float x){
	float r;
	r=x/2;
	return(valorab(r,x));

}

int main(void){
	float x;
	printf("Digite o x");
	scanf("%f",&x);
	printf("%f",raiz(x));
	return 0;
}
