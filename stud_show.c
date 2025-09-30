#include "header.h"


void show_record(ST *ptr)
{
	if(ptr==0)
	{
		printf("No Record Found\n");//record not found
		return;
	}
	  printf(" --------- ---------------------- ------------ \n");
	  printf("| %-7s | %-20s | %-10s |\n","ROLL NO","NAME","PERCENTAGE");
	  printf(" --------- ----------------- ------------ \n");
	while(ptr!=0)
	{
          printf("| %-7d | %-20s | %-10.2f |\n",ptr->rollno,ptr->name,ptr->mark);
	  ptr=ptr->next;
	}
	  printf(" --------- ---------------------- ------------ \n");
}
