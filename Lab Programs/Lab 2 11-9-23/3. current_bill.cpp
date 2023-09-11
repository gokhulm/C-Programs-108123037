/*This program is used to calculate current bill*/
#include<stdio.h>
int main()
{
	int u;
	float b;
	printf("Enter the amount of units used");
	scanf("%d",&u);
	if (u<=100)
	b=u*2+500;
	if (u<=250 && u>100)
	b=u*3.5+1000;
	if (u>250)
	b=u*5+1500;
	printf("Current bill is %f",b);
}
