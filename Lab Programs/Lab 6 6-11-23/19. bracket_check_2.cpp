//Program to see if brackets are closed properly
#include<stdio.h>
#include<string.h>
int main()
{
	char o[]={'(','[','{','<'},c[]={')',']','}','>'},a[100],m;
	int i,l,j,b=0,k=0,u,y=0,n;
	printf("Enter string ");
	gets(a);
	l=strlen(a);
	char t[l],x[l],v[l];
	for (i=0;i<l;i++)
	{
		for (j=0;j<4;j++)
		{
			if (o[j]==a[i])
			{
				m=a[i];
				t[k]=m; //Array of opening brackets
				x[k]=i; //Array of corresponding index in original string
				k++;
				printf("t[%d]=%c \n",k,m);
			}
			if (c[j]==a[i])
			{
				v[y]=a[i];
				y++;
				printf("v[%d]=%c \n",y,a[i]);
			}
		}
	}
	if (y!=k)
	b=0;
	else
	{
	n=k;
	k--;
	for (u=0;u<n;u++)
	{	
		b=0;
		printf("k=%d u=%d \n",k,u);
		for (i=x[k]+1;i<l;i++)
		{
			printf("New iteration for i starts from %d \n",i);
			for (j=0;j<4;j++)
			{
				if (c[j]==a[i]) //If encounters closing bracket
					{	
					if (m!=o[j]) //And is not corresponding last opening bracket
						{
						b=0;
						break;  //Terminate from 2nd for loop if not
						}
					else if (m==o[j])
						{
						printf("For opening bracket %c, found closing bracket %c at index %d\n",t[k],a[i],i);
						printf("Success for t[k]=%c\n",t[k]);
						k-=1;
						m=t[k];	// Success
						b=1;
						break;	
						}
					}
			if (b==1)
				break;
			}
		if (b==1)
			break;
		}
		if (b==0)
			break;
	}
	}
	if(b)
	printf("Valid");
	else
	printf("Not valid");
	return 0;
}

