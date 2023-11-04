/*Program to swap two numbers without a third variable*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers to swap");
	scanf("%d %d",&a,&b);
	/*a=a+b;
	b=a-b;
	a=a-b;*/
	a=a*b;
	b=a/b;
	a=a/b;
	printf("%d %d",a,b);
	return 0;
}
