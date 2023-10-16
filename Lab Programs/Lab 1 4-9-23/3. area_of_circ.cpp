/*Program to find the area of a circle*/
#include<stdio.h>
#include<math.h>
int main()
{
	float r,a;
	printf("Enter the radius of the circle");
	scanf("%f",&r);
	a=3.14*pow(r,2);
	printf("The area is %f",a);
	return 0;
}
