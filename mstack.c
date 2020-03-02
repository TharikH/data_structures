#include<stdio.h>
#include<stdlib.h>
int arr[100],top[100],temp,n;
void push(int no)
{
	if(top[no]==99 || top[no]==(no+1)*n)
	{
		printf("overflow\n");
		return;
	}
	else
	{
		printf("enter value");
		scanf("%d",&temp);
		top[no]++;
		arr[top[no]]=temp;
	}
}
int pop(int no)
{
	if(top[no]==-1 ||  top[no]==(no*n)-1)
	{
		printf("underflow\n");
		return 0;
	}
	else
	{
		top[no]--;
		return top[no]+1;
	}
}
void print(int no){
	if(top[no]==-1 ||  top[no]==(no*n)-1)
	{
		printf("underflow\n");
		return;
	}
	else
	{
		for(temp=(no*n);temp<=top[no];temp++)
		{
			printf("%d ",arr[temp]);
		}
	}
}
void main()
{	int num,i,no,ch;
	printf("enter how many stack");
	scanf("%d",&num);
	n=100/num;
	top[0]=-1;
	for(i=1;i<num;i++)
	{
		top[i]=top[i-1]+n;
	}
	do{
	printf("which stack to perform\n");
	scanf("%d",&no);
	printf("\n which operation \n1.push\n2.pop\n3.print\n4.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		push(no);
		break;
		case 2:
		pop(no);
		break;
		case 3:
		print(no);
		break;
		case 4:
		exit(0);
		break;
		default:
		printf("invalid");
		break;
	}
	}while(1>0);
}
