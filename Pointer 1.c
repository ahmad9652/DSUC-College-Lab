/*
Date:- 28/09/2021
Topic:- Pointer
Sub topic :- Pointer
NOTE :- 1)Use %p for printing the address whether the address is stored in pointer or through & operator
        2)Because Address is always unsigned hexadecimal integer type.
*/
#include<stdio.h>
#include<conio.h>
void sp(int , int);/* This is a User defined function to swap a variable through value */
void sc(int *, int*);/* This is a User defined function to swap a variable through reference */
void main()
{
    int a,b;
    int *p,**q;/* P is a pointer variable where the address of a is stored
                  q is a double pointer variable where the address of p ( which is also a pointer variable ) is stored */
    a=100;
    p=&a;
    q=&p;
    printf("Value of A = %d\nAddress of A= %p\nValue of P= %p\nAddress of P =%p\nValue of q = %p\n",a,&a,p,&p,q);
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping\t a = %d \t b=%d\n",a,b);
    sp(a,b);/* The function is called here by value */
    printf("After Swapping through sp function\ta = %d \t b=%d",a,b);/* Here the value of a and b is not swapped in the main function variable
                                                     because the function can not write in a variable of other function by the calling variable by name*/
    sc(&a,&b);/* Here the value of a and b is swapped in the main function variable
                 because the function can write in a variable of other function by the calling variable by Base address*/
    printf("After Swapping through sc function\ta = %d \t b=%d",a,b);
}
void sp(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping\t a = %d \t b=%d",a,b);
}
void sc(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
