//Program to find average of elements of an array
#include<stdio.h>
float avge(int no,int *ptr)
{
	int sum=0,c=no;
	while(c>0)
	{
	sum+=*ptr;
	--c;
	++ptr;
	}
	return(float(sum)/float(no));
}
int main()
{
	int n,*p,i,v;
	float av;
	printf("Size of array: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter value ");
		scanf("%d",&v);
		a[i]=v;
	}
	p=a;	
	av=avge(n,p);
	printf("%f",av);

	return 0;
}
