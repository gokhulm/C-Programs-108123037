/*Program to find total salary*/
#include<stdio.h>
int main()
{
	int b,t,r;
	printf("Enter basic salary");
	scanf("%d",&b);
	printf("Enter region");
	scanf("%d",&r);
	if (r==1)
	{
	t=b+27*b/100+16*b/100;	
	printf("Total salary is %d",t);
	}
	if (r==2)
	{
	t=b+24*b/100+12*b/100;
	printf("Total salary is %d",t);
	}
	
}
