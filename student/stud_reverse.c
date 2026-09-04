#include"student.h"

void revLinks(stu **ptr)
{
	stu *prev=NULL,*curr,*next=NULL;
	curr=*ptr;

	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	*ptr=prev;


}
