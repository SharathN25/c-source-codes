#include<stdio.h>
#include<stdlib.h>
void mergeSort(int *,int);         
void merge(int *,int *,int,int *, int);

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
    numOfElements = sizeof(A)/sizeof(A[0]);
    mergeSort(A,n);
    printf("After megre sort : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}

//Function to Sort
void mergeSort(int *A, int n)
{
    int mid, i, *L, *R;

    if(n<2)  // Base Condtion to stop recursion. If Array has less than 2 element, do nothing.
    return;

    mid = n/2; //Find the mid index

    L = (int*)malloc(mid*sizeof(int));
    R = (int*)malloc((n-mid)*sizeof(int));

    for(i=0;i<mid;i++)
    L[i]=A[i];          //Left Sub array Creation

    for(i=mid;i<n;i++)
    R[i-mid] =A[i];    //Right Sub Array creation

    mergeSort(L,mid);  // Sort Left sub array
    mergeSort(R,n-mid); //Sort Right sub array
  
    merge(A,L,mid,R,n-mid);

    free(L);
    free(R);

}

//Function to merge
void merge(int *A,int *L,int leftCount,int *R, int rightCount)
{
    // i = index of left subarray
    // j = index of right subarray
    // k = index of main array
    int i,k,j;
    i=j=k=0;

    while(i<leftCount && j<rightCount)
    {
        if(L[i] < R[j])
        A[k++] = L[i++];
        else
        A[k++] = R[j++];        
    }

    while (i<leftCount)
    A[k++] = L[i++];

    while (j<rightCount)
    A[k++] = R[j++];

}