#include<stdio.h>
int add(int a,int b)
{
    int c ;
    c= a+b;
    return c;
}
void print()
{
 printf("Function Pointer");
}

void main()
{
    int (*p1)(int,int);
    p1 = add;
    void (*p2)();
    p2 = print;

    printf("%d\n",p1(1,2));
    p2();
}