//This program is for finding nth Fibonacci number
#include <stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter value of n");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;	
	}
	printf("%d is term number %d in Fibonacci sequence",a,n);
	return 0;
}
