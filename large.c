#include<stdio.h>
void main(){
    int large,n;
    printf("enter the number of numbers\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    large=a[0];
    for(int j=1;j<n;j++){
        if(a[j]>large){
            large=a[j];
        }
        }
        printf("large=%d",large);
    }
