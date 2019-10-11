/* input : sharath, output : sLhLrLaLtLhL
   input : shaarath, output: sLhLa2rLaLtLhL
   */


#include<stdio.h>
int main()
{
    char c[30], s[30], temp;
    int k =0,i=0;
    printf("Enter the string\n");
    scanf("%s",&c);
    while(c[i++]!='\0')
    {
        temp = c[i-1];
        if(temp == c[i])
        {
          s[k]=temp;
          s[k+1]='2';
          i++;
          k=k+2;
        }
        else
        {
        s[k]=temp;
        s[k+1]='L';
        k=k+2;
        }
    }
    s[k]='\0';
    printf("The final result is: %s",s);
}