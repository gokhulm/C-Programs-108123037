//Program to find minimum, maximum and average of an unsorted array of integers
#include<stdio.h>
int main()
{
	int n,i,v,min,max,sum=0;
	float avg;
	printf("Enter value of n");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
	printf("Enter value of a[%d] ",i);
	scanf("%d",&v);
	a[i]=v;
	}
	min=a[0];
	max=a[0];
	for (i=0;i<n;i++)
	{
		if (a[i]<min)
		min=a[i];
		if (a[i]>max)
		max=a[i];
		sum+=a[i];
	}
	avg=float(sum)/float(n);
	printf("Average is %f\n",avg);
	printf("Minimum is %d\n",min);
	printf("Maximum is %d\n",max);
	return 0;
}
