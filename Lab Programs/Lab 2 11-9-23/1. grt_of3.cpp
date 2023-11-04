/*Program to find the greatest of 3 numbers*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the 3 numbers \n");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b) 
	{
		if (a>c) 
			d=a;
		else
			d=c;
	}
	else
	{
		if (b>c)
		d=b;
		else
		d=c;
	}
	printf("The greatest is %d",d);
}
