#include<stdio.h>
int top=-1;
void push(int a[])
{	int value;
	if(top==19)
	{
		printf("stack overflow");
		return;
	}
	else
	{	
		printf("enter value");
		scanf("%d",&value);
		top++;
		a[top]=value;
	}
	
}
void pop(int a[])
{
	if(top==-1)
	{
		printf("underflow occured");
		return;
	}
	else
	{
		top--;
	}
}
void ret(int a[],int pos)
{
	int b[20],i,k=0,j;
		j=top-1;
		while(top>pos)
		{b[k]=a[top];
		k++;
		top--;
		}
	k--;
	printf("the retrieved element is:%d \n",a[top]);
	while(top<=j)
	{
		a[top]=b[k];
		k--;
		top++;
	}
	top--;
}
void print(int a[])
{	int i;
	if(top==-1)
	{
		printf("no element found\n");
		return;
	}
	else
	{
		for(i=0;i<=top;i++)
			{
				printf("%d ",a[i]);
			}
		printf("\n");
	}
}
void main()
{
	int a[20],ch,num,pos;
	while(1>0)
{	printf("which operation to be performed \n1.push \n2.pop \n3.retreive \n4.print \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		push(a);
		break;
		case 2:
		pop(a);
		break;
		case 3:
		printf("which position to retrieve ");
		scanf("%d",&pos);
		ret(a,pos);
		break;
		case 4:
		print(a);
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
