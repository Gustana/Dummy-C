#include <stdio.h>
	int main(){
		int batas,a;
		a=1;
		printf("Banyak bilangan yang ditampilkan :");
		scanf("%d",&batas);
		do{
			printf("%d",a);
			a++;
		}
		while(a<=batas);
		return 0;
	}
