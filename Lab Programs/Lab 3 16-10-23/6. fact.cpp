//This program is for printing factorial of a number
#include <stdio.h>
int main()
{
	int n,i,f=1;
	printf("Enter N");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	f*=i;
	printf("%d ",f);
	return 0;
}
