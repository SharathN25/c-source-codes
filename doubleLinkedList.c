/*Double Linked List Operation */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
int len;
void append(void);
void addAtBegin(void);
int length(void);
void display(void);
void addAtAfter(void);
void delete(void);
void main()
{
    int n;
    while(1)
    {
        printf("1.Append\n2.Add At Begin\n3.Length\n4.Display\n5.Add at after\n6.Delete\n7.Exit\n");
        printf("Enter your chocie\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1: append();
                break;
        case 2: addAtBegin();
                break;
        case 3: len = length();
                printf("List length =  %d\n \n",len);
                break;                
        case 4: display();
                break;
        case 5: addAtAfter();
                break;   
        case 6: delete();
                break;  
        case 7: exit(0);                       
        default:printf("Invalid choice\n");
            break;
        }

    }
}

void append()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->left = NULL;
    temp->right = NULL;
    if(root==NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;
        while(p->right!=NULL)
        {
            p = p->right;
        }
        p->right = temp;
        temp->left = p;
        temp->right = NULL;
    }
    printf("\n\n");
}

void addAtBegin()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->left = NULL;
    temp->right = NULL;
    if(root==NULL)
    {
        root = temp;
    }
    else
    {
        temp->right = root;
        root->left = temp;
        root =  temp;
    }
    printf("\n\n");
}

int length()
{
    struct node *temp = root;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->right;
    }
    return count;
}

void display()
{
    struct node *temp = root;
    if(temp == NULL)
    {
        printf("List is empty\n");
    }
    while(temp!=NULL)
    {
        printf("%d<-->",temp->data);
        temp = temp->right;
    }
    printf("\n\n");
}

void addAtAfter()
{
    int loc;
    printf("Enter the location\n");
    scanf("%d",&loc);
    int len = length();
    if(loc>len)
    {
        printf("Invalid location\n current list size = %d",len);
    }
    else
    {
        struct node *temp,*p;
        int i=1;
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data\n");
        scanf("%d",&temp->data);
        p = root;
        while(i<loc-1)
        {
            p = p->right;
            i++;
        }
        temp->right = p->right;
        p->right->left = temp;
        p->right = temp;
        temp->left = p;
    }
    
}

void delete()
{
    int loc;
    printf("enter the location\n");
    scanf("%d",&loc);
    int len = length();
    if(loc>len)
    {
      printf("Invalid location\n current list size = %d\n",len);
    }
    else 
    {
      if (loc==1)
       {
        struct node *temp;
        temp = root;
        root = temp->right;
        root->left = NULL;
        temp->right = NULL;
        temp->left = NULL;
        free(temp);
       }
       
       else
       {
        if(loc == len)
        {
          struct node *p,*q;
          int i = 1;
          p = root;
          while(i<loc-1)
          {
              p = p->right;
              i++;
          }
          q = p->right;
          p->right = NULL;
          q->left = NULL;
          q->right = NULL;
          free(q);
        }
        else
        {
        struct node *p,*q;
        p = root;
        int i=1;
        while(i<loc-1)
        {
            p = p->right;
            i++;
        }
        q = p->right;
        p->right = q->right;
        q->right->left = p;
        q->right = NULL;
        q->left = NULL;
        free(q);
       }
    }
   printf("\n\n"); 
}
}
    
    
    
     
