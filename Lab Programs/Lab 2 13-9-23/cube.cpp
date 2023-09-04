/*Program to find the cube of a number*/
#include<stdio.h>
#include<math.h>
int main()
{
	float n,c;
	printf("Enter number");
	scanf("%f",&n);
	c=pow(n,3);
	printf("Cube is %f",c);
	return 0;
}
