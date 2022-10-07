/*
Date:- 27/09/21
Topic :- Function
sub topic:- Function with return type and no argument
*/
#include<stdio.h>
#include<conio.h>
int add10();
int main()
{
    int result;
    result = add10();
    printf("Addition of above number= %d \n",result);
    printf("Addition of above number= %d \n",add10());
    return 0;
}
int add10()
{

    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    int c;
    c=a+b;
    return c;
}
