//Program to write and read array in 2D
#include<stdio.h>
int main()
{
	int n,i,v,j,m;
	printf("Enter value of m ");
	scanf("%d",&m);
	printf("Enter value of n ");
	scanf("%d",&n);
	int a[m][n];
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("Enter value of a[%d][%d] ",i,j);
			scanf("%d",&v);
			a[i][j]=v;
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
