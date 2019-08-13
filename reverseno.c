#include<stdio.h>
void main(){
    int r,n,sum=0;
    printf("input:\n");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
}