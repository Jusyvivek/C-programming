#include<stdio.h>
#include<conio.h>
void main()
{       int no,pn,ticket;
	clrscr();
	printf("\n\t***SHAHADA TO KHETIYA***");
	printf("\n1.Shahada to Shahada is=0");
	printf("\n2.Shahada to Lonkheda is 10/-");
	printf("\n3.Shahada to Bamanpuri is 20/-");
	printf("\n4.Shahada to Sultanpuris 25/-");
	printf("\n5.Shahada to Khetiya is 30/-");
	printf("\nEnter the Village No:");
	scanf("%d",&no);

	switch(no)
		{
			case 1:
				printf("\n\tSHAHADA");
				printf("\nEnter the Passenger Number:");
				scanf("%d",&pn);
			break;

			case 2:
				printf("\n\tLONKHEDA");
				printf("\nEnter the Passenger Number:");
				scanf("%d",&pn);
				ticket=10*pn;
				printf("\nTicket=%d",ticket);
			break;

			case 3:
				printf("\n\tBAMANPURI");
				printf("\nEnter the Passenger Number:");
				scanf("%d",&pn);
				ticket=20*pn;
				printf("\nTicket=%d",ticket);
			break;

			case 4:
				printf("\n\tSULTANPUR");
				printf("\nEnter the  Passenger Number:");
				scanf("%d",&pn);
				ticket=25*pn;
				printf("Ticket=%d",ticket);
			break;

			case 5:
				printf("\n\tKHETIYA");
				printf("\nEnter the Passenger Number:");
				scanf("%d",&pn);
				ticket=30*pn;
				printf("\nTicket=%d",ticket);
			break;

			default:
				printf("Invalid Village Number:");
			break;
		}

	getch();
}
