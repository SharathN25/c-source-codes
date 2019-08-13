#include<stdio.h>
void main()
{
    int reminder,number,result =0,temp;
    printf("enter the number: \n");
    scanf("%d",&number);
    temp=number;
    while(number!=0)
    {
        reminder = number%10;
        result = result*10+reminder;
        number = number/10;
    }
    if (result == temp)
    printf("%d is palindrome",result);
    else
    printf("%d is not palindrome",result);

}