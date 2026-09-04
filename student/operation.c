#include"student.h"

void display(stu *p)
{
	pf("\033[32m%d %s %f\033[0m\n",p->rollno,p->name,p->percent);
}

int count(stu *p)
{
	int count=0;

	stu *temp=p;
	while(temp!=0)
	{
		count++;
	temp=temp->next;
	}
	return count;
}


