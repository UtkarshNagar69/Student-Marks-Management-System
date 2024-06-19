#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ch,f;
	do
	{
		system("cls");
		printf("Main Menu\n1] Insert Details\n2]Display All\n3] Searching\n4] Exit\n");
		printf("Choose option to Perform:");
		scanf("%d",&ch);
		system("cls");
		switch(ch)
		{
			case 1:
				system("InsertRecord");
				break;
			case 2:
				system("DisplayStudentDetails");
				break;
			case 3:
				system("Search");
				break;
			case 4:
				printf("Good Bye !!");
				break;
			default:
				printf("Worng Option!!!\a\n");
		}
		printf("\n\n\t\t\t\t\t\tPress Any key to Continue....");
		printf("\n\n\t\t\t\t\tThis Program is Created By:-Utkarsh Nagar");
		fflush(stdin);
		scanf("%c",&f);
	}while(ch!=4);
}