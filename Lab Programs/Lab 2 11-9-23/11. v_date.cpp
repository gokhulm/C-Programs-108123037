/*Program to check if a given date is valid or not*/
#include<stdio.h>
int main()
{
	int d,m,y,v,c;
	printf("Enter day number");
	scanf("%d",&d);
	printf("Enter month number");
	scanf("%d",&m);
	printf("Enter year number");
	scanf("%d",&y);
	if (m<1 || m>12)
	c=0;
	else if ((y%4==0)&&(y%100!=0 || y%400==0))
	{
		{
			if (m==2)
			v=29;
			else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			v=31;
			else
			v=30;
		}
	}
	else
	{
		{
			if (m==2)
			v=28;
			else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			v=31;
			else
			v=30;
		}
	}	
	if (d<=0||d>v)
	c=0;
	else
	c=1;
	if (c!=0)
	{
		if (d==v && m==12)
		printf("%d %d %d",(d+1-v),(m-11),(y+1));
		else if (d==v && m!=12)
		printf("%d %d %d",(d+1-v),(m+1),y);
		else
		printf("%d %d %d",(d+1),m,y);
	}
	else
	printf("Invalid input");
}
