#include"student.h"

void save_exit(stu *ptr)
{
	if(ptr==NULL)
		{
			pf("No data found\n");
			return ;
		}
        pf("\033[34m**************************\n");

	FILE *fp;
	
	fp=fopen("student.dat","w");

        while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percent);
		ptr=ptr->next;
	}
	pf("Data saved in file\n");

	pf("**************************\033[0m\n");
	fclose(fp);
}

void saveData(stu *ptr)
{
 char ch;
 pf("\033[32mS/s:Save and exit\nE/e:Exit without saving\033[0m\n");
 sf( " %c",&ch);

 switch(ch)
 {
	 case 's':
	 case 'S':save_exit(ptr);
	 break;

	 case 'e':
	 case 'E':exit(0);
	 break;

	 default:pf("Enter proper data\n");
	 break;
 }
}
