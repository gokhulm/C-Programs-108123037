//Program to sort an unsorted array of integers in ascending order
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
	
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1-i;j++)
		{
			if (a[j]>a[j+1])
			{
				a[j+1]+=a[j];
				a[j]=a[j+1]-a[j];
				a[j+1]-=a[j];
			}
		}
	}
	printf("Sorted array is { ");
	for (i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}	
	printf("}");
	
	return 0;
}

