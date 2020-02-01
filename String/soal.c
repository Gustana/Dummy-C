#include <stdio.h>
#include <string.h>

	int main(){
		char kata[25], copy[25], hasil;
		int i,n=1;
		printf("Masukkan Data :");
		gets(kata);
		
		strlwr(kata);
		strcpy(copy,kata);
		hasil = strcmp(kata, copy);
		
		for(i=0;i<n;i++){
			if(hasil==0){
				printf("Polindrom");
			}else{
				printf("Bukan Polindrom");
			}
		}
		
		return 0;
	}
