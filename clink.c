#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
}*new,*ptr,*ptr1;
void enter_node(struct node *header)
{   int temp,s;
    ptr=header;
    while(1>0)
    {
        printf("enter the value of node");
        scanf("%d",&temp);
        new=malloc(sizeof(struct node));
        ptr->link=new;
        new->data=temp;
        new->link=header;
        ptr=ptr->link;
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
    ptr=header->link;
    new=malloc(sizeof(struct node));
    header->link=new;
    new->data=temp;
    new->link=ptr;
}
void insertion_at_end(struct node *header)
{
    int temp;
    printf("enter the value of node");
    scanf("%d",&temp);
    ptr=header;
    while(ptr->link!=header)
    {
        ptr=ptr->link;
    }
    new=malloc(sizeof(struct node));
    ptr->link=new;
    new->data=temp;
    new->link=header;
}
void insertion_at_key(struct node *header,int key)
{
    int temp;
    ptr=header;
    while(ptr->link!=header && ptr->data!=key)
    {
        ptr=ptr->link;
    }
    if (ptr->data==key)
    {printf("enter the value of node");
    scanf("%d",&temp);
    new=malloc(sizeof(struct node));
    new->link=ptr->link;
    ptr->link=new;
    new->data=temp;}
    else
    {
        printf("key not found");
        return;
    }
}
void deletion_at_start(struct node *header)
{
    if(header->link==header)
    {
        printf("no nodes");
        return;
    }
    else{
        ptr=header->link;
        header->link=ptr->link;
        free(ptr);
    }
}
void deletion_at_key(struct node *header,int key)
{
    if(header->link==header)
    {
        printf("no nodes");
        return;
    }
    else{
        ptr=header;
        ptr1=ptr->link;
        while(ptr1->link!=header && ptr1->data!=key)
        {
            ptr=ptr->link;
            ptr1=ptr1->link;
        }
        if(ptr1->data==key)
        {ptr->link=ptr1->link;
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
    if(header->link==header)
    {
        printf("no nodes");
        return;
    }
    else{
        ptr=header;
        ptr1=ptr->link;
        while(ptr1->link!=header)
        {
            ptr=ptr->link;
            ptr1=ptr1->link;
        }
        ptr->link=header;
        free(ptr1);
    }
}
void print(struct node *header)
{
    ptr=header->link;
    while(ptr!=header)
    {   int temp;
        temp=ptr->data;
        printf("%d ",temp);
        ptr=ptr->link;
    }
}
void main()
{
    struct node *header;
    int ch,c,key;
    header=(struct node *)malloc(sizeof(struct node));
    header->link=header;
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
