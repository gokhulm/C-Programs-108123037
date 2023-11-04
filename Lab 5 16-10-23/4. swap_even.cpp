/*This program is for interchanging alternate elements in an even sized array*/
#include<stdio.h>
int main()
{
	int n,i,v,d=0;
	printf("Enter the size of array (even)");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
	printf("Enter value of a[%d] ",i);
	scanf("%d",&v);
	a[i]=v;
	}
	
	printf("Array before swapping is { ");
	for (i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	printf("}\n");
	
	for (i=0;i<n;i+=2)
	{
		d=a[i];
		a[i]=a[i+1];
		a[i+1]=d;
	}
	
	printf("Array after swapping is { ");
	for (i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	printf("}");
	
	return 0;	
	
}
