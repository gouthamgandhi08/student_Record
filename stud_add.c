#include "header.h"
int find_roll(ST *ptr)
{
	ST *cur;
	cur=ptr;
	int c=1;
	if(ptr==0)
		return c;
	else
	{
		while(ptr!=0)
		{
			if(ptr->rollno == c)
			{
				c++;
				ptr=cur;
			}
			else
				ptr=ptr->next;
		}	
		return c;
	}
}
void add_record(ST **ptr)
{
	ST *temp=(ST*)malloc(sizeof(ST));
	ST *last;
	int count=0;
	printf("Enter the name:");
	scanf(" %[^\n]s",temp->name);
	printf("Enter the percentage:");
	scanf("%f",&temp->mark);
	int roll=find_roll(*ptr);
	temp->rollno = roll;
        if((*ptr == 0)||(temp->rollno == 1))
	{
		temp->next = *ptr;
		*ptr = temp;
	}
        else 
	{
	    last=*ptr;
	    while(last!=0)
	    {
		    if(last->rollno == (roll-1))
			    break;
		    last=last->next;
	    }
	    temp->next=last->next;
	    last->next=temp;

	}	
}
