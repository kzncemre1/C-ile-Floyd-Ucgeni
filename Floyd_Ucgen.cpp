#include <stdio.h>
#include <stdlib.h>




int main() {
    int satir, sayac = 1;

    printf("Kac satir yapilsin:");
    scanf("%d", &satir);
    int temp=satir;
    satir=0;
   for(int i=1; i<=temp; i++)
   {
       for (int j = 1; j <=satir+1 ; ++j) {
           printf("%d ",sayac);
           sayac++;
       }
       satir++;
       printf("\n");
   }
}
