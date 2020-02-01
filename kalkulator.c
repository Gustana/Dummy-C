#include <stdio.h>

int tambah(), kurang(), kali(), bagi(); //deklarasi fungsi
int main(){
	int operasi;
	
	printf("1.Tambah\n2.Kurang\n3.Kali\n4.Bagi\n");
	printf("pilih jenis operasi :");
	scanf("%d", &operasi);
	if(operasi==1){
		return tambah();
	}else if(operasi==2){
		return kurang();
	}else if(operasi==3){
		return kali();
	}else if(operasi==4){
		return bagi();
	}else{
		printf("input salah");
		return main();
	}
	
}

int tambah(){ //fungsi pertambahan
	int pengulang;
	float angka1,angka2,hasil;
	
	printf("Masukkan angka pertama :");
	scanf("%f", &angka1);
	printf("Masukkan angka kedua :");
	scanf("%f", &angka2);
	hasil=angka1+angka2;	//rumus
	printf("hasil %.2f + %.2f adalah %.2f\n", angka1, angka2, hasil);//mencetak rumus/hasil
	
	printf("apakah mau mengulang lagi ?\n"); //pertanyaan untuk mengulang program
	printf("1.Iya\n2.Tidak\n");
	printf("pilihan :");
	scanf("%d", &pengulang);
	if(pengulang==1){
		return main();
	}else{
		printf("program selesai");
	}
}

int kurang(){	//fungsi pengurangan
	int pengulang;
	float angka1, angka2, hasil;
	
	printf("Masukkan angka pertama :");
	scanf("%f", &angka1);
	printf("Masukkan angka kedua :");
	scanf("%f", &angka2);
	hasil=angka1-angka2;	//rumus
	printf("hasil %.2f - %.2f adalah %.2f\n", angka1, angka2, hasil);//mencetak rumus/hasil
	
	printf("apakah mau mengulang lagi ?\n"); //pertanyaan untuk mengulang program
	printf("1.Iya\n2.Tidak\n");
	printf("pilihan :");
	scanf("%d", &pengulang);
	if(pengulang==1){
		return main();
	}else{
		printf("program selesai");
	}
}

int kali(){	//fungsi perkalian
	int pengulang;
	float angka1, angka2, hasil;
	
	printf("Masukkan angka pertama :");
	scanf("%f", &angka1);
	printf("Masukkan angka kedua :");
	scanf("%f", &angka2);
	hasil=angka1*angka2;	//rumus
	printf("hasil %.2f x %.2f adalah %.2f\n", angka1, angka2, hasil);//mencetak rumus/hasil
	
	printf("apakah mau mengulang lagi ?\n"); //pertanyaan untuk mengulang program
	printf("1.Iya\n2.Tidak\n");
	printf("pilihan :");
	scanf("%d", &pengulang);
	if(pengulang==1){
		return main();
	}else{
		printf("program selesai");
	}
}

int bagi(){	//fungsi pembagian
	int pengulang;
	float angka1, angka2, hasil;
	
	printf("Masukkan angka pertama :");
	scanf("%f", &angka1);
	printf("Masukkan angka kedua :");
	scanf("%f", &angka2);
	hasil=angka1/angka2;	//rumus
	printf("hasil %.2f / %.2f adalah %.2f\n", angka1, angka2, hasil);//mencetak rumus/hasil
	
	printf("apakah mau mengulang lagi ?\n"); //pertanyaan untuk mengulang program
	printf("1.Iya\n2.Tidak\n");
	printf("pilihan :");
	scanf("%d", &pengulang);
	if(pengulang==1){
		return main();
	}else{
		printf("program selesai");
	}
}
