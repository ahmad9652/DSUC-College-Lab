/*
Date :- 01/10/2021
Topic:- Structures
Sub topic :- Exercise Question 1 chapter 17
 */
#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int rollno;
    char department[15];
    char course[7];
    int yoj;
};
void main()
{
    struct student S;
    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter Roll number: ");
        scanf("%d",&S.rollno);
        printf("Enter Student name : ");
        scanf("%s",S.name);
        printf("Enter Department: ");
        scanf("%s",S.department);
        printf("Enter the course: ");
        scanf("%s",S.course);
        printf("Enter Year of joining: ");
        scanf("%d",&S.yoj);
    }
    for(i=0;i<=4;i++)
    {
        printf("Name= %s",S.name);
    }
}
