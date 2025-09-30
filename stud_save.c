#include "header.h"

void save_record(ST *hptr)
{
	if(hptr==0)
	{
		printf("No record Available to save:Record is empty\n");
		return;
	}
	FILE *fp=fopen("student.dat","w");
	while(hptr!=0)
	{
		fprintf(fp,"%d %s %.2f\n",hptr->rollno,hptr->name,hptr->mark);
		hptr=hptr->next;
	}
	fclose(fp);
	printf("Student Record are successfully saved\n");
}
