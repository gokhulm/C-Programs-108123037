//Program to check if a number is a palindrome or not
#include<stdio.h>
#include<math.h>
int main()
{
	int o=0,n,d,i,l,m;
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
		o+=d*pow(10,(l-i-1));
	}
	if (n==o)
	printf("%d is a palindrome number",n);
	else
	printf("%d is not a palindrome number",n);
	return 0;
}
