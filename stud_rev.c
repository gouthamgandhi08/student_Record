#include "header.h"

void reverse_record(ST **hptr)
{
	if(*hptr==0)	
	{
		printf("No record found to reverse\n");
		return ;	
	}
	ST *ptr;
	int i,j,c=node_count(*hptr);
	ST **p=(ST**)malloc((c+1)*sizeof(ST));
	ptr=*hptr;
	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;
	}
	*hptr=p[c-1];
	for(i=c-1;i>=0;i--)
	{
		if(i==0)
			p[i]->next=0;
		else
			p[i]->next=p[i-1];
	}
	printf("Student record are reversed Successfully\n");
}
