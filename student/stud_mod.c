#include"student.h"

void mod_by_rn(stu *p)
{
	stu *temp=p;
	int rn;
	pf("\nPlease enter the roll number to be modified:\n");
	sf("%d",&rn);

	if(p==NULL)
	{
		pf("\nNo data found\n");
		return;
	}

	while(temp!=0)
	{
            if(temp->rollno==rn)
	    {
		    pf("\nEnter the new data:\n");
		    sf("%s%f",temp->name,&temp->percent);
		    return;
	    }
	    temp=temp->next;
	}
	pf("\nRoll number does not match\n");
}


void mod_by_name(stu *p)
{
       stu *temp=p;
       int count=0;
       char name[30];
       pf("\nPlease enter the name to be modified:\n");
       sf("%s",name);
 
       if(p==NULL)
       {
                pf("\nNo data found\n");
                return;
        }

	while(temp!=0)
	{
	      if(!(strcmp(temp->name,name)))
	           count++;
	      temp=temp->next;
	}
	temp=p;

	if(count==0)
	{
		pf("\nName does not match\n");
		return;
	}

        if(count==1)
	{
        while(temp!=0)
        {
            if(!(strcmp(temp->name,name)))
	    {
                    pf("\nEnter the new data:\n");
                    sf("%s%f",temp->name,&temp->percent);
                    return;
             }
            temp=temp->next;
        }
        }
	else
	{
		pf("\nMultiple existence of name\n");
		while(temp!=0)
		{
			if(!(strcmp(temp->name,name)))
				display(temp);

			temp=temp->next;	
		}
		mod_by_rn(p);
	}
}

void mod_by_perc(stu *p)
{
       stu *temp=p;
       int count=0;
       float perc;
       pf("\nPlease enter the percentage to be modified:\n");
       sf("%f",&perc);

       if(p==NULL)
        {
                 pf("\nNo data found\n");
                 return;
         }

         while(temp!=0)
         {
               if(temp->percent==perc)
                    count++;
               temp=temp->next;
         }
         temp=p;

          if(count==0)
          {
                  pf("\nPercentage does not match\n");
                 return;
             }

         if(count==1)
        {
        while(temp!=0)
        {
            if(temp->percent==perc)
             {
                     pf("\nEnter the new data:\n");
                     sf("%s%f",temp->name,&temp->percent);
                     return;
              }
             temp=temp->next;
        }
        }
        else
        {
                pf("\nMultiple existence of percentage\n");
                while(temp!=0)
                {
                        if(temp->percent==perc)
                                 display(temp);

			temp=temp->next;	 
                }
                mod_by_rn(p);
         }
 }


void modData(stu *ptr)
{
	char ch;
	pf("\033[31mEnter which record to search for modification\033[0m\n\033[32mR/r:Search by roll no\nN/n:Search by name\nP/p:Search by percentage\033[0m\n");
	sf(" %c",&ch);

	switch(ch)
	{
		case 'r':
		case 'R':mod_by_rn(ptr);
		break;

		case 'n':
		case 'N':mod_by_name(ptr);
		break;

		case 'p':
		case 'P':mod_by_perc(ptr);
		break;

		default:pf("Invalid choice\n");
	}
}
