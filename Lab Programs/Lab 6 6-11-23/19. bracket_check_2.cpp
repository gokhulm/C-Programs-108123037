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
	for (i=0;i<l;i++)
	{
		for (j=0;j<4;j++)
			if (o[j]==a[i])
			{
				m=a[i];
			}
		printf("%c",m);
	}
	return 0;
}

