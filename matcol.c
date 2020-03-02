#include<stdio.h>
void colrep()
{
int a[50][50],s[100][3],i,j,r,c,count,k;
	printf("enter matrix col and row");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("enter elements");
				scanf("%d",&a[i][j]);
			}
		}
		k=1;
		count=0;
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(a[i][j]!=0)
				{
					s[k][0]=i;
					s[k][1]=j;
					s[k][2]=a[i][j];
					k++;
					count++;
				}
			}
		}
	s[0][0]=r;
	s[0][1]=c;
	s[0][2]=count;
	for(i=0;i<=s[0][2];i++)
	{	
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",s[i][j]);
		}
	}


}
void trans()
{
int a[50][50],s[100][3],res[100][3],i,j,r,c,count,k,temp,t=1;
	printf("enter matrix col and row");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("enter elements");
				scanf("%d",&a[i][j]);
			}
		}
		k=1;
		count=0;
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(a[i][j]!=0)
				{
					s[k][0]=i;
					s[k][1]=j;
					s[k][2]=a[i][j];
					k++;
					count++;
				}
			}
		}
	s[0][0]=r;
	s[0][1]=c;
	s[0][2]=count;
res[0][0]=s[0][1];
res[0][1]=s[0][0];
res[0][2]=s[0][2];
for(j=0;j<c;j++)
	{
		for(i=1;i<=s[0][2];i++)
		{
			if(s[i][1]==j)
			{
			res[t][0]=s[i][1];
			res[t][1]=s[i][0];
			res[t][2]=s[i][2];
			t++;
			}
		}	
	}
for(i=0;i<=res[0][2];i++)
	{	
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",res[i][j]);
		}
	}
}
void add()
{
int a1[50][3],a2[50][3],result[100][3],i,j,r,c,n1,n2,k,ptr1=1,tot,ptr2=1;
	printf("enter rows and columns numbers");
	scanf("%d %d",&r,&c);
	printf("enter the details of matrix 1\n");
	printf("enter number of non zero");
	scanf("%d",&n1);
	a1[0][0]=r;
	a1[0][1]=c;
	a1[0][2]=n1;
	for(i=1;i<=a1[0][2];i++)
	{	
		for(j=0;j<3;j++)
		{
			printf("enter elements");
			scanf("%d",&a1[i][j]);
		}
	}
	for(i=0;i<=a1[0][2];i++)
	{	
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",a1[i][j]);
		}
	}	
	printf("\nenter the details of matrix 2\n");
	printf("enter number of non zero");
	scanf("%d",&n2);
	a2[0][0]=r;
	a2[0][1]=c;
	a2[0][2]=n2;
	for(i=1;i<=a2[0][2];i++)
	{	
		for(j=0;j<3;j++)
		{
			printf("enter elements");
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<=a2[0][2];i++)
	{	
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",a2[i][j]);
		}
	}	
	result[0][0]=r;
	result[0][1]=c;
	k=1;
	i=1;
	j=0;
	tot=n1+n2;
	while(k<=tot)
	{
		if(a1[ptr1][0]<a2[ptr2][0])
		{
		result[i][0]=a1[ptr1][0];
		result[i][1]=a1[ptr1][1];
		result[i][2]=a1[ptr1][2];
		ptr1++;
		}
		else if(a1[ptr1][0]>a2[ptr2][0])
		{
		result[i][0]=a2[ptr2][0];
		result[i][1]=a2[ptr2][1];
		result[i][2]=a2[ptr2][2];
		ptr2++;
		}
		else
		{
			if(a1[ptr1][1]<a2[ptr2][1])
		{
		result[i][0]=a1[ptr1][0];
		result[i][1]=a1[ptr1][1];
		result[i][2]=a1[ptr1][2];
		ptr1++;
		}
			else if(a1[ptr1][1]>a2[ptr2][1])
		{
		result[i][0]=a2[ptr2][0];
		result[i][1]=a2[ptr2][1];
		result[i][2]=a2[ptr2][2];
		ptr2++;
		}
		else
		{
		result[i][0]=a2[ptr2][0];
		result[i][1]=a2[ptr2][1];
		result[i][2]=a2[ptr2][2]+a1[ptr1][2];
		tot--;
		ptr2++;
		ptr1++;
		}
		}
		k++;
		i++;
	
	
	
	}
result[0][2]=k;
for(i=0;i<=result[0][2];i++)
	{	
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",result[i][j]);
		}
	}	
}
void main()
{
	int c;
	printf("enter no of rows and columns");
	printf("which operation should be performed\n1.3 column representation\n2.transpose\n3.addition\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		colrep();
		break;
		case 2:
		trans();
		break;
		case 3:
		add();
		break;
	}
}
