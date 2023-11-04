//Program to get sum of 2 matrices represented as arrays in 2D
#include<stdio.h>
int main()
{
	int n,i,v,j,m,k;
	printf("Enter value of m ");
	scanf("%d",&m);
	printf("Enter value of n ");
	scanf("%d",&n);
	int a[m][n],c[m][n]={};
	for (k=97;k<99;k++)
	{
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("Enter value of %c[%d][%d] ",k,i,j);
			scanf("%d",&v);
			a[i][j]=v;
			c[i][j]+=a[i][j];
		}
	}
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{	
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
