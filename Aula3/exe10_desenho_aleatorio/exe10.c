#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void){
	int x=1, y=1, dx=-1, dy=-1;
	do{
		_gotoxy(x,y);
		printf("o\b");
		_sleep(1);
		printf(".");
		if( x==1 || x==80){_textcolor(rand()%15); dx=-dx;}
		if( y==1 || y==10){_textcolor(rand()%15);dy=-dy;}
		x +=dx;
		y +=dy;

	}while(!_kbhit());
	return 0;
}
