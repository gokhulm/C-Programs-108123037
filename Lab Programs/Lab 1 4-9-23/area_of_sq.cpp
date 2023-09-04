/*Program to find the area of a square*/
#include<stdio.h>
#include<math.h>
int main()
{
	float s,a;
	printf("Enter the side of the square");
	scanf("%f",&s);
	a=pow(s,2);
	printf("The area of the square is %f",a);
	return 0;
}
