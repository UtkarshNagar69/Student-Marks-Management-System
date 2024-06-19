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
	int tt;
	float pt;
	p=fopen("students.db","r");
	if(p==NULL)
	{
		printf("File Not Found...");
	}
	else
	{
		printf("\t\t\t\t\t\tList of Students\n");
		printf("\t\t\t\t\t-------------------------------\n");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		printf("Roll No.\tName\t\tPhysics\t\tChemistry\tMaths\t\tTotal Marks\tPercentage\tGrade\n");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
		while(!feof(p))
		{
			fread(&S,sizeof(S),1,p);
			if(feof(p)) break;
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
			else if(pt<=60 && pt>=37)
			{
				g='C';
			}
			else if(pt<=40 && pt>=0)
			{
				g='F';
			}
			
			printf("%d\t\t%s\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\t\t%c\n",S.rn,S.name,S.p,S.c,S.m,tt,pt,g);
		}
	}
	fclose(p);
}