#include<stdio.h>
void main(){
    int sum=0,r,n;
    printf("input:\n");
    scanf("%d",&n);
    while(n>0){
        r = n%10;
        sum+=r;
        n=n/10;
    }
    printf("sum:%d",sum);
}