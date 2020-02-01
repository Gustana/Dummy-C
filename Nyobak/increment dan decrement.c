#include <stdio.h>
#include <math.h>
	int main(){
		float x,y;
		
		printf("masukkan x :");
		scanf("%f", &x);
		if(x>0){
			
			y=log(x);
			printf("%.2f", y);
			return 0;
		}else{
			printf("input harus lebih dari 0");
		}
	}
