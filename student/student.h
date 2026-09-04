#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define pf printf
#define sf scanf

typedef struct student
{
	int rollno;
	char name[30];
	float percent;
	struct student *next;
}stu;

void addData(stu **);
void delData(stu **);
void showData(stu *);
void modData(stu *);
void saveData(stu *);
void sortData(stu *);
void delete_all(stu **);
void revLinks(stu **);


void display(stu *);
int count(stu *p);
