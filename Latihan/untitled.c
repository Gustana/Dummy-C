#include <stdio.h>
	int fungsi();
	int main(){
		fungsi();
	}
		int fungsi(){
			int angka,variable,hasil, jawaban;
			printf("Masukkan angka dari 1-10 !\n");
			printf("Masukkan angka :");
			scanf("%d", &angka);
				if(angka>0 && angka<=10){
					printf("Tabel perkalian %d adalah :\n",angka);
					for(variable=1;variable<=10;variable++){
						hasil=variable*angka;
						printf("%d * %d = %d\n", angka, variable, hasil);
					}
					jawaban :
					printf("Apakah anda ingin mengulang lagi ? (1=iya/2=tidak)\nPilihan :");
					scanf("%d", &jawaban);
					if(jawaban==1 || jawaban==2){
						if(jawaban==1){
							return fungsi();
						}else{
							printf("Besok-besok belajar biar apal perkalian %d", angka);
						}
					}else{
						printf("Gak tau pilihan ya ?\nApakah anda pernah sekolah ? \n");
						goto jawaban;
					}
				}else{
					printf("Input Salah\nMasukkan angka lagi !\n");
					return fungsi();
				}
				return 0;
			}
