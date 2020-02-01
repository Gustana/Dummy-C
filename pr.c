#include <stdio.h>

	int main(){
		int N[36][4],n,i,j,ulang;
		float jumUlangan,jumUts,jumUas, rata;
		puts("Program nerima input siswa maksimal 36");
		printf("Mau masuk berapa siswa :");
		scanf("%d", &n);
		if(n<=36){
			for(i=0;i<n;i++){
				printf("Masukkan nilai siswa %d \n", i+1);
				for(j=0;j<3;j++){
					printf("Masukkan nilai %d :", j+1);
					scanf("%d", &N[i][j]);
					
					jumUlangan =N[i][j];
					jumUts +=N[i][j];
					jumUas +=N[i][j];
				}
			}
			
			//menampilkan data
			
			printf("------------------------ Hasil --------------------------");
			printf("\n+-------+-----------+-----------+-----------+-----------+");//7,11
			printf("\n| Siswa | N_Ulangan |   N_UTS   |   N_UAS   | Rata-Rata |");
			printf("\n+-------+-----------+-----------+-----------+-----------+");
			for(i=0;i<n;i++){
				printf("\n| %5d |", i+1);
				for(j=0;j<3;j++){
					printf(" %9d |", N[i][j]);
				}
				rata =jumUlangan/3;
				printf("%.2f       |", rata);
			}
			
		}else{
			puts("Melebihi Beban");
			printf("Mau ngulang ?\n1.iya\n2.tidak\n");
			scanf("%d",&ulang);
			if (ulang==1){
				return main();
			}else{
				puts("program selesai ");
			}
		}
		return 0;
	}
