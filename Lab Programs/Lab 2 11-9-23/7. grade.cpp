/*Program to find the grade of a student in 5 subjects*/
#include<stdio.h>
int main()
{
	int a[5];
	int i;
	printf("Marks in Physics");
	scanf("%d",&a[0]);
	printf("Marks in Chemistry");
	scanf("%d",&a[1]);
	printf("Marks in Biology");
	scanf("%d",&a[2]);
	printf("Marks in Mathematics");
	scanf("%d",&a[3]);
	printf("Marks in Computer");
	scanf("%d",&a[4]);
	for (i=0;i<5;i++)
	{	
	if (a[i]>=90)
	printf("A grade \n");
	else if (a[i]>=80 && a[i]<90)
	printf("B grade \n");
	else if (a[i]>=70 && a[i]<80)
	printf("C grade \n");
	else if (a[i]>=60 && a[i]<70)
	printf("D grade \n");
	else if (a[i]>=40 && a[i]<60)
	printf("E grade \n");
	else if (a[i]<40)
	printf("F grade \n");
	}
	return 0;
}
	/*printf("Marks in Chemistry");
	scanf("%d",&b);
	if (b>=90)
	print("A grade");
	else if (b>=80 && b<=90)
	print("B grade");
	else if (b>=70 && b<=80)
	print("C grade");
	else if (b>=60 && b<=70)
	print("D grade");
	else if (b>=40 && b<=60)
	print("E grade");
	else if (b<40)
	print("F grade");
	
	printf("Marks in Biology");
	scanf("%d",&c);
	if (c>=90)
	print("A grade");
	else if (c>=80 && c<=90)
	print("B grade");
	else if (c>=70 && c<=80)
	print("C grade");
	else if (c>=60 && c<=70)
	print("D grade");
	else if (c>=40 && c<=60)
	print("E grade");
	else if (c<40)
	print("F grade");
	
	printf("Marks in Mathematics");
	scanf("%d",&d);
	if (d>=90)
	print("A grade");
	else if (d>=80 && d<=90)
	print("B grade");
	else if (d>=70 && d<=80)
	print("C grade");
	else if (d>=60 && d<=70)
	print("D grade");
	else if (d>=40 && d<=60)
	print("E grade");
	else if (d<40)
	print("F grade");
	
	printf("Marks in Computer");
	scanf("%d",&e);
	if (e>=90)
	print("A grade");
	else if (e>=80 && e<=90)
	print("B grade");
	else if (e>=70 && e<=80)
	print("C grade");
	else if (e>=60 && e<=70)
	print("D grade");
	else if (e>=40 && e<=60)
	print("E grade");
	else if (e<40)
	print("F grade");
	
}*/
