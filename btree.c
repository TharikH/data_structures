#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *lc, *rc;
} * root, *ptr, *new;
struct node *search(struct node *ptr, int x)
{
    if (ptr->data == x)
    {
        return ptr;
    }
    if (ptr->lc != NULL)
    {
        search(ptr->lc, x);
    }
    if (ptr->rc != NULL)
    {
        search(ptr->rc, x);
    }
    if (ptr->lc == NULL && ptr->rc == NULL)
    {
        return NULL;
    }
}
void create(struct node *ptr)
{
}
void insert(struct node *ptr, int x)
{
    int ch;
    if (search(ptr, x) == NULL)
    {
        printf("key not found");
    }
    else
    {
        ptr = search(ptr, x);
        if (ptr->lc != NULL && ptr->rc != NULL)
        {
            printf("parent not free");
            return;
        }

        new = malloc(sizeof(struct node));
        while (ch != 3)
        {
            printf("where to insert\n1.LC\n2.RC\n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                if (ptr->lc == NULL)
                {
                    ptr->lc = new;
                    printf("enter value");
                    scanf("%d", &new->data);
                    new->lc = NULL;
                    new->rc = NULL;
                    ch = 3;
                }
                else
                {
                    printf("left child is not NULL");
                }
                break;
            case 2:
                if (ptr->rc == NULL)
                {
                    ptr->rc = new;
                    printf("enter value");
                    scanf("%d", &new->data);
                    new->rc = NULL;
                    new->lc = NULL;
                    ch = 3;
                }
                else
                {
                    printf("right child is not NULL");
                }
                break;
            default:
                printf("invalid choice");
                break;
            }
        }
    }
}
void delete (struct node *ptr, int x)
{
    if (search(ptr, x) == NULL)
    {
        printf("key not found");
    }
    else
    {
        if (ptr->rc == NULL || ptr->lc == NULL)
        {
        }
    }
}
void pre(struct node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        printf("%d", ptr->data);
        pre(ptr->lc);
        pre(ptr->rc);
    }
}
void post(struct node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        pre(ptr->lc);
        pre(ptr->rc);
        printf("%d", ptr->data);
    }
}
void inorder(struct node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        pre(ptr->lc);
printf("%d", ptr->data);
        pre(ptr->rc);
    }
}
void main()
{
    int ch, x;
    root = malloc(sizeof(struct node));
    printf("enter root");
    scanf("%d", &root->data);
    printf("enter the binary tree");
    create(root);
    while (1)
    {
        printf("\nwhich operation to do\n1.insertion\n2.deletion\n3.traversal\n4.exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("on which leaf node should the element be placed");
            scanf("%d", &x);
            insert(root, x);
            break;
        case 2:
            printf("which element should be deleted");
            scanf("%d", &x);
            insert(root, x);
            break;
        case 3:
            printf("which traversal\n1.preorder\n2.post order\n3.inorder");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                pre(root);
                break;
            case 2:
                post(root);
                break;
            case 3:
                inorder(root);
                break;
            default:
                printf("invalid choice");
                break;
            }
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice");
            break;
        }
    }
}