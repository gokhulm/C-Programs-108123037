//Program to find the numbers at the kth positions
#include<stdio.h>
int main()
{
	int n,i,v,k,j;
	printf("Enter value of n");
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
	
	printf("Enter value of k ");
	scanf("%d",&k);
	
	printf("kth smallest element is: %d \n",a[k-1]);
	printf("kth largest is: %d",a[n-k]);
	return 0;
}
