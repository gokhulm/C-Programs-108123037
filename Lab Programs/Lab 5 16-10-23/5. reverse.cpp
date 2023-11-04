/*This program is for reversing an array*/
#include<stdio.h>
int main()
{
	int n,i,v;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
	printf("Enter value of a[%d] ",i);
	scanf("%d",&v);
	a[i]=v;
	}
	
	printf("Array before reversing is { ");
	for (i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	printf("}\n");
	
	for (i=0;i<((n/2));i++)
	{
		a[i]+=a[n-i-1];
		a[n-i-1]=a[i]-a[n-i-1];
		a[i]-=a[n-i-1];
	}
	
	printf("Array after reversing is { ");
	for (i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	printf("}");
	
	return 0;	
	
}
