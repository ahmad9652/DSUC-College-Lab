#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *getnode();
void insert_front(struct node **q);
void insert_last(struct node **q);
void traverse(struct node *q);
int pop(struct node **q);
int main()
{
    struct node *list;
    list=NULL;
    int ch;
    do
    {
        printf("Press 1 to insert node in front of Link List\n");
        printf("Press 2 to Traverse Link List\n");
        printf("Press 3 to Delete Last node of Link List\n");
        printf("Press 4 to insert at Last node of Link List\n");
        printf("Press 5 to Exit \n");
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert_front(&list);
            break;
        case 2:
            traverse(list);
            break;
        case 3:
            printf("Deleted element: %d\n",pop(&list));
            break;
        case 4:
            insert_last(&list);
            break;
        case 5:
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
    } while (ch!=5);
    
    
    
}
struct node *getnode()
{
    struct node *k;
    int n;
    // printf("Enter how many many elements you want to enter: ");
    // scanf("%d",&n);
    k = ( struct node * )malloc(sizeof(struct node));
    if (k==NULL)
    {
        printf("New node cannot be generated\n");
    }
    else
    return k;
}
void insert_front(struct node **q)
{
    struct node *p;
    p=getnode();
    if (p!=NULL)
    {
        printf("\nEnter Node data: ");
        scanf("%d",&p->info);
        p->next=*q;
        *q=p;
    }
    
}
void traverse(struct node *q)
{
    struct node *temp;
    temp=q;
    int i=1;
    if (temp==NULL)
    {
        printf("Link list is empty\n");
    }
    else{
        while (temp!=NULL)
        {
            printf("%d Node info: %d\n",i,temp->info);
            temp=temp->next;
            i++;
        }
        
    }
}
int pop(struct node **q)
{
    struct node *temp,*prev;
    int k;
    temp=*q;
    if (temp==NULL)
    {
        printf("Link List is Empty first add a node!!!!!\n");
        return 0;
    }
    else
    {
        while (temp!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        k=temp->info;
        prev->next=temp->next;
        return k;
    }
}
void insert_last(struct node **q)
{
    struct node *temp,*p;
    temp=*q;
    p=getnode();
    printf("Enter info: ");
    scanf("%d",&p->info);
    if (temp==NULL)
    {
        p->next==NULL;
        *q=p;
    }
    else
    {
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        p->next=temp->next;
        temp->next=p;
    }
}
