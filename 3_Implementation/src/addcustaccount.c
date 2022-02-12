#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include"addcustaccount.h"
void addcustaccount()
{
	FILE *f;
	f=fopen("c:/file.ojs","ab+");
	if(f==0)
	{   f=fopen("c:/file.ojs","wb+");
		system("cls");
		printf("please wait while we configure your computer");
		printf("/npress any key to continue");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Mobile number:");
		scanf("%4s",&s.mobilenumber);
	/**	if (sizeof(&s.mobilenumber)!=10)
	{
		printf("Mobile Numebr length should be 10 digits.");
			fclose(f);
			system("cls");
			printf("\nAny key to continue");
			getch();
	}**/
		printf("\n Enter name:");
		scanf("%4s",&s.name);
		printf("\n Account Number:");
		scanf("%d",&s.accountnumber);
		printf("\n Enter amount:");
		scanf("%f",&s.amount);
		printf("\n Enter Street:");
		scanf("%s",&s.street);
		fwrite(&s,sizeof(s),1,f);
		
		system("cls");
		printf("1 record successfully added");
		printf("\n Press esc key to exit, any other key to add other record:");
		char test;
		test=getche();
		if(test==27)
			break;
	}
	fclose(f);
}