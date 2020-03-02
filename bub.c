void bubble(int n,int a[])
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{	count=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
				{	count++;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
		}
		if(count==0)
		{
			break;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
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
bubble(n,a);
}
