#include <stdio.h>
int main(){
	float panjang ,lebar;
	
	printf("Masukkan Panjang :");
	/**% .2f untuk mengatur jumlah angka dibelakang koma**/
	scanf("%f", &panjang);
	printf("Masukkan Lebar :");
	scanf("%f", &lebar);
	printf("panjang %.2f dan lebar %.2f\n", panjang,lebar);
	printf("luasnya adalah %.2f", panjang*lebar);
	return 0;
}

