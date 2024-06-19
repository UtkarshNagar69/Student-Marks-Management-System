#include<stdio.h>
typedef struct Student
{
	int rn;
	char name[30];
	int p,c,m;
}STD;

void main()
{
	STD S;
	FILE *p;
	char ch;
	p=fopen("students.db","r");
	if(p==NULL)
	{
		p=fopen("students.db","w");
	}
	else 
	{
		p=fopen("students.db","a");
	}
	do
	{
		printf("Enter Student Rollno :");
		scanf("%d",&S.rn);
		printf("Enter Student Name :");
		fflush(stdin);
		gets(S.name);
		printf("Enter Student Physics Marks :");
		scanf("%d",&S.p);
		printf("Enter Student Maths Marks :");
		scanf("%d",&S.m);
		printf("Enter Student Chemistry Marks :");
		scanf("%d",&S.c);
		
		fwrite(&S,sizeof(S),1,p);
		printf("Do you want to Add More Students ? \nY/N\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y'|| ch=='Y');
	
	fclose(p);


}

