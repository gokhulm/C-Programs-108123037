//Program to print the vowels in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char v[]={'a','e','i','o','u'},a[100];
	int c=0,i,j,l;
	printf("Enter string ");
	scanf("%s",a);
	l=strlen(a);
	while (a[i]!='\0')
	{
		for(i=0;i<l;i++)
		for(j=0;j<5;j++)
		if (v[j]==a[i])
		{
			c=1;
			printf("%c",v[j]);
		}
	}
	if (c==0)
	printf("No vowels");
	return 0;	
}
