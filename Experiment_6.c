//Impelementing QUEUE 
#include<stdio.h>
#include<conio.h>
#define maxsize 100
typedef struct queue{
    int item[maxsize];
    int front;
    int rear;
}QUEUE;
// typedef struct queue ;
void insert(QUEUE *q,int item1);
int delete1(QUEUE *q);
void display(QUEUE *q);
void main()
{
    int ch,x;
    QUEUE q;
    q.front=-1;
    q.rear=-1;
    do
    {
        printf("Press 1 for input\n");
        printf("Press 2 for delete\n");
        printf("Press 3 for display\n");
        printf("Press 4 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter item: ");
            scanf("%d",&x);
            insert(&q,x);
            break;
        case 2:
            printf("Deleted item: %d\n",delete1(&q));
            break;
        case 3:
            display(&q);
            printf("\n");
            break;
        case 4:
            break;
        default:
            printf("Enter a valid choice\n");
            break;
        }
    } while (ch!=4);
    
}
void insert(QUEUE *q,int item1)
{
    if(q->rear>=maxsize-1)
    printf("Queue is Overflow\n");
    else
    {
        q->rear++;
        if (q->front==-1)
        {
            q->front++;
        }
        q->item[q->rear]=item1;
    }
}
int delete1(QUEUE *q)
{
    int x;
    if(q->front==-1||q->front>q->rear)
    printf("Queue is in underflow\n");
    else{
        x=q->item[q->front];
        q->front++;
        if (q->front-1==q->rear)
        {
            q->front=-1;
            q->rear=-1;
        }
        return x;
    }
}
void display(QUEUE *q)
{
    int i;
    for(i=q->front;i<=q->rear;i++)
    printf("%d ",q->item[i]);
}
