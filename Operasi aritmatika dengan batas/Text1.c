#include <stdio.h>
	int fungsi_angka1(), fungsi_angka2(), fungsi_angka3(), fungsi_angka4(), fungsi_angka5();
	int main(){
        int bil1, bil2, bil3, bil4, bil5;
        long int jumlah1, jumlah2;
		printf("Masukkan Bilangan antara -100 dan 100 ! \n");
		bil1 = fungsi_angka1();
		bil2 = fungsi_angka2();
		bil3 = fungsi_angka3();
		bil4 = fungsi_angka4();
		bil5 = fungsi_angka5();
		jumlah1 = bil1+bil2+bil3+bil4+bil5;
		jumlah2 = bil1*bil2*bil3*bil4*bil5;
		printf("Jumlah kelima bilangan tersebut adalah %ld\n",jumlah1);
		printf("Hasil kali kelima bilangan tersebut adalah %ld\n",jumlah2);
        return 0;
	}
	
/* Fungsi yang akan dipanggil*/
int fungsi_angka1(){
	/*pedeklarasian bil1*/
		int bil1;
        printf("Masukkan Bilangan Pertama:\n");
        scanf("%d", &bil1);
        if(bil1 >= -100 && bil1 <= 100){
        return bil1;
        }
        else{
        printf("Bilangan yang anda masukkan salah\nUlangi Lagi ! \n");
		/*5 fungsi*/
        return fungsi_angka1();
    	}
	}

int fungsi_angka2(){
		int bil2;
		printf("Masukkan Bilangan Kedua : \n");
		scanf("%d", &bil2);
		if(bil2 >= -100 && bil2 <= 100){
        return bil2;
        }
        else{
		printf("Bilangan yang anda masukkan salah \nUlangi Lagi ! \n");
		return fungsi_angka2();
		}
	}

int fungsi_angka3(){
		int bil3;
		printf("Masukkan Bilangan Ketiga : \n");
		scanf("%d", &bil3);
		if(bil3 >= -100 && bil3 <= 100){
		return bil3;
		}
		printf("Bilangan yang anda masukkan salah\nUlangi Lagi ! \n");
		return fungsi_angka3();
	}

int fungsi_angka4(){
		int bil4;
		printf("Masukkan Bilangan Keempat :\n");
		scanf("%d", &bil4);
		if(bil4 >= -100 && bil4 <= 100){
		return bil4;
		}
		else{
		printf("Bilangan yang anda masukkan salah\nUlangi lagi ! \n");
		return fungsi_angka4();
		}
	}

int fungsi_angka5(){
		int bil5;
		printf("Masukkan Bilangan Kelima : \n");
		scanf("%d", &bil5);
		if(bil5 >= -100 && bil5<= 100){
		return bil5;
		}
		else{
		printf("Bilagan yang anda masukkan salah\nUlangi Lagi ! \n");
		return fungsi_angka5();
		}
	}

