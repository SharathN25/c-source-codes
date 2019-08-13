#include<stdio.h>
void main()
{
    int n, fact =1,temp,i,sum=0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        r = n%10;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum = sum +fact;
        fact=1;
        n = n/10;
    }
    if(temp==sum)
    printf("%d is strong numner",sum);
    else
    printf("%d is not strong number",temp);
    
    

}