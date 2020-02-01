#include <stdio.h>
	int main(){
			int nilai;
			printf("Masukkan Nilai :");
			scanf("%d",&nilai);
			if(nilai<=100 && nilai>=0){
				if(nilai<=100 && nilai>=90){
					printf("Predikat nilai anda A");
					}
				else if(nilai<=89 && nilai>=80){
					printf("Predikat nilai anda B");
				}
				else if(nilai<=79 && nilai>=70){
					printf("Predikat nilai anda C");
					}
				else{
					printf("Predikat nilai anda D");
					}
			}
			else{
					printf("Input salah");
				}
		return 0;
		}
