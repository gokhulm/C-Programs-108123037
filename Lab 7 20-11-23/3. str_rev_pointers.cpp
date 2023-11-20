//Program to reverse a string with pointers
#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char a[100];
	printf("Enter string ");
	scanf("%s",a);
	char *p=a;
	l=strlen(a);
	for (i=0;i<(l-1)/2;i++)
	{
		char t;
		t=*(p+i);
		*(p+i)=*(p+l-i-1);
		*(p+l-i-1)=t;
	}
	printf("%s",a);
	return 0;
}
