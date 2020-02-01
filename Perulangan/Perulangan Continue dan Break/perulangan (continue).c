#include <stdio.h>
	int main(){
		int x,batas;
		
		printf("Banyak bilangan genap yang ditampilkan :");
		scanf("%d",&batas);
		
		for(x=1;x<=batas;x++){
			if(x%2==0) continue;
			printf("%d\n",x);
		}
		
		return 0;
	}
