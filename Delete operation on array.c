/*
Topic: Operation on array
sub topic: Delete operation on array
*/
#include<stdio.h>
#include<conio.h>
int delete1(int a[],int len,int pos);/* Here "a[]" is array
                                          "len" is (length of array) {Number of element present in array}
                                          "pos" is (position) {index at which delete operation will be performed} */
void main()
{
    int a[6]={25,56,78,50,25,15},len=6,pos=3;
    delete1(a,len,pos);
}
int delete1(int a[],int len,int pos)/* Function to delete an element in an array */
{
    int i=pos,x;/* Initialization */
    x=a[pos];/* storing the element wanted to delete in array for if we need that element in future */
    for(i=pos;i<=len-1;i++)/* shifting the element from index pos to len-1 by one position in left direction */
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
