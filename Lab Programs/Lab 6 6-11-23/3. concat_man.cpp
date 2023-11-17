//Program to manually concatenate two strings
#include<stdio.h>
#include<string.h>
int main()
{
	int e=0,i=0;
	char a[100];
	char b[100];
	printf("Enter string 1 ");
	scanf("%s",a);
	printf("Enter string 2 ");
	scanf("%s",b);
	while(a[e]!='\0')
	e++;
	while(b[i]!='\0')
	{
	a[e]=b[i];
	e++;
	i++;
	}
	i=0;
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		i++;
	}
	return 0;
}
