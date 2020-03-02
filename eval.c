#include <stdio.h>
#include <string.h>

#define MAX 20

double stack[MAX];

int top = -1;

void push(double c)
{
    if (top >= MAX)
    {
        printf("\nOverflow\n");
        return;
    }
    else
    {
        stack[++top] = c;
    }
}

double pop()
{
    if (top < 0)
    {
        printf("\nUnderflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

void print()
{
    int p = top;
    printf("\nStack: ");
    for (int i = p; i >= 0; i--)
    {
        printf("%f ", stack[i]);
    }
    printf("\n");
}

int power(double a, int b)
{
    int p = 1;
    for (int i = 0; i < b; i++)
    {
        p *= a;
    }
    return p;
}

void main()
{
    int len;
    float a, b;

    char s[MAX], post[MAX], temp;

    printf("Enter the postfix expression: ");
    scanf("%s", s);

    len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        switch (s[i])
        {

        case '^':

            b = pop();
            a = pop();
            push(power(a, b));
            break;

        case '*':

            b = pop();
            a = pop();
            push(a * b);
            break;

        case '/':

            b = pop();
            a = pop();
            push(a / b);
            break;

        case '+':

            b = pop();
            a = pop();
            push(a + b);
            break;

        case '-':

            b = pop();
            a = pop();
            push(a - b);
            break;

        default:

            printf("Enter the value of %c: ", s[i]);
            scanf("%f", &a);
            push(a);
            break;
        }
    }

    printf("\nResult is: %f\n", pop());
}
