/*
Date: 12/10/2020
Topic: Operation on array
Sub topic : Operation on array using switch case
*/
#include<stdio.h>
#include<conio.h>
void insert1(int a[],int len,int pos,int item);
int delete1(int a[],int len,int pos);
void search1(int a[],int len,int item);
void main()
{
    int i,x,loc,len,item,a[len],pos,ch;/* initialization */
    do
    {
        printf("Choose any operation to perform:\n1.For insert an element in a array\n2.For delete an element in a array\n3.For search an element in a array\n4.For Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter length of array: ");
        scanf("%d",&len);
        printf("Enter array\n");
        for(i=0;i<=len-1;i++)
            scanf("%d",&a[i]);
        printf("Enter the element to insert in given array: ");
        scanf("%d",&item);
        printf("Enter the index where you want to insert the element: ");
        scanf("%d",&pos);
        insert1(a,len,pos,item);
        break;
    case 2:
        printf("Enter length of array: ");
        scanf("%d",&len);
        printf("Enter array\n");
        for(i=0;i<=len-1;i++)
            scanf("%d",&a[i]);
        printf("Enter the index of element to delete in given array: ");
        scanf("%d",&pos);
        delete1(a,len,pos);
        break;
    case 3:
        printf("Enter length of array: ");
        scanf("%d",&len);
        printf("Enter array\n");
        for(i=0;i<=len-1;i++)
            scanf("%d",&a[i]);
        printf("Enter the element to search in given array: ");
        scanf("%d",&item);
        search1(a,len,item);
    case 4:
        exit(4);
    }
    printf("\n");

    }while(ch!=4);
}
void insert1(int a[],int len,int pos,int item)/* Function to insert item in an array */
{
    int i=len-1;/* initialization */
    for(i=len-1;i>=pos;i--)/* shifting the element from index len-1 to pos by one position in right direction so that we don't have to loose any element */
    {
        a[i+1]=a[i];
    }
    a[pos]=item;/* Inserting the new element at index pos */
    len=len+1;/* after insertion there is one more element so the length increase by one */
    for(i=0;i<=len-1;i++)
    {
        printf("\t %d",a[i]);
    }
}
int delete1(int a[],int len,int pos)/* Function to delete an element in an array */
{
    int i=pos,x;/* Initialization */
    x=a[pos];/* storing the element wanted to delete in array for if we need that element in future */
    for(i=pos-1;i<=len-1;i++)/* shifting the element from index pos to len-1 by one position in left direction */
    {
        a[i]=a[i+1];
    }
    len=len-1;/* because of deletion the length is decreased by 1 */
    printf("Edited array : ");
    for(i=0;i<=len-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return x;
}
void search1(int a[],int len,int item)/* function to search item in a given array */
{
    int i=0,loc=-1;
    while(i<=len-1&&loc==-1)/* matching the element from the array with a given item */
    {
        if(a[i]==item)
            loc=i;
        i=i+1;
    }
    if(loc==-1)
        printf("\nSearched element is not present in array\n");
    else
    {
        printf("\n%d is present in array at index %d",item,loc);
    }
}
