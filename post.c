#include<stdio.h>
#include<string.h>
#include<stdio.h>
char stack[20];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
 
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
 
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x=='^')
    	return 1;
    if(x == '+' || x == '-')
        return 2;
    if(x == '*' || x == '/')
        return 3;
}
void main()
{
    char exp[20];
    char *e, x;
    printf("input the infix:");
    scanf("%s",exp);
    e = exp;
    printf("the postfix expression is:\n");
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }
}


 
