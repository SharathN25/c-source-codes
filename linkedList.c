/*Single linked list operation */
#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
};
void append(void);
int length(void);
void display(void);
void addAtBegin(void);
void addAtAfter(void);
void delete(void);
void swap(void);
void reverse(void);
void sort(void);
struct node *root = NULL;
int len;

void main()
{
    int n;
    while(1)
    {
        printf("Linked list operations\n");
        printf("1.Append\n2.Add at Begin\n3.Add at After\n4.Length\n5.Display\n6.Delete\n7.Swap\n8.Reverse List\n9.Sort\n10.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1: append();
                break;
        case 2: addAtBegin();
                break;
        case 3: addAtAfter();
                break;
        case 4: len = length();
                printf("List length is %d\n",len);
                break;
        case 5: display();
                break;        
        case 6: delete();
                break;
        case 7: swap();
                break;
        case 8: reverse();
                break;  
        case 9: sort();
                break;      
        case 10: exit(1);                                    
        
        default: printf("Invalid Choice\n");
                 break;
            
        }
    }
}

void append()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;
        while(p->link!=NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
    
}

int length()
{
   struct node *temp;
   int count = 0;
   temp = root;
   while(temp!= NULL)
   {
    count++;
    temp = temp->link;
   }
   return count;
}

void display()
{
  struct node *temp;
  temp = root;
  if(temp == NULL)
  {
      printf("List is emty\n");
  }
  else
  {
      while(temp!=NULL)
      {
          printf("%d-->",temp->data);
          temp = temp->link;
      }
      printf("\n\n");
  }
  
}

void addAtBegin()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    if(root == NULL)
    {
       root = temp;
    }
    else
    {
        temp->link = root;
        root = temp;
    }
    
}

void addAtAfter()
{
    int loc;
    printf("Enter the location\n");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("Invalid location\n");
    }
    else
    {
        struct node *temp,*p;
        int i=1;
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data\n");
        scanf("%d", &temp->data);
        temp->link = NULL;
        p = root;
        while(i<loc)
        {
            p = p->link;
            i++;
        }
        temp->link = p->link;
        p->link = temp;

    }
       
}

void delete()
{
    int loc, len;
    printf("enter the location of link to be deleted\n");
    scanf("%d",&loc);
    len = length();
    if(loc>len)
    {
        printf("Invalid location\n");
        printf("Current list lenght is %d\n",len);
    }
    else if(loc == 1)
    {
        struct node *temp;
        temp = root;
        root = temp->link;
        temp->link = NULL;
        free(temp);
    }
    else
    {
        struct node *p,*q;
        int i=1;
        p = root;
        while(i<loc-1)
        {
            p = p->link;
            i++;
        }
        q=p->link;
        p->link = q->link;
        q->link = NULL;
        free(q);


    }
    
}

void swap()
{
    int loc;
    printf("Enter the location\n");
    scanf("%d",&loc);
    if(loc>(length()-1))
    {
        printf("Invalid location\n");
    }
    else
    {
        struct node *p,*q,*r;
        int i=1;
        p = root;
        while(i<loc-1)
        {
         p = p->link;
         i++;
        }
        q = p->link;
        r = q->link;
        q->link = r->link;
        r->link = q;
        p->link = r;

    }
}

void reverse()
{
 if(root == NULL)
 {
     printf("List is emty\n");
 }
 else
 {
 int i,j,temp;
 struct node *p,*q;
 p = q = root;
 int len = length();
 i =0;
 j =len-1;
 while(i<j)
 {
     int k=0;
     while(k<j)
     {
         q = q->link;
         k++;
    }
    temp = p->data;
    p->data = q->data;
    q->data = temp;
    i++;
    j--;
    p = p->link;
    q = root;   
 }
 }
 printf("Reverse list : ");
 display();
}


void sort(void)
{
    if(root == NULL)
    {
        printf("List is Emty\n");
    }
    else
    {
        struct node *p = root, *q = NULL;
        int swapped = 1;

        while(swapped)
        {
            p = root;
            swapped = 0;
            while (p->link != q)
            {
                if(p->data > p->link->data)
                {
                    int temp = p->data;
                    p->data = p->link->data;
                    p->link->data = temp;
                    swapped = 1;
                }
                p = p->link;
            }
            q = p;
        }

    }
}
