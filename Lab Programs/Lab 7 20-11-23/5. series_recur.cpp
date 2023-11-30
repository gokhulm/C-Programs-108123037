//Program to find sum of given series with recursion
#include<stdio.h>
int sum(int no,int A, int B, int C)
{
	int i=1,s=0,u,v,w,z;
	for (i=1;i<=no;i++)
	{
		switch(i)
		{
		case 1:
			{
			s=A;
			u=A;
			break;
			}
		case 2:
			{
			s+=B;
			v=B;
			break;
			}
		case 3:
			{
			s+=C;
			w=C;
			break;
			}
		default:
			{
			z=u+v+w;
			u=v;
			v=w;
			w=z;
			s+=z;
			}
		
		}
	}
	return s;
}
int main()
{
	int a,b,c,x,n;
	printf("Enter a,b,c ");
	scanf("%d %d %d",&a,&b,&c);
	printf("Enter n");
	scanf("%d",&n);
	x=sum(n,a,b,c);
	printf("%d",x);
	return 0;
	
}
