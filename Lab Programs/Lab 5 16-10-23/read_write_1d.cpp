//Program to write and read array in 1D
#include<stdio.h>
int main()
{
	int n,i,v,j;
	printf("Enter value of n ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
	printf("Enter value of a[%d] ",i);
	scanf("%d",&v);
	a[i]=v;
	}
	for (i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	return 0;
}
