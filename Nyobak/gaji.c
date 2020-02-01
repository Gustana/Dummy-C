#include <stdio.h>
	int main(){
		float nomor_pegawai,jam_lembur, gaji_pegawai, tunjangan, upah_lembur, total_gaji;
		
		
		/** Input ***/
		printf("Masukkan nomor pegawai :\n");
		scanf("%f", &nomor_pegawai);
		
		printf("Masukkan jumlah jam lembur :\n");
		scanf("%f", &jam_lembur);
		
		printf("Masukkan gaji pegawai :\n");
		scanf("%f", &gaji_pegawai);
		
		/*function*/
		tunjangan=15*gaji_pegawai/100;
		upah_lembur=3*jam_lembur*gaji_pegawai/100;
		total_gaji=tunjangan+upah_lembur+gaji_pegawai;
		
		/***Output***/
		printf("Besar tunjangan anda adalah : %.3f\n", tunjangan);
		printf("Besar upah lembur adalah : %.3f\n", upah_lembur);
		printf("Total gaji anda adalah : %.3f\n", total_gaji);
		
		return 0;
	}
