#include <stdio.h>
	int main(){
		char name[30], alamat[40], nomor[13];
		
		printf("Masukkan Nama :");
		fgets(name,30,stdin);
		
		printf("Masukkan Alamat :");
		fgets(alamat,40,stdin);
		
		printf("Masukkan nomor telepon :");
		fgets(nomor,13,stdin);
		
		printf("Jadi nama anda adalah %s", name);
		printf("Alamat anda adalah %s", alamat);
		printf("Nomor telepon anda adalah %s", nomor);
		return 0;
		}
