#include<stdio.h>
#include<conio.h>
void search1(int a[],int len,int element);
void main()
{
    int a[]={26,67,78,90,45,23,12};
    search1(a[7],7,90);
}
void search1(int a[],int len,int element)
{
    int i=0,loc=-1;
    while(i<=len-1)
    {
        if (a[i]==element)
        {
            printf("%d is present in the given array at index %d",element,i);
            loc=1;
            break;
        }
    }
    if(loc==-1)
        printf("%d is not present in the given array ",element);
}
