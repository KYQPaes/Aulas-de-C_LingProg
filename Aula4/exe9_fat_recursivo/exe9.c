#include <stdio.h>
#include <math.h>


int fatorial(int n);


int main(void)
{
    int num=0;
    
	printf("Digite um numero: ");
	scanf("%d",&num);
    printf("%d\n",fatorial(num) );

    return 0;
}



int fatorial(int n)
{
    if(n==0)
    {
            return(1);
    }else{
          return (n*fatorial(n-1));
          }         
}
