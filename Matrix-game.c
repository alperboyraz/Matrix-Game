#include<stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
int n,sayi,Ayse=0,Betul=0;
printf(" N sayisini giriniz : ");
scanf("%d",&n);
int matris1[n][n];
int matris2[n][n];

//Matrisi rastgele doldurur
srand(time(0));
for(int row=1;row<=n;row++){
    for(int column=1;column<=n;column++){
        sayi = rand() % (7*n*n) + 1;
        matris1[row][column]=sayi;
    }
}

//Ana Matrisi yazdırır
printf("\n Ana Matris:\n");
    for(int row=1;row<=n;row++){
        for(int column=1;column<=n;column++){
                printf("%d\t",matris1[row][column]);
            }
             printf("\n");
            }
//Istenen defa dondurur
for(int i=1;i<=6;i++){
         //Matrisi cevirir
         for(int row=1;row<=n;row++){
            for(int column=1;column<=n;column++){
                matris2[column][n+1-row]=matris1[row][column];
                }
            }
        for(int t=1;t<=n;t++){
            if(i%2==0){
                Ayse+=matris2[n][t];
            }
            if(i%2!=0){
                Betul+=matris2[n][t];
            }
        }
        //Matrisi yazdırır
        printf("\n%d.Dondurme:\n",i);
        for(int row=1;row<=n;row++){
            for(int column=1;column<=n;column++){
                printf("%d\t",matris2[row][column]);
                }
                printf("\n");
            }
        printf("Ayse: %d - Betul: %d ",Ayse,Betul);
        
        //Matris2'yi Matris1'e atar
        for(int row=1;row<=n;row++){
            for(int column=1;column<=n;column++){
                matris1[row][column]=matris2[row][column];
                }
            }
    }

if(Betul>Ayse){
    printf("\nBetul Kazandi. ");
}
else if(Ayse>Betul){
     printf("\nAyse Kazandi. ");
}
else{
    printf("\nBerabere . ");
}
    
}