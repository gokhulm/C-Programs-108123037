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
