//Program to see if brackets are closed properly
#include<stdio.h>
#include<string.h>
int main()
{
	char o[]={'(','[','{','<'},c[]={')',']','}','>'},a[100],m;
	int i,l,j,b=1,k=0;
	printf("Enter string ");
	scanf("%s",a);
	l=strlen(a);
	char t[l];
	m=a[0];
	for (i=0;i<l;i++)
	{
		for (j=0;j<4;j++)
		{
		if (o[j]==a[i])
		{
			m=a[i];
			t[k]=m;
			k++;
		}
		}
		for (j=0;j<4;j++)
		{
		if (c[j]==a[i])
			if (m!=o[j])
			{
				printf("Not valid");
				b=0;
				break;
			}
			else
			{
			k-=2;
			m=t[k];
			}
		}	
	}
	for (j=0;j<4;j++)
		if (c[j]!=a[l])
			b=0
	if (b)
	printf("Valid");
	return 0;
}
