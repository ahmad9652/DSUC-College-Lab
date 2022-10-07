/*
Date:-27/09/21
Topic:- Solution of Exercise of chapter 8 of book let us c
Question 1
Solution type :- No argument with no return
*/
#include<stdio.h>
#include<conio.h>
void factorial();
int factorial1(int,int*);
void main()
{
    int number , fac;
    printf("Enter number: ");
    scanf("%d",&number);
    factorial();
    fac=factorial1(number,&fac);
    printf("Factorial of %d is %d",number,fac);
}
void factorial()
{
    int number,f=1,i=1;
    printf("Enter number: ");
    scanf("%d",&number);
    do
        {
            f=f*i;
            i++;
        }
    while(i<=number);
    printf("Factorial of %d is %d",number,f);
}
int factorial1(int number , int *p)
{
    int number,f=1,i=1;

    do
        {
            f=f*i;
            i++;
        }
    while(i<=number);
    *p=f;
    return *p;
}
