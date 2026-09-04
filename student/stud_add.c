#include"student.h"
void addData(stu **ptr)
{
	stu *new,*temp,*prev;
	int pos=1;
	new=malloc(sizeof(stu));
	pf("\nEnter the name and Percentage:");
	sf("%s%f",new->name,&new->percent);

	new->next=NULL;

	if(*ptr==NULL)
	{
		*ptr=new;
		new->rollno=1;
		return;
	}
	
		
	temp=*ptr;
	prev=NULL;

	while(temp!=NULL)
	{
	    if(temp->rollno!=pos)
		{
			new->rollno=pos;

			if(prev==NULL)
			{
				new->next=*ptr;
				*ptr=new;
				return;
			}

                       else
		       {
			new->next=temp;
			prev->next=new;
			return;
		       }
		}
		 pos++;
                 prev=temp;
                 temp=temp->next;

	}

	new->rollno=pos;
	prev->next=new;
}
