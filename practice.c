#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,sum=0;
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));    
    int count=0;
    for (i=0;i<n;i++) {
    if (getchar()!='\n'){scanf("%d",&arr[i]);}
    sum=sum+arr[i];
    }
    printf("%d",sum);
    free(arr);
    return 0;
}