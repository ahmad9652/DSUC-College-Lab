#include<stdio.h>
#include<conio.h>

int delete1(int a[],int pos,int *len)
{
	int i,x;
	x=a[pos];
	for(i=pos;i<=*len-1;i++)
	{
		a[i]=a[i+1];
	}
	*len=*len-1;
	return(x);
}
int main()
{
	int a[100],len,i,pos;
	printf("enter the length of array : ");
	scanf("%d",&len);
	printf("Enter %d elements \n",len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are :\t");
	for(i=0;i<len;i++)
	{
		printf("\t%d",a[i]);
	}
	
	printf("\nenter position : ");
	scanf("%d",&pos);
	printf("\nArray elements are after deletion :\n");
	delete1(a,pos,&len);
	for(i=0;i<len;i++)
	{
	printf("%d\t",a[i]);	
	}
	
     return 0;
	
}