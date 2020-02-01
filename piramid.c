#include <stdio.h>
	int main(){
		int tinggi,space,i,k=0;
		printf ("Masukkan tinggi :");
		scanf ("%d", &tinggi);
		
		for (i=1;i<=tinggi-i;i++,k=0){
			for (space=1; space<=tinggi-i;space++){
				printf (" ");
				}
			while(k != 2*i-1){
				printf("*");
				k++;
				}
				printf ("\n");
			}
		return 0;
		}
