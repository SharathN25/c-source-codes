#include<stdio.h>
void main(){
    unsigned long i=2,j;
    while(1){
        for(j=2;j<=i;j++){
            if((i%j)==0)
            break;
        }
        if(j==i){
            printf("%ld\n",i);
        }
        i++;
    }
}


    