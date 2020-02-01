#include <stdio.h>

int main(){
	int f, bil[100],masuk;
	float jum=0,rata;
	
	puts("Program nerima input 100 angka");
	printf("mau masuk berapa :");
	scanf("%d", &masuk);
	if(masuk<=100&&masuk>0){
		for(f=0;f<masuk;f++){
			printf("bilangan ke %d :", f+1);
			scanf("%d", &bil[f]);
			jum +=bil[f];
		}
	rata=jum/masuk;
	printf("rata rata = %.2f", rata);
	}else{
		puts("salah");
	}
	return 0;
}
