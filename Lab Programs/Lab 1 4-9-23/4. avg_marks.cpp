/*Program to find the percentage of a student given 5 marks*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float f;
	printf("Marks in subject 1");
	scanf("%d",&a);
	printf("Marks in subject 2");
	scanf("%d",&b);
	printf("Marks in subject 3");
	scanf("%d",&c);
	printf("Marks in subject 4");
	scanf("%d",&d);
	printf("Marks in subject 5");
	scanf("%d",&e);
	f=float(a+b+c+d+e)/5;
	printf("The average marks is %f",f);
	return 0;
}
