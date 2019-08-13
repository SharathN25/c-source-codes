#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter two numbers to be added : \t");
    scanf("%d %d",&x,&y);
    if(y>0)
    {
        while(y!=0)
        {
            x++;
            y--;
        }
   
    }
    else if(y<0)
    {
        while(y!=0)
        {
            x--;
            y++;
        }
    }
    
    printf("Sum without using + is  : %d",x);
}