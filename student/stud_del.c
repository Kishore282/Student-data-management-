#include"student.h"
void display(stu*);
void del_by_rn(stu **ptr)
{
	stu *temp,*prev=NULL;
	temp=*ptr;

	if(*ptr==NULL)
	{
		pf("List is empty\n");
		return;
	}

	int rn;
	pf("\nEnter the roll number:");
	sf("%d",&rn);

        while(temp!=0)
	{
	if(temp->rollno==rn)
	{
		if(temp==*ptr)
			*ptr=temp->next;

		else
			prev->next=temp->next;

		free(temp);
		return;
	}
	else
	{
	prev=temp;
	temp=temp->next;
	}
	}

     pf("\nRoll number not found\n");
}

void del_by_name(stu **ptr)
{
         stu *temp,*prev=NULL;
         temp=*ptr;
	 int count=0;
 
         if(*ptr==NULL)
         {
                 pf("List is empty\n");
                 return;
         }      
         
         char name[30];
         pf("\nEnter the name:");
         sf("%s",name);
         
         while(temp!=0)
         {
		 if(!strcmp(temp->name,name))
			 count++;
		temp=temp->next; 	 
	 }

	 if(count==0)
	 {
		 pf("\nNo name found\n");
		 return;
	 }

	 temp=*ptr;

         if(count==1)
	 {
	 while(temp!=0)
	 {
         if(!(strcmp(temp->name,name)))
         {
                 if(temp==*ptr)
                         *ptr=temp->next;
          
                 else
                         prev->next=temp->next;
          
                 free(temp);
                 return;
         }
         else
         {
         prev=temp;
         temp=temp->next;
         }
         }
	 }

	 else
	 {
            while(temp!=0)
	    {
		    if(!(strcmp(temp->name,name)))
                     display(temp);
		    
		    temp=temp->next;
	     }
	     pf("Multiple excistence of name\n");
             del_by_rn(ptr);
          }       
}

void delData(stu **ptr)
{
	char choice;
	pf("\n\033[34mR/r :Delete based on roll no\nN/n :Delete based on name\033[0m\n");
	sf(" %c",&choice);

	switch(choice)
	{
		case 'R':
		case 'r':del_by_rn(ptr);
		break;
		case 'N':
		case 'n':del_by_name(ptr);
		break;
		default:pf("\nEnter valid data\n");
	}
}




