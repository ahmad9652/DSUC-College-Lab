/*
Date:- 27/09/2021
Topic:- Function
Sub topic:- Function with argument and return
*/
#include<stdio.h>
#include<conio.h>
int add10(int,int);
int main()
{

    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    int result;
    result = add10(a,b);
    printf("Addition of above number= %d \n",result);
    printf("Addition of above number= %d \n",add10(a,b));
    return 0;
}
int add10(int a,int b)
{

    int c;
    c=a+b;
    return c;
}
