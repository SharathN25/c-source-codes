#include<stdio.h>
void swap(int,int);
void main(){
    int a=10, b=20;
    printf("before swap a=%d\t b=%d\t \n",a,b);
    swap(a,b);
    printf("after swap, inside main a=%d\t b=%d\t\n",a,b);
}
void swap(int x, int y){
    int temp = x;
    x=y;
    y=temp;
    printf("after swap, inside swap function a=%d\t b=%d\t\n",x,y);
    
}