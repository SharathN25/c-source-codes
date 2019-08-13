#include<stdio.h>
int stringLength(char[]);
void main(){
    int  length;
    char str[30];
    printf("enter the string:\n");
    gets(str);
    length = stringLength(str);
    printf("length of the string is:%d",length);

}
int stringLength(char x[]){
    int i=0,count=0; 
    while(x[i]!='\0'){
      count++;
      i++;
    }
    return count;
}