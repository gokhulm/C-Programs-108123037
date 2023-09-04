/*Program to find total salary*/
#include<stdio.h>
int main()
{
	int b,t;
	printf("Enter basic salary");
	scanf("%d",&b);
	t=b+61*b/100;
	printf("Total salary is %d",t);
}
