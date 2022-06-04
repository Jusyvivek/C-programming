#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,temp=0,sum=0;
	clrscr();
	printf("\nEnter the Number n:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("\n%d",sum);
	if(temp==sum)
	{
		printf("\nThe is Palindrome Number:");
	}
	else
	{
		printf("\nThe is Not Palindrome Number:");

	}
	getch();

}