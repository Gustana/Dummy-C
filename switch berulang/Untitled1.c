#include <stdio.h>
	int main(){
		int y,a;

		printf("Menu Pilihan :\n");
		printf("1. Mie Goreng\n");
		printf("2. Ayam Bakar\n");
		printf("3. Ayam Taliwang\n");
		printf("4. Nasi Goreng\n");
		printf("5. Ikan Bakar\n");
		printf("6. Paket Komplit\n");
		printf("Menu yang anda pilih :\n");
		scanf("%d", &y);

		switch(y){
			case 1:
				printf("Menu yang anda pilih adalah Mie Bakar\n");
				printf("Apakah anda memiliki pilihan lagi ?\n");
				printf("1. Iya\n");
				printf("2. Tidak\n");
				printf("Pilihan Anda :");
				scanf("%d", &a);
				if(a==1){
					printf("d");
				}
				else if(a==2){
					printf("Terimakasih\n Jangan Ngebon ya ...");
				}
				break;

			case 2:
				printf("Menu yang anda pilih adalah Ayam Bakar");
				break;

			case 3:
				printf("Menu yang anda pilih adalah Ayam Taliwang");
				break;

			case 4:
				printf("Menu yang anda pilih adalah Nasi Goreng");
				break;

			case 5:
				printf("Menu yang anda pilih adalah Ikan Bakar");
				break;

			case 6:
				printf("Menu yang anda pilih adalah Paket Komplit\n");
				printf("Anda Sangatlah Rakus");
				break;

			default:
				printf("Menu yang anda pilih tidak tersedia");
				break;
		}
		return 0;
	}
