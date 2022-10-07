#include<stdio.h>
#define maxsize 10
struct stack
{
    int stack1[maxsize];
    int top;
};
typedef struct stack STACK;
void push(STACK * , int);
int pop(STACK *);
void traverse(STACK *);
int main()
{
    STACK s1;
    int ch,item;
    s1.top=-1;
    do
    {
        printf("Press 1 for push\n");
        printf("Press 2 For pop\n");
        printf("Press 3 For Traverse\n");
        printf("Press 4 For exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("\n*** Push OPeration ***\n");
        printf("Enter New Item: ");
        scanf("%d",&item);
        push(&s1,item);
        break;
        case 2:
        printf("\n*** Pop Operation ***\n");
        printf("Deleted item: %d\n",pop(&s1));
        break;
        case 3:
        printf("\n*** Traversing Operation ***\n");
        traverse(&s1);
        break;
        case 4:
        break;
        default:
        printf("\n Your Choice is invalid");
            break;
        }

    } while (ch!=4);
    
}
void push(STACK *s, int item)
{
    if(s->top==maxsize-1)
    printf("Stack OverFlow");
    else
    s->top=s->top+1;
    s->stack1[s->top]=item;
}
int pop(STACK *s)
{
    int item;
    if(s->top==-1)
    printf("Plz Insert element in stack!!\n");
    else
    {
       
        {
            item=s->stack1[s->top];
            s->top=s->top-1;
            return item;
        }

        
    }

}
void traverse(STACK *s)
{
    int i;
    if(s->top==-1)
    printf("Plz Insert element in stack!!\n");
    else
    {
        printf("Stack Elements Are: ");
        for ( i = s->top ; i > 0; i--)
        printf("%d\t",s->stack1[i]);
        printf("\n");
        
        
    }
}