#include <stdio.h>

int main(){
    int n[5][1], i, j;

    for(i=1;i<=5;i++){
        for(j=1;j<=1;j++){
            printf("Masukkan bilangan ke-%d :" , i);
            scanf("%d", &n[i][j]);
        }
    }

    return 0;
}

