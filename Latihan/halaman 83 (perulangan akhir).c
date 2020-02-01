#include <stdio.h>
	int main(){
		int x,i=1,hasil;
		printf("Masukkan Bilangan :");
		scanf("%d", &x);
		printf("Tabel Perkalian %d adalah :\n", x);
		do{
			hasil = x*i;
			printf("%d * %d = %d\n", x,i,hasil);
			i++;
		}
		while(i<=10);
		return 0;
	}
