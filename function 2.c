/*
Date:- 27/09/21
Topic :- Function
sub topic:- Function with no return type with argument */
#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<conio.h>
void  add10(int , int);
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d",&a);
    printf("Enter two number: ");
    scanf("%d",&b);
    add10(a,b);
    return 0;
}
void add10(int a,int b)
{
    int c;
    c=a+b;
    printf("Addition of %d and %d = %d ",a,b,c);
}
