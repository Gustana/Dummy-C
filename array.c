#include <stdio.h>

	int main(){
		
		int M[20][20],i,j,baris,kolom; //deklarasi
		
		puts("input maksimal baris=20, dan kolom=20");
		printf("Mau masuk berapa baris :");
		scanf("%d", &baris);
		if(baris<=20){ //falidasi baris
			printf("Mau masuk berapa kolom :");
			scanf("%d", &kolom);
			if(kolom<=20){ //falidasi kolom
				for(i=0;i<baris;i++){
					for(j=0;j<kolom;j++){
						printf("input M[%d][%d] :", i,j);
						scanf("%d", &M[i][j]) ;
					}
				}
				
				//Menampilkan data
				for(i=0;i<baris;i++){
					printf("\n|");
					for(j=0;j<kolom;j++){
						printf("%2d|",M[i][j]);
					}
				}
			}else{
				printf("melebihi beban");
			}
		}else{
			printf("melebihi beban");
		}
		return 0;
	}
