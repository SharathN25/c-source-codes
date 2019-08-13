#include<stdio.h>
void main()
{
    int array[50],n,j,key;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=1;i<n;i++)
    {
        key=array[i];
        j= i=1;
        while(j>=0 && array[j]>key)
        {
            array[j+1] = array[j];
            j = j-1;
        }
        a[j+1] = key; // at this point j = -1, so j+1 = array[0]
    }
    printf("After insertion sort \n");
    for(int i=0;i<n;i++)
    {
     scanf("%d ",array[i]);
    }
}