#include<stdio.h>
#define N 9
void main()
{
    int a[9]={34,56,54,32,67,89,90,32,21};
    int b[9];
    printf("Given array is \t");
    for(int i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n After reverse array is \t");
    // for(int i=0;i<N;i++){
    //     b[i]=a[N-1-i];
    //     printf("%d\t",b[i]);
    // }
    for(int i=N-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    
}