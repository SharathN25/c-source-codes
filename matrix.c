#include<stdio.h>
void main()
{
    int a[10][10], b[10][10],c[10][10];
    int arow,acol,brow,bcol,i,j,k;
    int sum =0;
    printf("Enter size of matrix a :\t");
    scanf("%d %d",&arow,&acol);
    printf("enter the elements of matrix a\n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<acol;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter size of matrix b :\t");
    scanf("%d %d",&brow,&bcol);
    if(acol!=brow)
        printf("Matrix multiplication not possible\n");
    else
    {
     printf("enter the elements of matrix b\n");
     for(i=0;i<brow;i++)
     {
        for(j=0;j<bcol;j++)
        {
            scanf("%d",&b[i][j]);
        }
     }
     for(i=0;i<acol;i++ )
     {
         for(j=0;j<brow;j++)
         {
             for(k=0;k<brow;k++)
             {
                 sum+= a[i][k]*b[k][j];
             }
         c[i][j]= sum;
         sum =0;
        }
     }

     printf("resultant matrix is \n");
     for(i=0;i<arow;i++)
     {
         for(j=0;j<bcol;j++)
         {
             printf("%d ",c[i][j]);
         }
         printf("\n");
     }
    }    

}
