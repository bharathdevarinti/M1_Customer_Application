#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include"searchcustaccount.h"

void searchcustaccount()
{
	FILE *f;
	char accountnumber[20];

	f=fopen("c:/file.ojs","rb+");
	if(f==0)
		exit(0);
	
	system("cls");
	printf("Enter Account Number to search in our database");
	scanf("%4s", accountnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.accountnumber,accountnumber)==0)
		{	system("cls");
			printf(" Record Found ");
			printf("\n\naccountnumber: %s\nName: %s\nAmount: Rs.%0.2f\n%s\nStreet: ",s.accountnumber,s.name,s.amount,s.street);
			
			break;
		}
		else 
		{	system("cls");
			printf("Requested mobile Number Not found in our database");
		}
	}
	getch();
	fclose(f);
}