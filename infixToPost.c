#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 50

char stack[SIZE];
int top = -1;

void push(char);
char pop(void);
void removeSpace(char*);
int precedence(char);
void infix_to_postfix(char*, char*);
int eval_postfix(char*);

void main()
{
	char infx[50],posfx[50];
	int res;
	printf("Input the Infix expression: ");
	scanf("%s",infx);
	infix_to_postfix(infx,posfx);
	printf("Postfix Expression is : %s\n",posfx);
	res = eval_postfix(posfx);
	printf("Postfix expression Result: %d\n",res);
}

//Function to push into stack.
void push(char elem)
{
	stack[++top] = elem;
}

//Function pop from stack.
char pop()
{
	return (stack[top--]);
}

//Function to remove space
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

//Function for precedence

int precedence(char element)
{
	switch (element)
	{
	case '#': return 0;
	          break;
    case '(': return 1;
              break;
	case '+': return 2;
	          break;		   			  
	case '-': return 2;
	          break;
	case '*': return 3;
	          break;
	case '/': return 3;
	          break;
	}

}

//Infix to post fix conversion

void infix_to_postfix(char *infix, char *postfix)
{
	char ch, elem;
	int i,k;
	i=k=0;
	
	removeSpaces(infix);
	
	push('#');

	while((ch = infix[i++])!= '\0')
	{

		if(ch == '(')           //if its opening bracket then push onto stack
		push(ch);
	    else if(isalnum(ch))    //if its alphanumeric then store it in postfix string.
		postfix[k++] = ch;
		else if(ch == ')')      // if closing bracket, then pop till u get '('. 
		{
			while(stack[top] != '(')
			postfix[k++] = pop();

			elem = pop();   //remove '(' from stack.
		}
		else                                           //if its a operator,check top of stack ,if top is emty push
		{                                              // if stack is not emty, compare operato presedence with top of stack
		 while((precedence(stack[top]))>= precedence(ch)) // if operator presedence is less than top, pop operator to posfix
		 postfix[k++] = pop();                                             
		 push(ch);					                     // else push operator to stack
		}
	}

	   while(stack[top] != '#')
	  	 postfix[k++] = pop();

	     postfix[k] = '\0';
		
}

//Function to evaluate postfix expression

int eval_postfix(char *postfix)
{
 top = -1;
 char ch;
 int i=0,op1,op2;

 while((ch=postfix[i++]) != '\0')
 {
	 if(isdigit(ch))
	 push(ch-'0');
	 else
	 {
		 op2 = pop();
		 op1 = pop();
		 switch (ch)
		 {
		   case '+': push(op2+op1);
		             break;
		   case '-': push(op1-op2);
		             break;
		   case '*': push(op1*op2);
		             break;
		   case '/': push(op1/op2);
		             break;		 			 			 
		 }

	 }
	 
 }

 return stack[top];
}

	
	
	

