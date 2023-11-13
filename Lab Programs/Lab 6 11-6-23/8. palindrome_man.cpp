//Program to check if a string is a palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int c=0;
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
		if(a[i]==a[l-i-1])
		c=1;
		else
		c=0;
	}
	if(c)
	printf("%s is a palindrome",a);
	else
	printf("%s is not a palindrome",a);
	return 0;	
}
