//This program is for printing even numbers from 1 to N
#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter N");
	scanf("%d",&n);
	for (i=2;i<=n;i+=2)
	printf("%d ",i);
	return 0;
}
