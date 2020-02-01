#include <stdio.h>

	int main(){
		int N[36][4],n,i,j,ulang,rata1[4]={0}/*horizontal*/,rata2[36]={0}/*vertikal*/,jumlah1[36]={0}/*vertikal*/,jumlah2[4]={0}/*horizontal*/;
		puts("Program nerima input siswa maksimal 36");
		printf("Mau masuk berapa siswa :");
		scanf("%d", &n);
		if(n<=36){
			for(i=0;i<n;i++){
				printf("Masukkan nilai siswa %d :\n", i+1);
				for(j=0;j<3;j++){
					printf("Masukkan nilai %d :", j+1);
					scanf("%d", &N[i][j]);

					jumlah1[i] +=N[i][j];
					jumlah2[j] +=N[i][j];
				}
				rata1[i]=jumlah1[i]/3;
				jumlah2[3] +=rata1[i];
			}

			//menampilkan data

			printf("------------------------ Hasil --------------------------");
			printf("\n+-------+-----------+-----------+-----------+-----------+");//7,11
			printf("\n| Siswa | N_Ulangan |   N_UTS   |   N_UTS   | Rata-Rata |");
			printf("\n+-------+-----------+-----------+-----------+-----------+");
			for(i=0;i<n;i++){
				printf("\n| %5d |", i+1);
				for(j=0;j<3;j++){
					printf(" %9d |", N[i][j]);
				}
				printf(" %9d |", rata1[i]);
			}
			printf("\n+=======+===========+===========+===========+===========+");
			printf("\n| Total |");
			for(j=0;j<4;j++){
				printf(" %9d |",jumlah2[j]);
			}

			printf("\n+=======+===========+===========+===========+===========+");
			printf("\n|  Rata |");
			for(j=0;j<4;j++){
				rata2[j]= jumlah2[j]/n;
				printf(" %9d |", rata2[j]);
			}
			printf("\n------------------------ Selesai ------------------------");

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
