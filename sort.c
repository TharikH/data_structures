#include<stdio.h>
void selection(int n,int a[50])
{
	int i,j,temp,t=0,r=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			t++;
			}
		r++;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("exchange=%d \n comparison=%d",t,r);
}
void bubble(int n,int a[])
{
	int i,j,temp,t=0,r=0,count=0;
	for(i=0;i<n-1;i++)
	{	count=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
				{	count++;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					t++;
				}
				r++;
		}
		if(count==0)
			break;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("exchange=%d \n comparison=%d",t,r);
}
void insertion(int n,int a[])
{
	int i,j,temp,t=0,r=0; 
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			t++;
			for(j=i;j>0;j--)
			{
				if(a[j]<a[j-1])
				{
					temp=a[j];
					a[j]=a[j-1];
					a[j-1]=temp;
					t++;
				}
				r++;
			}
		}
		r++;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);	
	printf("exchange=%d \n comparison=%d",t,r);
}
void main()
{ 	int n,i,a[50],ch;
	printf("enter number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element");
		scanf("%d",&a[i]);
	}
	printf("which option is to be used");
	printf("\n1.selection sort\n2.bubble sort\n3.insertion sort\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:selection(n,a);
			break;
	case 2:bubble(n,a);
			break;
	case 3:insertion(n,a);
			break;
	default:printf("invalid choice");
	}
}
