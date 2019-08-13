#include<stdio.h>
void main()
{
    int array[50],n,min,temp;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[min])
            min =j;
        }
        temp = array[i];
        array[i]=array[min];
        array[min]=temp;
    }

    printf("After selection sort : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    
}