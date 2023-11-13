//Program to manually lowercase words
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,n;
	char a[100];
	printf("Enter string 1 ");
	scanf("%s",a);
	while(a[i]!='\0')
	{
		n=a[i];
		if (n<=90 && n>=65)
		a[i]= (n+32);
		i++;
	}
	i=0;
	printf("%s",a);
	return 0;
}
	
