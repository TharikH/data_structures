#include<stdio.h>
void main()
{	float a[50],b[50],c[50],t,n,k,search,i,flag=0;
	printf("enter number of elements in first array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{	printf("enter element");
			scanf("%d",&t);
			a[i]=t;
		}
	printf("enter number of elements in second array");
	scanf("%d",&m);
	for(i=0;i<m;i++)
		{
			printf("enter element");
			scanf("%d",&t);
			b[i]=t;
		}
	for(i=0;i<n;i++)
	 c[i]=a[i];
	for(i=n,i<m+n;i++)
	 {j=0;
	 c[i]=b[j];
	 j++;
	 }
	for(i=0;i<n;i++)
		{for(j=0;j<i;j++)
			{if(c[i]==c[j])
				for(k=j;k<n;k++)
					c[k]=c[k+1];
				n=n-1;
			}
		}
				search need to be done on c
