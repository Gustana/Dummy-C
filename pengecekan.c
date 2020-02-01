#include<stdio.h>
	int main(){
		int a;
		
		printf("masukkan bilangan:");
		scanf("%d", &a);
		
		if(a<=100 && a>=0){
			printf("valid");
		}else{
			printf("salah");
		}
	}
