#include <stdio.h>

int main(){
	float bil1,bil2,bil3,bil4,bil5,rata;
	
	printf("Masukkan bilangan pertama :");
	scanf("%f", &bil1);
	printf("Masukkan bilangan kedua :");
	scanf("%f", &bil2);
	printf("Masukkan bilangan ketiga :");
	scanf("%f", &bil3);
	printf("Masukkan bilangan keempat :");
	scanf("%f", &bil4);
	printf("Masukkan bilangan kelima :");
	scanf("%f", &bil5);
	
	rata=(bil1+bil2+bil3+bil4+bil5)/5;
	printf("%f", rata);
	return 0;
}
