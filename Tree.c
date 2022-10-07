#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct TreeNode
{
    struct TreeNode *left;
    int info;
    struct TreeNode *right;
};
struct TreeNode *gettreenode()
{
    struct TreeNode *p;
    p=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (p==NULL)
    {
        printf("New Node could not be created\n");
        return NULL;
    }
    else
        return p;
}
void setleft (int x,struct TreeNode *q)
{
    struct TreeNode *p;
    p=gettreenode();
    if (q==NULL)
    printf("Given Tree node does not present\n");
    else
    {
        if (q->left==NULL)
        printf("Left Node is already present\n");
        else
        {
            p->info=x;
            p->left=NULL;
            p->right=NULL;
            q->left=p;
        }
    }
}
void setright(int x,struct TreeNode *q)
{
    struct TreeNode *p;
    p=gettreenode();
    if (q==NULL)
        printf("Given Node is not present\n");
    else
    {
        if (q->right!=NULL)
            printf("Right node is already present\n");
        else
        {
            p->info=x;
            p->left=NULL;
            p->right=NULL;
            q->right=p;
        }
    }
}
void intraverse(struct TreeNode*q)
{
    if (q!=NULL)
    {
        intraverse(q->left);
        printf("\n%d",q->info);
        intraverse(q->right);
    }
    else
    printf("Ther is no tree\n");
}
void pretraverse(struct TreeNode *q)
{
    if(q!=NULL)
    {
        printf("\n%d",q->info);
        pretraverse(q->left);
        pretraverse(q->right);
    }
    else
    printf("Ther is no tree\n");
}
void posttraverse(struct TreeNode *q)
{
    if (q!=NULL)
    {
        pretraverse(q->left);
        pretraverse(q->right);
        printf("\n%d",q->info);
    }
    else
    printf("Ther is no tree\n");
    
}
void main()
{
    struct TreeNode *head;
    head=NULL;
    int ch,x;
    do
    {
        printf("Press 1 for add a root node\nPress 2 for add a left node\nPress 3 for add a right node\nPress 4 for Intraverse\nPress 5 for Pretraverse\nPress 6 for Posttraverse\nPress 7 for Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            head=gettreenode();
            printf("Enter info of root: ");
            scanf("%d",&head->info);
            head->left=NULL;
            head->right=NULL;
            break;
        case 2:
            printf("Enter the info: ");
            scanf("%d",&x);
            setleft(x,head);
            break;
        case 3:
            printf("Enter the info: ");
            scanf("%d",&x);
            setright(x,head);
            break;
        case 4:
            intraverse(head);
            break;
        case 5:
            pretraverse(head);
            break;
        case 6:
            posttraverse(head);
            break;
        case 7:
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }

    } while (ch!=7);
    
}