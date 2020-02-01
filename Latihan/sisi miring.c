#include <stdio.h>
#include <math.h>
	int main(){
		float a,b,c,det,x1,x2,x;
		
		printf("Masukkan nilai a :");
		scanf("%f", &a);
		if(a>0 || a<0){
			printf("Masukkan nilai b :");
			scanf("%f", &b);
			printf("Masukkan nilai c :");
			scanf("%f", &c);
			det=pow(b,2)-4*a*c;
			if(det<0){
				printf("bilangan imajiner");
			}else if(det>0){
				x1=-1*b+sqrt(pow(b,2)-4*a*c)/2*a;
				x2=-1*b-sqrt(pow(b,2)-4*a*c);
				printf("x1=%.2f\n", x1);
				printf("x2=%.2f", x2);
			}else{
				x=-b+sqrt(pow(b,2)-4*a*c)/2*a;
				printf("%f", x);
			}
		}else{
			printf("input a tidak boleh bernilai 0");
		}
		
		
		return 0;
	}
