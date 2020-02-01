#include <stdio.h>
    int main(){
        float r,luas;
        
        printf("Masukkan jari-jari :");
        scanf("%f", &r);                
        luas=3.0/4.0*3.14*r*r*r;
        printf("Luas Lingkaran adalah %.2f", luas);
        return 0;
    }
