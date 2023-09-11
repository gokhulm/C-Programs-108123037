/*This program is used to check if 3 numbers are equal*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c)
	printf("Equal");
	else
	printf("Not equal");
}
