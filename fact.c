#include<stdio.h>
void main(){
    int i, fact=1,n;
    printf("input=\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact =fact*i;
    }
    printf("fcat=%d",fact);
}