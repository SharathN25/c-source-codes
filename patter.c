#include<stdio.h>
void main(){
    int i,j,k;
    for(i=0;i<10;i++){
        for(j=0;j<20-i;j++){
            printf(" ");
        }
        for(k=0;k<2*i-1;k++){
            printf("*");
        }

        printf("\n");
    }
}