#include<stdio.h>
void main()
{
	int a1[50][3],a2[50][3],result[100][3],i,j,r,c,n1,n2,k,ptr1=1,tot,ptr2=2;
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
	printf("enter the details of matrix 2\n");
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
			scanf("%d",&a1[i][j]);
		}
	}
	result[0][0]=r;
	result[0][1]=c;
	k=0;
	i=0;
	j=0;
	tot=n1+n2;
	while(k<tot)
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
result[0][2]=i;
for(i=0;i<=result[0][2];i++)
	{	
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",result[i][j]);
		}
	}
	
}
