/*Circular Queue, Pretty confusing one :-) :-) */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 6
int cqueue[size];
int front = -1, rear = -1;
void insert(void);
void delete(void);
void display(void);
void main()
{
    int n;
    while (1)
    {
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1: insert();
            break;
    case 2: delete();
            break;
    case 3: display();
            break;  
    case 4: exit(0);              
    default: printf("Invalid choice\n\n");
             break;
    }
    } 
}

void insert()
{
    if((front == 0 && rear == size -1)||(rear + 1 == front))
    {
        printf("Circular queue is full\n\n");
    }
    else if(front == -1 && rear == -1)
    {
        rear = front = 0;
        printf("enter the data\n");
        scanf("%d",&cqueue[rear]);
    }
    else if(rear == size - 1 )
    {
        rear = 0;
        printf("enter the data\n");
        scanf("%d",&cqueue[rear]);

    }
    else
    {
        rear++;
        printf("enter the data\n");
        scanf("%d",&cqueue[rear]);
    }
    printf("\n\n");
}

void delete()
{
    if(rear == -1 && front == -1)
    {
        printf("Circular queue is emty\n");
    }
    else if(front == rear)
    {
        printf("%d deleted\n",cqueue[front]);
        front = rear = -1;
    }
    else if(front == size - 1)
    {
        printf("%d deleted \n",cqueue[front]);
        front = 0;
    }
    else
    {
        printf("%d deleted\n",cqueue[front]);
        front++;
    }
    printf("\n");
    
    
}

void display()
{
    if(rear == -1 && front == -1)
    {
        printf("Circular queue is emty\n");

    }
    else if(front>rear)
    {
        for(int i = front;i<size;i++)
           printf("-%d-",cqueue[i]);
        for(int j = 0;j <= rear;j++)
           printf("-%d-",cqueue[j]);    
    }
    else
    {
        for(int i = front;i <= rear; i++)
          printf("-%d-",cqueue[i]);
    } 

printf("\n\n");
}

