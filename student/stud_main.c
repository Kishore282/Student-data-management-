#include<stdio.h>
#include"student.h"
 
void main()
{
	char choice;
	stu *head=0,*temp;

       while(1)
       {
	pf("\n\033[31m*****STUDENT RECORD MENU*****\033[0m\n");
        pf("-----------------------------\n");
        pf("\033[32ma/A :Add new record\nd/D :Delete a record\ns/S :show the list\nm/M :modify a record\nv/V :Save\ne/E :Exit\nt/T :sort the list\nl/L :delete all the records\nr/R :reverse the list\033[0m\n\n");

        pf("Enter your choice:\n");
	sf(" %c",&choice);

	switch(choice)
	{
		case 'a':
		case 'A':addData(&head);
		         pf("Data is added succesfully\n");
		break;
		case 'd':
		case 'D':delData(&head);
		         pf("Data is deleted successfully\n");
		break;
		case 's':
                case 'S':showData(head);
                break;
		case 'm':
                case 'M':modData(head);
		         pf("Data is modified successfully\n");
                break;
		case 'v':
                case 'V':saveData(head);
		         pf("Data is saved successfully\n");
                break;
		case 't':
                case 'T':sortData(head);
		         pf("Data is sorted successfully\n");
                break;
		case 'l':
                case 'L':delete_all(&head);
		         pf("Record is deleted successfully\n");
                break;
		case 'r':
                case 'R':revLinks(&head);
                break;
		case 'e':
		case 'E':exit(0);
		break;
		default:pf("Enter valid choice\n");
	}
      }
}
