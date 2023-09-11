/*Program to perform basic arithmetic operations on 2 numbers*/
#include<stdio.h>
int main()
{
	int d; 
	float a,b,c;
	printf("Enter values of a and b");
	scanf("%f %f",&a,&b);
	c=a*b;
	d=c;
	printf("Product of a and b as a floating number is %f \n",c);
	printf("Product of a and b as an integer is %d \n",d);
	return 0;
}

