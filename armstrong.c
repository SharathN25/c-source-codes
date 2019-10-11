#include<stdio.h>
void main(){
    int r , n , sum=0;
    printf("input:\n");
    scanf("%d",&n);
    int temp =n;
    while(n>0){
        r = n%10;
        sum = sum + r*r*r;
        n= n/10;
    }
    if(sum==temp)
      printf("%d is amstrong number",temp);
      else
      printf("%d is not amstrong anumber",temp);
}