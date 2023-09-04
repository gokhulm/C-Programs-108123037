/*Program to perform basic arithmetic operations on 2 numbers*/
#include<stdio.h>
int main()
{
	int c,d,e; 
	float a,b,f;
	printf("Enter values of a and b");
	scanf("%f %f",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("Sum of a and b is %d \n",c);
	printf("Difference of a and b is %d \n",d);
	printf("Product of a and b is %d \n",e);
	printf("Division of a and b is %f \n",f);
}

