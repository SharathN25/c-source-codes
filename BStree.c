/*Binary search tree implementation */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
int COUNT;
void inorder(struct node*);
void insert(void);
struct node* delete(struct node*, int);
void display(void);
void preorder(struct node*);
void postorder(struct node*);
void search(struct node*, int);
struct node* min(struct node*);
void max(void);
int height(struct node*);
void traverse(struct node*);
int nodeCount(void);
void main()
{
    int n,m,h,del;
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Search\n5.Find Min\n6.Find Max\n7.Height\n");
        printf("8.Node Count\n9.Exit\nEnter Your Choice\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1: insert();
                break;
        case 2: printf("Enter the data to be deleted\n");
                scanf("%d",&del);
                delete(root,del);
                break;
        case 3: display();
                break;
        case 4: printf("Enter the data to be searched\n"); 
                scanf("%d",&m);
                search(root,m);
                break;
        case 5: min(root);
                break;
        case 6: max();
                break; 
        case 7: h = height(root);
                printf("Height = %d\n",h);
                break;                              
        case 8: printf("Number of Node = %d\n",nodeCount());
                break;
        case 9: exit(0);        

        default: printf("Invalid Choice\n");
                break;
        }

    }
}

void insert()
{
   struct node *temp,*p;
   temp = (struct node*)malloc(sizeof(struct node));
   printf("Enter the data\n");
   scanf("%d",&temp->data);
   temp->left = NULL;
   temp->right = NULL;
   p = root;
   if(p == NULL)
   {
       root = temp;
   }
   else
   {
       struct node *current,*parent;
       current = root;
       while(current)
       {
           parent = current;
           if(temp->data > current->data)
           {
               current = current->right;
           }
           else
           {
               current = current->left;
           }
           
       }
       if(temp->data > parent->data)
       {
           parent->right = temp;
       }
       else
       {
           parent->left = temp;
       }
       
    }
   

}

void display()
{
    printf("\n");
    printf("In order : ");
    inorder(root);
    printf("\n\n");

    printf("Pre order : ");
    preorder(root);
    printf("\n\n");

    printf("Post order : ");
    postorder(root);
    printf("\n\n");
}

void inorder(struct node *t)
{
    if(t->left)
       inorder(t->left);
    printf("%d ",t->data);
    if(t->right)
       inorder(t->right);   
}



void preorder(struct node *t)
{
    printf("%d ",t->data);
    if(t->left)
       preorder(t->left);
    if(t->right)
       preorder(t->right); 
}

void postorder(struct node *t)
{
    if(t->left)
       postorder(t->left);
    if(t->right)
       postorder(t->right); 
    printf("%d ",t->data);   
}

void search(struct node *t,int data)
{
    if(t==NULL)
    {
        printf("Not found\n");
    }
    else if(t->data == data)
    {
        printf("Found\n");
    }
    else if(data <= t->data)
    {
        return search(t->left,data);
    }
    else
       return search(t->right,data); 

}

struct node* min(struct node *temp){

    if(temp == NULL)
    {
        printf("Tree is emty\n");
        return temp;
    }
    else
    {
        struct node *current = temp;
        while(current->left != NULL)
        {

            current = current->left;
        }

        printf("Min = %d\n",current->data);
        return current;  
    }
    
    printf("\n");

}


void max(){

    if(root == NULL)
    {
        printf("Tree is emty\n");
    }
    else
    {
        struct node *current = root;
        while(current->right != NULL)
        {

            current = current->right;
        }

        printf("Max = %d\n",current->data);  
        
    }
    printf("\n");
       
}

int height(struct node *temp)
{
    if(temp == NULL)
    {
        return 0;
    }
    else
    {
        int lheight = height(temp->left);
        int rheight = height(temp->right);

        if(lheight > rheight)
        return (lheight+1);
        else
        return (rheight+1);
        
    }
    
}

void traverse(struct node *c) //This Function traverse across all the nodes 
{                          //and also increments COUNT each time it finds a node
    if(c->left)            // similar logic as that of in, pre and post order traverse
       traverse(c->left);
    if(c->right)
       traverse(c->right);
    COUNT++;   
      
}


int nodeCount(void)   //This function initializes count =0; then calls the traverse function
{                     // then returns the count value.
    if(root==NULL)
    {
        return 0;
    }
    else
    {
    COUNT = 0;
    traverse(root);
    return COUNT;
    }

}

struct node* delete(struct node * temp, int data)
{
    if(temp == NULL)
    {
        printf("tree is emty\n");
        return temp;
    }
    else if(data<temp->data)
    {
        temp->left = delete(temp->left,data);
    }
    else if(data>root->data)
    {
        root->right = delete(temp->right,data);
    }
    else
    {
        //Both r and l nodes are null, just delete that 
        //That is its a leaf node
        if(temp->left == NULL && temp->right == NULL)
        {
            free(temp);
            temp = NULL;
        }
        //If it has no left node
        else if(temp->left == NULL)
        {
            struct node *junk = temp;
            temp = temp->right;
            free(junk);
        }
        //If it has no right node
        else if(temp->right == NULL)
        {
            struct node *junk = temp;
            temp = temp->left;
            free(junk);
       }
       //If both right and left node exists.
       else
       {
           struct node *p = min(temp->right);
           temp->data = p->data;
           temp->right = delete(temp->right,p->data);
       }
       return temp;
    }
    
    
}
