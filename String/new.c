#include <stdio.h>
#include <string.h>

	int main(){
		int i,banding,n;
		char nama[2][21], copy[2][21];

		printf("Masukkan nama depan :");
		gets(nama[0]);
		printf("Masukkan nama belakang :");
		gets(nama[1]);

		//penggabungan string
		puts("\n#langkah 4");
		strcat(nama[0], nama[1]);
		printf("String gabungan :%s\n", nama[0]);

		//menghitung panjang gabungan string
		puts("\n#langkah 5");
		n=strlen(nama[0]);
		printf("Panjang string gabungan adalah : %d\n", n);

		//penyalinan string
		puts("\n#langkah 6");
		strcpy(*copy, nama[0]);
		printf("Isi salinan adalah :%s\n", copy);

		//pembalikan string
		puts("\n#langkah 7");
		strrev(nama[0]);
		printf("Pembalikan string :%s\n", nama[0]);

		//pembandingan string
		puts("\n#langkah 8");
		banding=strcmp(nama[0],nama[1]);
			/*jika nama 1 dan nama 2 sama, maka fungsi strcmp menghasilkan nilai integer=0
		jika nama 1 dan nama 2 berbeda, maka fungsi strcmp menghasilkan nilai integer !=0,
		bisa negatif maupun positif*/
		if(banding==0){
			puts("Nama depan sama dengan nama belakang");
		}else{
			puts("Nama depan tidak sama dengan nama belakang");
		}
		return 0;
	}
