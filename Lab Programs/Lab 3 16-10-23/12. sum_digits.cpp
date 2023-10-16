//Program to find sum of digits of a number
#include<stdio.h>
#include<math.h>
int main()
{
	int s=0,n,d,i,l,m;
	printf("Enter number");
	scanf("%d",&n);
	m=n;
	while (m>0)
	{
		l+=1;
		m/=10;
	}
	for (i=0;i<=l;i++)
	{
		d=int(n/pow(10,i))%10;
		s+=d;
	}
	printf("%d is the sum of digits of number %d",s,n);
	return 0;
}
