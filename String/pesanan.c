#include <stdio.h>
#include <conio.h>
	int piih();
	int main(){
		
		printf("Daftar Menu :");
		printf("\n1. Ayam Goreng =>30000");
		printf("\n2. Nasi Goreng =>25000");
		printf("\n3. Ikan Bakar =>31000");
		printf("\n4. Sate Lilit =>15000");
		printf("\n5. Lawar Kuwir =>35000");
		printf("\n6. Jukut Ares =>20000");
		printf("\n7. Babi Kecap =>26000");
		printf("\nKetik \"8\" untuk menampilkan tagihan");
		
		return 0;
		}

int pilih(){
	int total,p;
	
	printf("\nSilahkan tulis pesanan dengan angka :\n");
	scanf("%d", &p);
		do{
			p = getch();
			switch(p){
				case 1:
				printf("\nAnda memesan menu dengan angka %d dengan harga 30000", p);
				total +=30000;
				break;
				
				case 2:
				printf("\nAnda memesan menu dengan angka %d dengan harga 25000", p);
				total+=25000;
				break;
				
				case 3:
				printf("\nAnda memesan menu dengan angka %d dengan harga 31000", p);
				total+=31000;
				break;
				
				case 4:
				printf("\nAnda memesan menu dengan angka %d dengan harga 15000", p);
				total+=15000;
				break;
				
				case 5:
				printf("\nAnda memesan menu dengan angka %d dengan harga 35000", p);
				total=+35000;
				break;
				
				case 6:
				printf("\nAnda memesan menu dengan angka %d dengan harga 20000", p);
				total=+20000;
				break;
				
				case 7:
				printf("\nAnda memesan menu dengan angka %d dengan harga 26000", p);
				total+=26000;
				break;
				
				case 8:
				printf("\n----------------------------------");
				printf("\nTotal Harga 			= %d", total);
				break;
				
				default:
				printf("\nMenu tidak tersedia om ");
				printf("\nSaya sarankan minum le manrealnya om");
				break;
				
				}
		}while(p!=8);
	return 0;
	}
