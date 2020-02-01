#include<stdio.h>

int main(){
	int batas, i, j, diff;
	
	printf("Masukkan batas :");
	scanf("%d", &batas);
	
	if(batas > 4){
		for (i=1; i<= batas; i++){
			for (j=1; j<= batas; j++){
				diff = (batas-i)+1;
				
				if(i==1 || i==batas || i==j || j==1 || j==batas || j==diff){
					printf("* ");
				}else{
					printf("  ");
				}
			}
			printf("  \n");
		}	
	}else{
		printf("[!] Batas harus lebih dari 4");
	}
}
