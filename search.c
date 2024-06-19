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
	char ch,g;
	int tt,rn,found=0;
	float pt;
	p=fopen("students.db","r");
	if(p==NULL)
	{
		printf("File Not Found...");
	}
	else
	{
		printf("Enter Student Roll Number that you want to Search:");
		scanf("%d",&rn);
		printf("\t\t\t\t\t\tList of Students\n");
		printf("\t\t\t\t\t-------------------------------\n");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("Roll No.\tName\t\tPhysics\t\tChemistry\tMaths\t\tTotal Marks\tPercentage\tGrade\n");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		while(!feof(p))
		{
			fread(&S,sizeof(S),1,p);
			if(feof(p)) break;
			if(S.rn==rn)
			{
			tt=S.c+S.m+S.p;
			pt=tt/3;
			if(pt<=100 && pt>=80)
			{
				g='A';
			}
			else if(pt<=80 && pt>=60)
			{
				g='B';
			}
			else if(pt<=60 && pt>=30)
			{
				g='C';
			}
			printf("%d\t\t%s\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\t\t%c\n",S.rn,S.name,S.p,S.c,S.m,tt,pt,g);
			found=1;
			break;
		}
		}
		if(found==0)
		{
			printf("\t\t\t\t\t\tRoll No. Does not Exist!!\a ");
		}
	}
	fclose(p);
}