//Program to remove duplicate elements from array
#include<stdio.h>
int main()
{
	int n,v,i,j,k,l,d=0,c=0;
	printf("Enter value of n ");
	scanf("%d",&n);
	int a[n];
	k=n;
	for (i=0;i<n-d;i++)
	{
	printf("Enter value of a[%d] ",i);
	scanf("%d",&v);
	a[i]=v;
	}
	for(i=0;i<n;i++)
	{
		for (j=i+1;j<n-1-d;j++)
		{
			if (a[i]==a[j])
			{
				for (l=j;l<n-1;l++)
					a[l]=a[l+1];
				k--;
				d++;
				c=1;
			}
		}
		if (c)
			i--;
	}
	for (i=0;i<k;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
	
