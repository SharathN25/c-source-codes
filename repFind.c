#include<stdio.h>
void main()
{
    int a[10]={0}, N;
    printf("enter the number \n");
    scanf("%d",&N);
    while(N>0)
    {
        int rem = N%10;
        if(a[rem]==1)
        break;
        a[rem]=1;
        N=N/10;
    }
    if(N>0)
    printf("yes");
    else 
    printf("No");
    }