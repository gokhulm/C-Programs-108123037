//This program is for finding the length of a number
#include <stdio.h>
int main()
{
	int n,i,l;
	printf("Enter N");
	scanf("%d",&n);
	while (n>0)
	{
		l+=1;
		n/=10;
	}
	printf("The length of the number is %d",l);
	return 0;
}
