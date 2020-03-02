#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
}*ptr1,*header1,*header2,*new;
void create(struct node *header)
{
	int i,temp,t;
	
	header->data=NULL;
	header->link=header;
	ptr1=header;
	printf("enter linked lists\n");
	
	while(1>0)
	{	printf("stop n ");
		scanf("%d",&t);
		if(t==-1)
		break;
		new=malloc(sizeof(struct node));
		ptr1->link=new;
		printf("enter element");
		scanf("%d",&temp);
		new->data=temp;
		new->link=header;
		ptr1=ptr1->link;
	}
			
}
void merge()
{	
	ptr1=header1->link;
	while(ptr1->link!=header1)
		ptr1=ptr1->link;
	ptr1->link=header2->link;
	while(ptr1->link!=header2)
		ptr1=ptr1->link;
	ptr1->link=header1;
	ptr1=header1->link;
	free(header2);
}
void print()
{
	while(ptr1!=header1)
	{
		printf("%d ",ptr1->data);
		ptr1=ptr1->link;
	}
	
}
void main()
{	header1=malloc(sizeof(struct node));
	header2=malloc(sizeof(struct node));
	create(header1);
	create(header2);
	merge();
	print();
}
