//GCD of two numbers using recursion
#include<stdio.h>
int gcd(int a,int b)
{
	static int div=1;
	int m=1,k=0;
	if (a==1 || b==1)
	{
		return div;
	}
	while (not(k)&&(m<a||m<b))
	{
		if((a%(m+1)==0)&&(b%(m+1)==0))
		{
		k=1;
		}
		m++;
	}
	if(k)
	div=m*gcd((a/m),(b/m));
	return div;
}
int main()
{
	int a,b,d;
	printf("Enter a and b ");
	scanf("%d %d",&a,&b);
	d=gcd(a,b);
	printf("%d",d);
	return 0;
}
