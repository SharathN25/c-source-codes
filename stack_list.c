/* stack implementaion using Linked list */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void push();
void pop();
void display();
struct node *top =NULL;

void main()
{
    int n;
    while(1)
    {
    printf("1.Push\n2.Pop\n3.Display\n");
    printf("Select your choice\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1: push();
            break;
    case 2: pop();
            break;
    case 3: display();
            break;
    default: printf("Invalid choice\n");
            break;
    }
    }
}

void push()
{
    struct node *temp;
    temp =(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->link = top;
    top =temp;
}

void pop()
{
    if(top==NULL)
    {
        printf("Stack is emty\n");
    }
    else
    {
        struct node *temp;
        temp = top;
        printf("%d is popped\n",temp->data);
        top = temp->link;
        temp->link = NULL;
        free(temp);
        
    }
    
}
void display()
{
    if(top == NULL)
    {
        printf("Stack is emty\n");
    }
    else
    {
        struct node *temp;
        temp = top;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp = temp->link;
        }
    }
    
}