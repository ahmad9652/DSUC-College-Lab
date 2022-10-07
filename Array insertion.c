/*
Topic: Operation on array
sub topic: Insert operation on array at any particular index
*/
#include<stdio.h>
#include<conio.h>
void insert1(int a[],int len,int pos,int item);/* Here "a[]" is array
                                          "len" is (length of array) {Number of element present in array}
                                          "pos" is (position) {index at which insert operation will be performed}
                                          "item" is element to be insert at pos*/
void main()
{

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
