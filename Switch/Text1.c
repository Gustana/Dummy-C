#include <stdio.h>
	int main(){
	/*Pilihan Menu*/
	int Pilihan_Menu;
		printf("Pilihan_Menu :\n");
		printf("1. Ayam Goreng\n");
		printf("2. Nasi Lemak\n");
		printf("3. Ikan Bakar\n");
		printf("4. Plecing Kangkung\n");
		printf("5. Babi Kecap\n");
	/*Input User Untuk Pilihan Menu*/
		printf("Masukkan nomor menu yang anda pilih :");	
		scanf("%d", &Pilihan_Menu);
		switch(Pilihan_Menu){
			case 1:
			printf("Menu yang anda pilih adalah ayam goreng");
		/*Break merupakan pemisah antara case satu dengan
		case yang lainnya*/
			break;
			
			case 2:
			printf("Menu yang anda pilih adalah nasi lemak");
			break;
			
			case 3:
			printf("Menu yang anda pilih adalah ikan bakar");
			break;
			
			case 4:
			printf("Menu yang anda pilih adalah plecing kangkung");
			break;
			
			case 5:
			printf("Menu yang anda pilih adalah babi kecap");
			break;
			
			default :
			printf("Menu yang anda pilih tidak tersedia");
			break;
		return 0;  
		}	 
	}
