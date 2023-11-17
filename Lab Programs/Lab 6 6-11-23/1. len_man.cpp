//Program to find the length of a string without "strlen"
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	printf("Enter string ");
	scanf("%s",ch);
	int l=0,i=0;
	while (ch[i]!='\0')
	{
	l+=1;
	i++;
	}
	printf("%d",l);	
	return 0;
}
