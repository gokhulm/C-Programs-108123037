//Program to manually copy string 2 to string 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char a[100];
	char b[100];
	printf("Enter string 1 ");
	scanf("%s",a);
	printf("Enter string 2 ");
	scanf("%s",b);
	while ((a[i]||b[i])!='\0')
	{
	if (b[i]!='\0')
	a[i]=b[i];
	else
	a[i]='\0';
	i++;
	}
	i=0;
	while (a[i]!='\0')
	{
		if (a[i]!='\0')
		printf("%c",a[i]);
		i++;
	}	
	return 0;
}
