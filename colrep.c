#include<stdio.h>
void main()
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
