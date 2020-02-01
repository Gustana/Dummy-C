#include <stdio.h>
	int main(){
		int alas, tinggi, luas;
		
		printf("Masukkan alas :");
		scanf("%d", &alas);
		
		printf("Masukkan tinggi :");
		scanf("%d", &tinggi);
		luas=alas*tinggi/2;
		printf("Luas segitiga adalah : %d",luas);
		return 0;
	}
