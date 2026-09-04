#include"student.h"

void delete_all(stu **ptr)
{
	if(*ptr==0)
	{
		pf("No data found\n");
		return;
	}

	stu *d=*ptr;

	while(d!=0)
	{
		*ptr=d->next;
		free(d);
		d=*ptr;
	}
        *ptr=NULL;
	pf("All nodes deleted successfully\n");
}
