#include <stdio.h>

int main(){
		int x,y,z;
		long int t_har,jum_bayar,kembalian;
		
		printf("Program Kasir Ngawur\n");
		printf("Warung Lain aja");
		printf("\nMasukkan harga barang :");
		scanf("%d",&x);
		printf("Masukkan jumlah barang :");
		scanf("%d",&y);
		printf("Dapat discount ?\n1.Iya\n2.Tidak\n");
		printf("Program ini tidak bisa menghitung discount\nJadi pilih nomor 2 aja ya,please\n");
		printf("Pencet aja dulu gak usah banyak tanyak !\n");
		printf("Pilihan :");
		scanf("%d",&z);
		if(z==1){
			printf("Dibilangin gak bisa ngitung discount !\nBaru sekolah ya ?");
		}
		else{
			printf("dagang pelit !!\nOtak cinaaaa\n");
		}
		t_har=x*y;
		printf("Total belanja anda adalah %ld\n",t_har);
		printf("Anda membayar sebesar :");
		scanf("%ld",&jum_bayar);
		kembalian=jum_bayar-t_har;
		printf("\nKembalian anda sebesar :%ld\n",kembalian);
		if(kembalian<=0){
			printf("\nJaman ngutang say ?\n");
			printf("\nMalu dong");
		}
		else{
			printf("Terimakasih telah membeli produk kami\nBesok besok kalok belanja lagi ke warung lain aja ya!");
		}
		return 0;
	}
