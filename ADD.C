#include<stdio.h>
#include<conio.h>
void main()
{       int a,b,c;
	clrscr();

	printf("\nEnter the Number a:");
	scanf("%d",&a);

	printf("\nEnter the Number b:");
	scanf("%d",&b);

	c=a+b;
	printf("\nC=%d",c);

	if(c%2==0)
	{
		printf("\nYour Number is even");
	}
	else
	{
		printf("\nYour Number is odd");
	}
	getch();

}