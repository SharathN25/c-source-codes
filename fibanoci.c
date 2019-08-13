#include<stdio.h>
void main(){
    int n,i,a=0,b=0,c=1;
    // printf("input:\n");
    // scanf("%d",&n);
    while(1){
        printf("%d\t",a);
        a = b+c;
        b=c;
        c=a;
    }
}