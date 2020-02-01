#include <stdio.h>
	int main(){
		int x=2;
		int y=3;
		
		do{
			printf("Kelipatan dari 2 adalah %d\n",x);
			x=x+2;
		}
		while(x<=100);
		
		do{
			printf("Kelipatan dari 3 adalah %d\n",y);
			y=y+3;
		}
		while(y<=100);
		return 0;
	}
