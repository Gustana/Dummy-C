#include <stdio.h>
	int main(){
		int a,batas;
		
		printf("Banyak bilangan yang akan ditampilkan :");
		scanf("%d",&batas);
		
		for(a=1;a<=batas;a++){
			printf("%d\n",a);
		}
		
		return 0;
	}
