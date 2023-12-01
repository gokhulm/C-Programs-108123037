//Program to manually reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],d;
	printf("Enter string ");
	scanf("%s",a);
	int l=0,i=0;
	while (a[i]!='\0')
	{
	l+=1;
	i++;
	}
	i=0;
	for (i=0;i<((l-1)/2);i++)
	{
		d=a[i];
		a[i]=a[l-i-1];
		a[l-1-i]=d;
	}
	printf("%s",a);
}
