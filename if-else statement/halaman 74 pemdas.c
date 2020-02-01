#include <stdio.h>
	int main(){
		int bil1, bil2, bil3; /*pendeklarasian bilangan*/
		printf("Masukkan bilangan bulat pertama :");
		/*scan bilangan untuk input user*/
		scanf("%d", &bil1);
		printf("Masukkan bilangan bulat kedua :");
		scanf("%d", &bil2);
		printf("Masukkan bilangan bulat ketiga :");
		scanf("%d", &bil3);
		
		/**else-if statement**/
		if(bil1>bil2 && bil1>bil3){
			printf("bilangan %d lebih besar dari %d dan %d", bil1, bil2, bil3);
		}
		else if(bil1<bil2 && bil2>bil3){
			printf("bilangan %d lebih besar dari %d dan %d", bil2, bil1, bil3);
		}
		else if(bil3>bil1 && bil3>bil2){
			printf("bilangan %d lebih besar dari %d dan %d", bil3, bil1, bil2);
		}
		else{
			printf("ketiga bilangan bernilai sama");
		}
		return 0;
	}
