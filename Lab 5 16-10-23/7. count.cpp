//Program to find the count of a given element
#include<stdio.h>
int main()
{
	int n,i,v,k,c=0;
	printf("Enter value of n ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
	printf("Enter value of a[%d] ",i);
	scanf("%d",&v);
	a[i]=v;
	}
	printf("Enter element to find count of ");
	scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		if (k==a[i])
		c+=1;
	}
	printf("%d was found %d times",k,c);
	return 0;
}
