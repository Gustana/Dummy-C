#include <stdio.h>
	int fungsi_angka();
	int main(){
		int  angka,hasil,variabel;
		printf("Masukkan angka dari 1-10 ");
		angka = fungsi_angka();

		for(variabel=1;variabel<=10;variabel++){
			hasil=angka*variabel;
			printf("%d * %d =%d\n",angka,variabel,hasil);
	
		}
	}
		int fungsi_angka(){
			int angka;
			printf("Masukkan Bilangan :");
			scanf("%d", &angka);
			if(angka>0  && angka<=10){
				printf("Tabel Perkalian %d adalah :\n",angka);
					return angka;
				}
			else{
				printf("input salah\n Masukkan angka lagi !");
				return fungsi_angka();
			}
			return 0;
		}
