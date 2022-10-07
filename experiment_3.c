#include<stdio.h>
long fact(int);
int main()
{
    int i, num,factorial=1;
    printf("enter a whole number to find Factorial = ");
    scanf("%d",&num);
    printf("Factorial of %d is: %lu",num,fact(num));
    return 0;
}

long fact (int num)
{
    if (num == 0)
    return 1;
    else
    return(num * fact(num-1));
}