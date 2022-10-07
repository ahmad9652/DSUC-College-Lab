/*
Topic: Operation on array
sub topic: Search operation on array
*/
#include<stdio.h>
#include<conio.h>
void search1(int a[],int len,int item);/* Here "a[]" is array
                                          "len" is (length of array) {Number of element present in array}
                                          "item" is element to be searched */
void main()
{
    int a[6]={25,56,78,50,25,15},len=6,item=34;
    search1(a,len,item);
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
