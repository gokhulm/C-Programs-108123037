//Program to compare two strings manually
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i=0,l=0,c=1,m=0;
	printf("Enter string ");
	gets(a);
	printf("Enter string ");
	gets(b);
	while (a[i]!='\0')
	{
	l+=1;
	i++;
	}
	i=0;
	while (b[i]!='\0')
	{
	m+=1;
	i++;
	}
	i=0;
	if(l==m)
	{
	while (a[i]!='\0')
	{
	if (a[i]!=b[i])
	{
		printf("Not equal");
		c=0;
		break;
	}
	i++;
	}
	if (c)
	printf("Equal");
	}
	else
	printf("Not equal");
	return 0;
}
