#include <stdio.h>
	int main(){
		float sisi_atas, sisi_bawah, tinggi,jumlah_ss,luas;

		printf("Masukkan panjang sisi atas trapesium :");
		scanf("%f", &sisi_atas);
		
		printf("Masukkan panjang sisi bawah trapesium :");
		scanf("%f", &sisi_bawah);
		
		printf("Masukkan panjang tinggi trapesium :");
		scanf("%f", &tinggi);
		jumlah_ss=sisi_atas+sisi_bawah;
		luas=jumlah_ss*tinggi/2;
		printf("Luas trapesium adalah : %.3f",luas);
		return 0;
	}
