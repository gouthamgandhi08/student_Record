#include "header.h"
int node_count(ST *ptr)
{
	int c=0;
	while(ptr!=0)
	{
		c++;
		ptr=ptr->next;
	}
	return c;

}
void sort_record(ST **hptr)
{
	if(*hptr == 0)
	{
		printf("No record found to sort\n");
		return ;
	}
	char ch;
	int i=0,size=sizeof(ST)-8,c=node_count(*hptr);
	sort_menu();
	printf("Enter your option:");
	scanf(" %c",&ch);
	ST* ptr;
	ptr=*hptr;
	ST **p=(ST**)malloc((c+1)*sizeof(ST*));
	ST temp;

	while(ptr!=0)
	{
		p[i++]=ptr;
		ptr=ptr->next;
	}
	if((ch == 'n')||(ch=='N'))
	{
		ptr=*hptr;
		for(int j=0;j<i-1;j++)
		{
			for(int k=j+1;k<i;k++)
			{
				if(strcmp(p[j]->name,p[k]->name)>0)
				{
					memcpy(&temp,p[j],size);
					memcpy(p[j],p[k],size);
					memcpy(p[k],&temp,size);
				}
			}
		}
		printf("student record is successfully sorted based on the name\n");
	   
	}
	else if((ch == 'p')||(ch=='P'))
	{
		ptr=*hptr;
		for(int j=0;j<i-1;j++)
		{
			for(int k=j+1;k<i;k++)
			{
				if(p[j]->mark>p[k]->mark)
				{
					memcpy(&temp,p[j],size);
					memcpy(p[j],p[k],size);
					memcpy(p[k],&temp,size);
				}
			}
		}
		printf("student record is successfully sorted based on the percentage\n");
	}
	else
		printf("Invalid choice\n");
	   
}
