#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
	int col=40, lin=12, cont=00, comando=219;
	while(1){
		_gotoxy(col,lin);
		_putch(comando);
		switch(toupper(_getch())){
			case 'N': if(lin>1) lin--;break;
			case 'S': if(lin<24) lin++;break;
			case 'L': if(col<80) col++;break;
			case 'O': if(col>1) col--;break;
			case 'R': 
				if(comando==219){
					comando=255;	
				}else{
					comando=219;
				}
				 break;
			case 'C': _textcolor(cont); break;
			case 'F': exit(1);
		}
		cont++;
	}
	return 0;
}
