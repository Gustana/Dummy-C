#include <stdio.h>

#define PHI (3.14) //Deklarasi Konstanta PHI
int i;//Deklarasi Global Variable
//Deklarasi Fungsi dan Prosedur
int fibonacci();
float volumeTabung(float r, float t), luasLingkaran(float r);
void mutlak(), garis();

int main(){
    int pil, n, bil;
    float r, t;
    garis(36);
    printf("\tFUNGSI DAN PROSEDUR\n");
    garis(36);
    printf("PILIHAN:\n");
    puts("1. Luas Lingkaran");
    puts("2. Volume Tabung");
    puts("3. Deret Fibonacci");
    puts("4. Bilangan Mutlak");
    garis(36);

    do {
        printf("Masukkan pilihan (1-4): ");
        scanf("%d", &pil);
    }while(pil<1 || pil>4);
    garis(36);

    switch(pil){
        case 1:
            printf("Masukkan Nilai Jari-Jari :");
            scanf("%f", &r);
           printf("Luas lingkaran = %.2f\n", luasLingkaran(r));
            break;
        case 2:
            printf("Masukkan Nilai Jari-Jari :");
            scanf("%f", &r);
            printf("Masukkan Nilai Tinggi :");
            scanf("%f", &t);
            printf("Volume Tabung = %.2f\n", volumeTabung(r,t));
            break;
        case 3:
            printf("Masukkan Banyak Bilangan :");
            scanf("%d", &n);
            for (i=0;i<n;i++){
              printf("%d", fibonacci(i));
            }
            printf("\n");
            break;
        case 4:
            printf("Masukkan Sebuah Bilangan :");
            scanf("%d", &bil);
            mutlak(&bil);
            printf("Nilai Mutlak = %d\n", bil);
            break;
    }
    garis(36);

    return 0;
}

void garis(int n){
    if  (n == 0){
            return;
    }else{
        for (i=1;i<=n;i++){
            printf("=");
        }
        printf("\n");
    }
}

float luasLingkaran(float r){
    return PHI*r*r;
}

float volumeTabung(float r, float t){
    return PHI*r*r*t;
}

int fibonacci(int data){
    if  (data==0){
        return 0;
    }else if(data==1){
        return 1;
    }else if(data > 1){
        return fibonacci(data-1)+fibonacci(data-2);
    }else{
        return 0;
    }
}

void mutlak(int *bil){
    if  (*bil<0)
        *bil*=-1;
    else
        return;
}

