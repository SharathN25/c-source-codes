#include<stdio.h>
#include<stdlib.h>


void main()
{
    int n,numOfElements;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter list of number to be sorted : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }


    printf("After quick sort : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}

void quickSort(int *A, )