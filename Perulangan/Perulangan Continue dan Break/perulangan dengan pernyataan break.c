#include <stdio.h>
#include <conio.h>
	int main(){
		char huruf='A';
		printf("Masukkan huruf apapun\nTekan q untuk berhenti\n");
		printf("Masukkan huruf :");
		for(;;){
			huruf=getch();
			printf("\nKamu menekan huruf:%c",huruf);
			if(huruf=='Q'||huruf=='q'){
				printf("The End");
				break;
			}
		}
		
		return 0;
	}
