#include<stdio.h>
int a[20][20],d[20][20],t[20][3],tran[20][3],s1[20][3],s2[20][3],result[20][3];
void make(int arr[20][20],int r,int c)
{ int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("enter elements");
scanf("%d",&arr[i][j]);
}
}
}
void threecol(int arr[20][20],int res[][3],int r,int c)
{
int i,j,k=1;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(arr[i][j]!=0)
{
res[k][0]=i;
res[k][1]=j;
res[k][2]=arr[i][j];
k++;
}
}
}
res[0][0]=r;
res[0][1]=c;
res[0][2]=k-1;

}
void print(int arr[][3])
{ int i,j;
for(i=0;i<=arr[0][2];i++)
{
for(j=0;j<3;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
}
void trans(int arr[][3],int b[][3])
{
int i,j,k=1;
for(i=0;i<arr[0][1];i++)
{for(j=1;j<=arr[0][2];j++)
{
if(arr[j][1]==i)
{
b[k][2]=arr[j][2];
b[k][0]=arr[j][1];
b[k][1]=arr[j][0];
k++;
}
}}
b[0][0]=arr[0][1];
b[0][1]=arr[0][0];
b[0][2]=arr[0][2];
}
void addition(int arr1[][3],int arr2[][3],int res[][3])
{ int i=1,j=1,k=1;
res[0][0]=arr1[0][0];
res[0][1]=arr1[0][1];
while(i<=arr1[0][2] && j<=arr2[0][2])
{
if (arr1[i][0]<arr2[j][0])
{
res[k][0]=arr1[i][0];
res[k][1]=arr1[i][1];
res[k][2]=arr1[i][2];
i++;
k++;
}
else if (arr1[i][0]>arr2[j][0])
{
res[k][0]=arr2[j][0];
res[k][1]=arr2[j][1];
res[k][2]=arr2[j][2];
j++;
k++;
}
else
{
if (arr1[i][1]<arr2[j][1])
{
res[k][0]=arr1[i][0];
res[k][1]=arr1[i][1];
res[k][2]=arr1[i][2];
i++;
k++;
}
else if (arr1[i][1]>arr2[j][1])
{
res[k][0]=arr2[j][0];
res[k][1]=arr2[j][1];
res[k][2]=arr2[j][2];
j++;
k++;
}
else
{
res[k][0]=arr2[i][0];
res[k][1]=arr2[j][1];
res[k][2]=arr2[j][2]+arr1[i][2];
i++;
k++;
j++;
}
}
}
while(i<=arr1[0][2])
{
res[k][0]=arr1[i][0];
res[k][1]=arr1[i][1];
res[k][2]=arr1[i][2];
i++;
k++;
}
while(j<=arr2[0][2])
{
res[k][0]=arr2[j][0];
res[k][1]=arr2[j][1];
res[k][2]=arr2[j][2];
j++;
k++;
}
res[0][2]=k-1;


}
void main()
{ int c,r,num;
printf("which operation to perform \n1.3-col-rep \n2.transpose \n3.addition");
scanf("%d",&num);
printf("enter number of rows and columns \n");
scanf("%d %d",&r,&c);
switch(num)
{
case 1:
make(a,r,c);
threecol(a,t,r,c);
print(t);
break;
case 2:
make(a,r,c);
threecol(a,t,r,c);
trans(t,tran);
print(tran);
break;
case 3:
printf("enter details of 1st");
make(a,r,c);
threecol(a,s1,r,c);
printf("enter details of 2nd");
make(d,r,c);
threecol(d,s2,r,c);
addition(s1,s2,result);
print(result);
break;
default:
printf("invalid choice");
}
}


