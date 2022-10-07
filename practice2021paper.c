#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
struct node *getnode(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    if (p==NULL)
    {
        printf("Node could not be created.\n");
        return 0;
    }
    else{
        return p;
    }
}
void add_last(struct node **q){
    struct node *p,*temp;
    temp=*q;
    p=getnode();
    printf("Enter the Data :");
    scanf("%d",&p->info);
    if (p!=NULL)
    {
        if (*q!=NULL)
        {
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=p;
            p->next=NULL;
        }
        if (*q==NULL)
        {
            *q = p;
            p->next=NULL;
        }
    }
    
}
void traverse(struct node *q){
    struct node *temp;
    temp=q;
    if (q!=NULL)
    {
        while (temp!=NULL)
        {
            printf("%d ",temp->info);
            temp=temp->next;
        }
        printf("\n");
    }
    else{
        printf("NULL list\n");
    }
    
}
struct node *create_alternate(struct node *q){
    struct node *temp,*p,*loop,*list,*temp2;
    int count=0;
    list=NULL;
    temp = q;
    temp2=list;
    while (temp->next!=NULL)
    {
        count++;
    }
    temp=q;
    // if (count%2==0)
    // {
        for (int i = 0; i < count; i+=2)
        {
            temp2=list;
            p=getnode();
            if (list==NULL)
            {
                list=p;
                p->info=temp->info;
                p->next=NULL;
            }
            if (list!=NULL)
            {
                while (temp2->next!=NULL)
                {
                    temp2=temp2->next;
                }
                temp2->next=p;
                p->info=temp->info;
                p->next=NULL;
            }
            temp=temp->next;
            temp=temp->next;
        }
        
    // }
    return list;
    
}
void main(){
    int ch;
    struct node *list;
    list=NULL;
    do
    {
        printf("1. Add node\n2. Traverse\n3. Create another link list\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            add_last(&list);
            break;
        case 2:
            traverse(list);
            break;
        case 3:
            create_alternate(list);
            break;
        case 4:
            break;
        default:
            printf("choose from above choices\n");
            break;
        }
    } while (ch!=4);
    
}