#include<stdio.h>
#include<conio.h>
#include<string.h>/* string header file */
struct student
{
    int roll;
    char name[10];
    float per;
};
typedef struct student STUDENT;/* typedef is a function use to rename struct student to STUDENT */
void main()
{
    /* Basic Notation Example */

    /*STUDENT S1;
    S1.roll=125;
    strcpy(S1.name,"ABC");
    S1.per=85.56;
    printf("Show detail\n");
    printf("Roll no : %d\n",S1.roll);
    printf("Name: %s\n",S1.name);
    printf("Marks Percentage : %0.2f\n",S1.per);*/


    /* Making array of user define data type variable */

    STUDENT S1[100];
    int i,siz;
    printf("Enter the number of student: ");
    scanf("%d",&siz);
    for(i=0;i<=siz-1;i++)
    {
        printf("\nEnter Name: ");
        scanf("%s",S1[i].name);
        printf("\nEnter roll number: ");
        scanf("%d",&S1[i].roll);
        printf("\nEnter percentage: ");
        scanf("%f",&S1[i].per);
    }

    /* For taking average percentage of entered students */

    /*float avr=0;
    for(i=0;i<=siz-1;i++)
    {
        avr=avr+S1[i].per;
    }
    avr=avr/10;
    printf("Average percentage of %d student : %f",siz,avr);*/



    /* For searching a topper */
    float max=0;
    int j;
    for(i=0;i<=siz-1;i++)
    {
        if(S1[i].per > max)
        {
            max=S1[i].per;
            j=i;
        }
    }
    printf("Topper Detail\n");
    printf("Name: %s\nRoll no: %d\nPercentage: %f",S1[j].name,S1[j].roll,S1[j].per);
}
