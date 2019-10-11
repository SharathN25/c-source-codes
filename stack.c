/* stack data structure  implemetaion using c */
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY], top = -1;
void push(int);
int isFull(void);
int pop(void);
int isEmty(void);
void peek(void);
void traverse(void);
void main()
{
    int n,item;
    while(1)
    {
    printf("\n1.Push\n2.Pop\n3.Peek\n4.Traverse\n5.Exit\n");
    printf("Enter Your Choice\n");
    scanf("%d",&n);
    switch (n)
     {
     case 1: printf("Enter the element to be pushed\t");
             scanf("%d",&item);
             push(item);
             break;

     case 2: item = pop();
             if(item == 0)
             printf("Stack is underflow\n");
             else
             printf("%d is popped from stack",item);
             break;

     case 3: peek();
             break;

     case 4: traverse();
             break;

     case 5: exit(0);
             break;
    
     default: printf("Invalid entry\n");
              break;
         
     }
    }
}
    

    void push(int ele)
    {
        if(isFull())
        {
            printf("Stack Overflow\n");
        }
        else
        {
            top++;
            stack[top] = ele;
            printf("%d is pushed into stack\n",stack[top]);
        }
        
    }

    int isFull()
    {
        if(top == CAPACITY-1)
        return 1;
        else 
        return 0;
    }

    int pop()
    {
        if(isEmty())
            return 0;
        else
            return stack[top--];
    }

    int isEmty()
    {
        if(top == -1)
        return 1;
        else 
        return 0;
    }

    void peek()
    {
        if(isEmty())
            printf("Stack is Empty\n");
        else 
            printf("Top of stack =%d\n",stack[top]);   
    }

    void traverse()
    {
        if(isEmty())
            printf("Stack is Empty\n");
        else
        {
            for(int i =top; i>=0; i--)
            {
                printf("%d\n",stack[i]);
            }
        }
}
    
