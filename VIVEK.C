#include<stdio.h>
#include<conio.h>
void main()
{       int no;
	clrscr();
	printf("\nEnter the no:");
	scanf("%d",&no);
	if(no>=10)
	{
		printf("\n Your Number is Greater than 10");

	}
	else
	{
		printf("\nYour Number is Not Greater than 10");
	}
	getch();
}