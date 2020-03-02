#include<stdio.h>
void main()
{	int a[50],t,n,search,i,flag=0,first,middle,last;
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
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{if(a[middle]==search)
		{printf("number found and index is %d",middle+1);
		flag=1;
		break;}
	else if(a[middle]>search)
	{
		last=middle-1;
		middle=(last+first)/2;
	}
	else
	{
		first=middle+1;
		middle=(last+first)/2;
	}
	}
	if(flag==0)
		printf("number not found");
}


printf("number found at %d",middle+1);
