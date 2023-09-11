/*To convert various metric units of length*/
#include<stdio.h>
int main()
{
	float k,m,c,M;
	printf("Enter number of kilometres");
	scanf("%f",&k);
	m=k*1000;
	c=k*100000;
	M=k*1000000;
	printf("%f %f %f",m,c,M);
	return 0;
}
