/*
Date:- 30/09/2021
Topic:- Array
Sub topic:- Basics of array
Note :- Array are contigous in memory allocation
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    /*int a,b;
    b=sizeof(a);
    printf("Size = %d",b);*/
    /*int i,arr[10]={1,2,3,4,5,6,7,8,9,10};/* int - Data type , arr - Variable name , [10] - Size of array *8/
    printf("%d",arr[0]);*/
    int a[10],i,sum=0,max,min;
    printf("Enter 10 values\n");
    for(i=0;i<10;i++)
    {
        scanf("%d\n",&a[i]);
        if(i==0)
            {
                max=a[i];
                min=a[i];
            }
        else
        {
            if(a[i]>max)
            max=a[i];
            else if(a[i]<min)
        }
    }
    printf("Max value in array = %d\n",max);
    printf("Min value in array = %d\n",min);
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
}
