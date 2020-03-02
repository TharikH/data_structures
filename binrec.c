#include<stdio.h>
int binrec(int first,int last,int *a,int search)
{	int middle=(first+last)/2,flag;
	if(first<=last)
	{
		if(a[middle]==search)
		{printf("number found at %d",middle+1);
		flag=1;
		return flag;}
		else if(a[middle]>search)
	{
		last=middle-1;
		binrec(first,last,a,search);
	}
		else
	{
		first=middle+1;
		binrec(first,last,a,search);
	}
	}
}
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
	if(binrec(first,last,a,search)!=1)
	printf("not found");
}
