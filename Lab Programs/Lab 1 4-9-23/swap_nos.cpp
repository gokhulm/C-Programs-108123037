/*Program to swap 2 numbers*/
#include <stdio.h>
int main()
{
	int a,b,t;
	printf("Enter values to swap \n");
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("Swapped numbers are %d %d",a,b);
	return 0;
}
