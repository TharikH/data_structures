#include<stdio.h>
void main()
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








