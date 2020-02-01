#include <stdio.h>
	int main(){
		int x,batas;
		x=5;
		printf("Masukkan jumlah batas bilangan :");
		scanf("%d",&batas);
		
		do{
			printf("%d\n",x);
			x+=5;
		}
		while(x<=batas);
	
		return 0;
	}
