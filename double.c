#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *llink,*rlink;
}*new,*ptr,*ptr1;
void enter_node(struct node *header)
{   int temp,s;
    ptr=header;
    while(1>0)
    {
        printf("enter the value of node");
        scanf("%d",&temp);
        new=malloc(sizeof(struct node));
        ptr->llink=new;
        new->rlink=ptr;
        new->data=temp;
        new->llink=NULL;
        ptr=ptr->llink;
        printf("do you wanna continue? -1 for exit");
        scanf("%d",&s);
        if(s==-1){
            break;
        }
    }
}
void insertion_at_start(struct node *header)
{   int temp;
    printf("enter the value of node");
    scanf("%d",&temp);
    ptr=header->llink;
    new=malloc(sizeof(struct node));
    header->llink=new;
    new->rlink=header;
    new->data=temp;
    new->llink=ptr;
    ptr->rlink=new;
}
void insertion_at_end(struct node *header)
{
    int temp;
    printf("enter the value of node");
    scanf("%d",&temp);
    ptr=header;
    while(ptr->llink!=NULL)
    {
        ptr=ptr->llink;
    }
    new=malloc(sizeof(struct node));
    ptr->llink=new;
    new->rlink=ptr;
    new->data=temp;
    new->llink=NULL;
}
void insertion_at_key(struct node *header,int key)
{
    int temp;
    ptr=header;
    while(ptr->llink!=NULL && ptr->data!=key)
    {
        ptr=ptr->llink;
    }
    if (ptr->data==key)
    {printf("enter the value of node");
    scanf("%d",&temp);
    new=malloc(sizeof(struct node));
    new->llink=ptr->llink;
    ptr->llink=new;
    new->rlink=ptr;
    new->llink->rlink=new;
    new->data=temp;}
    else
    {
        printf("key not found");
        return;
    }
}
void deletion_at_start(struct node *header)
{
    if(header->llink==NULL)
    {
        printf("no nodes");
        return;
    }
    else{
        ptr=header->llink;
        header->llink=ptr->llink;
        ptr->llink->rlink=header;
        free(ptr);
    }
}
void deletion_at_key(struct node *header,int key)
{
    if(header->llink==NULL)
    {
        printf("no nodes");
        return;
    }
    else{
        ptr=header;
        ptr1=ptr->llink;
        while(ptr1->llink!=NULL && ptr1->data!=key)
        {
            ptr=ptr->llink;
            ptr1=ptr1->llink;
        }
        if(ptr1->data==key)
        {ptr->llink=ptr1->llink;
        ptr1->llink->rlink=ptr;
        free(ptr1);}
        else
        {
            printf("no key found");
            return;
        }
    }
}
void deletion_at_end(struct node *header)
{
    if(header->llink==NULL)
    {
        printf("no nodes");
        return;
    }
    else{
        ptr=header;
        ptr1=ptr->llink;
        while(ptr1->llink!=NULL)
        {
            ptr=ptr->llink;
            ptr1=ptr1->llink;
        }
        ptr->llink=NULL;
        free(ptr1);
    }
}
void print(struct node *header)
{
    ptr=header->llink;
    while(ptr!=NULL)
    {   int temp;
        temp=ptr->data;
        printf("%d ",temp);
        ptr=ptr->llink;
    }
}
void main()
{
    struct node *header;
    int ch,c,key;
    header=(struct node *)malloc(sizeof(struct node));
    header->llink=NULL;
    header->rlink=NULL;
    enter_node(header);
    while(1>0){
    printf("enter which operation\n1.insertion\n2.deletion\n3.print\n4.stop");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("which operaion\n1.insertion at start\n2.at end\n3.at a key");
            scanf("%d",&c);
            switch(c){
                case 1:
                insertion_at_start(header);
                break;
                case 2:
                insertion_at_end(header);
                break;
                case 3:
                printf("enter key");
                scanf("%d",&key);
                insertion_at_key(header,key);
                break;
                default:
                printf("invalid");
                break;
            }
            break;
            case 2:
            printf("which operaion\n1.deletion at start\n2.at end\n3.at a key");
            scanf("%d",&c);
            switch(c){
                case 1:
                deletion_at_start(header);
                break;
                case 2:
                deletion_at_end(header);
                break;
                case 3:
                printf("enter key");
                scanf("%d",&key);
                deletion_at_key(header,key);
                break;
                default:
                printf("invalid");
                break;
            }
            break;
            case 3:
            print(header);
            break;
            case 4:
            return;
            break;
            default:
            printf("invalid");
            break;
    }
    }
}
