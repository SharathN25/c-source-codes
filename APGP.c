#include<stdio.h>
#include<math.h>
void main()
{
int a,d,An; //FOR AP : a = initial term, d= common difference, An is nth ter
int b,r,Bn; //FOR GP : b= initial term , r= common ratio, Bn is nth term
int n,i;//n=nmuber of values to be printed, i=for loop counter.
int k=1,j=1;// AP cunter=k, GP counter =j.
printf("enter the value of Nth term\n");
scanf("%d",&n);// store nth value --->n
printf("For AP enter initial term and common difference\n");
scanf("%d %d",&a,&d); 
printf("For GP enter initial term and common ratio\n");
scanf("%d %d",&b,&r);
for(i=1;i<=n;i++)
{
    if(i%2 ==1)
    {
        An = a+(k-1)*d;
        printf("%d\t",An);
        k++;
    }
    if(i%2 ==0)
    {
        Bn = b*pow(r,(j-1));
        printf("%d\t",Bn);
        j++;
    }
}
}




