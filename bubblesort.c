#include<stdio.h>
void main()
{
    int a[50],n,temp;
    printf("enter the number of element\n");
    scanf("%d",&n);
    printf("Enter the data\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before bubble sort : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
            } 
            
        }
    }
    printf("after bubble sorting : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}