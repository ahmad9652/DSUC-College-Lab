/*
Date:-27/09/21
Topic Function
Sub topic :- function with no return type with no argument
*/
#include<stdio.h>
#include<conio.h>
void  add10();
int main()
{
    add10();
    return 0;
}
void add10()
{
    int a,b,c;
    printf("Enter two number: ");
    scanf("%d",&a);
    printf("Enter two number: ");
    scanf("%d",&b);
    c=a+b;
    printf("Addition of %d and %d = %d ",a,b,c);
}
