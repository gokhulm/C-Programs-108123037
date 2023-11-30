//Program to input data, write it to INPUT, to read again
#include<stdio.h>
int main()
{
	FILE *fp;
	int n;
	fp=fopen("Z:/INPUT.txt","w");
	char str[100];
	gets(str);
	fwrite(str,1,sizeof(str),fp);
	n=ftell(fp);
	rewind(fp);
	printf(fread("%s",n,1,fp));
	fclose(fp);
}
