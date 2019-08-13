/*Queue operation using static array */
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int queue[CAPACITY];
int front=0, rear =0;
void insert(void);
void delete(void);
void display(void);
void main()
{
    int n;
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Select Your Choice\n");
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
          default: printf("Invalid Choice\n");
                  break;              
        
        }
    }

}

void insert()
{
    if(CAPACITY==rear)
        printf("Queue is full\n");
    else
    {
        printf("Enter the data\n");
        scanf("%d",&queue[rear]);
        rear++;
    }
    printf("\n\n");
}

void delete()
{
    if(front==rear)
        printf("Queue is emty\n");
    else
    {
        printf("%d is deleted",queue[front]);
        for(int i=0;i<rear-1;i++)
        {
            queue[i] = queue[i+1];
        }
        rear--;  
    }
    printf("\n\n");
    
}

void display()
{
    if(front==rear)
        printf("Queue is emty\n");
    else
    {
      printf("Queue is : ");
      for(int i=front;i<rear;i++)
          printf("%d ",queue[i]);
    }
    printf("\n");

}