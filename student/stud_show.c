#include"student.h"
void showData(stu *ptr)
{
	if(ptr==0)
	{
	 pf("\nNo data available\n");
	 return;
	}

        pf("\033[36mRoll no\t\tName\t\tPercent\033[0m\n");
	while(ptr!=0)
	{
		pf("\033[33m%d\t\t%s\t\t%.3f\033[0m\n",ptr->rollno,ptr->name,ptr->percent);
		ptr=ptr->next;
	}
}
