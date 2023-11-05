//Program to find sum of digits of a number
#include<stdio.h>
int main()
{
	int s=0,n,i,m;
	printf("Enter number");
	scanf("%d",&n);
	m=n;
	while (m>0)
	{
		s+=m%10;
		m/=10;	
	}
	printf("%d is the sum of digits of number %d",s,n);
	return 0;
}
