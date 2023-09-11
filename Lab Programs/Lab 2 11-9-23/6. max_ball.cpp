/*This program is used to find the maximum point value for each ball variation*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 point values");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	printf("%d",a);
	else if (b>c)
	printf("%d",b);
	else
	printf("%d",c);
}
