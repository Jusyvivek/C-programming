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

	if(c>=200)
	{
		printf("\nThe Sum is Greater than the 200");

	}
	else
	{
		printf("\nThe Sum is Not Greater than the 200");
	}
	getch();

}