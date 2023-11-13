//Program to print the first occurance of a character in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],s,b=1;
	int i=0;
	printf("Enter string ");
	gets(a);
	printf("Enter character to search for ");
	scanf("%c",&s);
	while (a[i]!='\0')
 	{
 		if (a[i]==s)
 		{
 		printf("%c found at %d index",s,i);
 		b=0;
 		break;
 		}
 	i++;
 	}
 	if (b)
 	printf("Not found");	
 	return 0;
}
