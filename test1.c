#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void removeSpaces(char*);
void main(){

    char c[3]="1+2";
    removeSpaces(c);
    int i=0;
    int m=0;
    while (c[i++] != '\0')
    {
       m++;
    }
    printf("%d",m);
    
    
}

void removeSpaces(char *source)
{
	char *i = source;
	char *j = source;

	while(*j != '\0')
	{
		*i = *j++;
		if(*i != ' ')
		i++;
	}

	*i = '\0';
}