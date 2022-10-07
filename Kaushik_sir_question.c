#include<stdio.h>
#include<conio.h>
void main()
{
    int max_size_original;
    printf("Enter how many data do you want to enter: ");
    scanf("%d",&max_size_original);
    int original_stack[max_size_original];
    printf("Enter data in stack\nddd");
    int i;
    for(i=0;i<max_size_original;i++)
    {
        scanf("%d",&original_stack[i]);
    }
    printf("Entered info in stack: ");
    for ( i = 0; i < max_size_original; i++)
    {
        printf("%d\t",original_stack[i]);
    }
    printf("\n");
    int number_of_deleted_item;
    printf("Enter how many number do you want to pop: ");
    scanf("%d",&number_of_deleted_item);
    int stack_delete[number_of_deleted_item],stack_delete2[number_of_deleted_item],max=0,sum=0,l,k;
    for(int j=0 ; j <number_of_deleted_item;j++)
    {
        for ( i = 0; i < j+1; i++)
        {
            sum+=original_stack[max_size_original-1-i];
            stack_delete[i]=original_stack[max_size_original-1-i];
        }
        l=number_of_deleted_item-i;
        for ( k=0;k<l;k++)
        {
            sum+=original_stack[k];
            stack_delete[i++]=original_stack[k];
        }
        printf("sum : %d\n",sum);
        if (max<sum)
        {
            max=sum;
            for (int p = 0; p <number_of_deleted_item; p++)
            {
                stack_delete2[p]=stack_delete[p];
            }
            
        }
        sum=0;
        
    }
    printf("Deleted element are: ");
    for(i=0;i<number_of_deleted_item;i++)
    {
        printf("%d ",stack_delete2[i]);
    }
}