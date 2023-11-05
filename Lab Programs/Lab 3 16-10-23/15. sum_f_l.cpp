//Program to find the sum of first and last digit
#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0,n,first,last,len,m;
	printf("Enter number");
	scanf("%d",&n);
	m=n;
	while (m>0)
	{
		len+=1;
		m/=10;
	}
	last=n%10;
	first=int(n/pow(10,len-1));
	sum+=first+last;
	printf("%d is the sum of first and last digit",sum);
	return 0;
}
