#include<stdio.h>
void push(int a[],int top[],int stack)
{	int value;
	if(top[stack+1]==top[stack+2]-1 || top[stack+1]==99 )
	{
		printf("stack overflow");
		return;
	}
	else if (top[stack+1]==top[stack])
		{printf("stack underflow");
		return;}
	else
	{	
		printf("enter value");
		scanf("%d",&value);
		top[stack+1]++;
		a[top[stack+1]]=value;
	}
	
}
void pop(int a[],int top[],int stack)
{
	if(top[stack+1]==-1 ||top[stack+1]==top[stack+2]-1)
	{
		printf("underflow occured");
		return;
	}
	else
	{
		top[stack+1]--;
	}
}
void print(int a[],int top[],int stack)
{	int i;
	if(top[stack+1]==-1)
	{
		printf("no element found\n");
		return;
	}
	else
	{
		for(i=top[stack]+1;i<=top[stack+1];i++)
			{
				printf("%d ",a[i]);
			}
		printf("\n");
	}
}
void main()
{	int num,a[100],stack,ch,i;
	printf("enter how many stack needed");
	scanf("%d",&num);
	int top[num];
	top[0]=-1;
	for(i=1;i<num;i++)
		{
		top[i]=top[i-1]+(100/num);}
	while(1>0)
	{printf("which stack should the operation to be done");
	scanf("%d",&stack);
	printf("which operation to be performed \n1.push \n2.pop \n3.print \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		push(a,top,stack);
		break;
		case 2:
		pop(a,top,stack);
		break;
		case 3:
		print(a,top,stack);
		break;
		default:
		printf("invalid choice");
		break;
	}
	printf("to continue enter -1 \n");
	scanf("%d",&num);
	if(num!=-1)
		break;
	}
}
