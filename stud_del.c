#include"header.h"

//void delete_allrecord(ST **);
//void delete_record(ST**);
void delete_roll(ST**,int);
void delete_name(ST **, char*);
void delete_allrecord(ST **hptr)
{
	if(*hptr==0)
	{
		printf("No record available to delete\n");
		return ;
	}
	ST *temp;
	while(*hptr!=0)
	{
		temp=*hptr;
		*hptr=(*hptr)->next;
		free(temp);
	}
	printf("All Student record are deleted\n");
}
void delete_record(ST** hptr)
{
	if(*hptr==0)
	{
		printf("No record available to delete\n");
		return ;
	}
	int roll;
	char op,ch[50];
   	del_menu();
	printf("Enter your choice:");
	scanf(" %c",&op);
	if((op == 'r')||(op == 'R'))
	{
		printf("enter the roll no:");
		scanf("%d",&roll);
		delete_roll(&(*hptr),roll);
	}
	else if((op == 'n')||(op == 'N'))
	{
	         printf("enter Name:");
		 scanf(" %[^\n]s",ch);
		 delete_name(&(*hptr),ch);
	}
	else 
		printf("wrong option\n");
}
void delete_roll(ST** hptr,int roll)
{
   ST *ptr,*temp;
   ptr=*hptr;
   if((*hptr!=0)&&((*hptr)->rollno == roll))
   {
	*hptr=(*hptr)->next;
	ptr->next=0;
	free(ptr);
   }
   else
   {
	while((ptr->next!=0)&&(ptr->next->rollno != roll))
	{
		ptr=ptr->next;
	}
	if(ptr->next==0)
	{
		printf("%d is not found\n",roll);
		return;
	}
	temp = ptr->next;
	ptr->next=temp->next;
	printf("%d %s is removed from the record\n",temp->rollno,temp->name);
	free(temp);
   }
}
void delete_name(ST **hptr, char*p)
{
	int c=0,roll;
	ST* ptr;
	ptr=*hptr;
	while(ptr!=0)
	{
		if(strcmp(ptr->name,p)==0)
			c++;
		ptr=ptr->next;
	}
	ptr=*hptr;
	if(c>1)
	{
		printf("identical name exists\n");
		while(ptr!=0)
		{
			if(strcmp(ptr->name,p)==0)
			{
			   printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->mark);
			}
			ptr=ptr->next;
		}
		printf("Enter roll no to delete:");
		scanf("%d",&roll);
		delete_roll(&(*hptr),roll);	  	
	}
	else if (c==1)
	{
		ST *temp;
   		if((*hptr!=0)&&(strcmp(((*hptr)->name),p)==0))
   		{
			*hptr=(*hptr)->next;
			ptr->next=0;
			free(ptr);
   		}
   		else
   		{
			while((ptr->next!=0)&&(strcmp(ptr->next->name,p)!=0))
			{
				ptr=ptr->next;
			}
		
			temp = ptr->next;
			ptr->next=temp->next;
			printf("%s is removed from the record\n",temp->name);
			free(temp);
   		}
		
	}
	else
	{
            printf("%s record not found\n",p);
	}
}
