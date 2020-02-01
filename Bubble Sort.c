#include<stdio.h>
    int main(){
        int i, j, n, Tmp, Arr[50];

        printf("Masukkan Banyaknya Data (maks 50) :");
        scanf("%d", &n);
        if(n<=50){
            for(i=0;i<n;i++){
                printf("Data ke-%i", i+1);
                scanf("%d", Arr+1);
            }

            for(i = 0; i<n-1;i++-i){
                for(j=0; j<n-i;j++){
                    if(Arr[j] > Arr[j+1]){
                        Tmp = Arr[j];
                        Arr[j] = Arr[j+1];
                        Arr[j+1] = Tmp;
                    }
                }
            }

            for(i =0; i<n;i++){
                printf("%d\n", Arr[i]);
            }
        }else{
            printf("Data Kelebihan");
            return main();
        }

        return 0;
    }
