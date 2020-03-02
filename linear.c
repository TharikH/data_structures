#include<stdio.h>
void main()
{	float a[50],t,n,search,i,flag=0;
	printf("enter number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("enter element");
			scanf("%d",&t);
			a[i]=t;
		}
	printf("enter number to be searched");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
			{printf("number found in index %d \n",i+1);
			flag=1;
			}
	}
	if(flag==0)
	{
		printf("number not found");
	}
}
	
