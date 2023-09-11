/*Program to find the type of triangle given the length of sides*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c)
	printf("Equilateral");
	else if (a!=b && b!=c && a!=c)
	printf("Scalene");
	else
	printf("Isoceles");
}
