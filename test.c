#include<stdio.h>
void main()
{
    int i=8,j,k=1;
    for(j=0;j<10;j++)
    {
        for(i=0;i<10;i++)
        {
            printf("%d\t",k);
            k++;
        }
        printf("\n");
    }
}
