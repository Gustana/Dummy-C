#include <stdio.h>
	int main(){
			int nilai;
			printf("Masukkan Nilai :");
			scanf("%d",&nilai);
			if(nilai<=100 && nilai >=0){
				if(nilai>=75){
					printf("Lulus");
				}
				else{
					printf("Remidi");
				}
			}
			else{
				printf("Input salah ");
			}
	}
