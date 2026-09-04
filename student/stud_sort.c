#include"student.h"

void sort_by_name(stu *p)
{
	int i,j,c;

        stu *p1=p,*p2,t;
         c=count(p);
        for(i=0;i<c-1;i++)
        {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                         if(strcmp(p1->name,p2->name)<0)
                         {
				 t.rollno=p1->rollno;
				 strcpy(t.name,p1->name);
				 t.percent=p1->percent;

				 p1->rollno=p2->rollno;
				 strcpy(p1->name,p2->name);
				 p1->percent=p2->percent;

				 p2->rollno=t.rollno;
				 strcpy(p2->name,t.name);
				 p2->percent=t.percent;
			 }
			 p2=p2->next;
		}
		p1=p1->next;
	}
}
 
void sort_by_perc(stu *p)
  {
          int i,j,c;
         
          stu *p1=p,*p2,t;
           c=count(p);
          for(i=0;i<c-1;i++)
        {
                 p2=p1->next;
                 for(j=0;j<c-1-i;j++)
                 {
                          if(p1->percent<p2->percent)
                          {
                                   t.rollno=p1->rollno;
                                  strcpy(t.name,p1->name);
                                  t.percent=p1->percent;
    
                                 p1->rollno=p2->rollno;
                                 strcpy(p1->name,p2->name);
                                 p1->percent=p2->percent;

                                 p2->rollno=t.rollno;
                                strcpy(p2->name,t.name);
                                 p2->percent=t.percent;
                         }
                         p2=p2->next;
                }
                p1=p1->next;
        }
 }



void sortData(stu *ptr)
{
          if(ptr==NULL)
	  {
		  pf("Data is empty\n");
		  return;
	  }
	  char ch;

	  pf("\033[31mEnter the option\033[0m\n\033[32mN/n:Sort with name\nP/p:sort with percentage\033[0m\n");
          sf(" %c",&ch);

	  switch(ch)
	  {
		  case 'n':
		  case 'N':sort_by_name(ptr);
		  break;

		  case 'p':
		  case 'P':sort_by_perc(ptr);
		  break;

		  default:pf("Invalid option\n");
	  }
}

