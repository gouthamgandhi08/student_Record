#include "header.h"


void modify_roll(ST**,int);
void modify_name(ST**,char*);
void modify_percentage(ST**,float);
void modify_record(ST **);
void modify (ST**,char);

void modify_record(ST **hptr)
{
	
	if(*hptr==0)
	{
		printf("No record found\n");
		return ;
	}
	int roll;
	char op,ch[50];
	mod_menu();
	printf("Enter your choice:");
	scanf(" %c",&op);
	if(*hptr == 0)
	{ 
	 	printf("database is empty:insert any record\n");
		return ;
	}	
	if((op=='r')||(op=='R'))
	{

		printf("enter roll no:");
		scanf("%d",&roll);
		modify_roll(&(*hptr),roll);
	}
	else if((op =='n')||(op=='N'))
	{
		printf("enter name:");
		scanf(" %[^\n]s",ch);
		modify_name(&(*hptr),ch);
	}
	else if((op=='p')||(op=='P'))
	{
		float f;
		printf("enter percentage:");
		scanf("%f",&f);
		modify_percentage(&(*hptr),f);

	}
	else
		printf("wrong option\n");
}
void modify_name(ST** hptr,char *p)
{
	ST *ptr;
	ptr=*hptr;
	int c=0,roll;
	while(ptr!=0)
	{
		if(strcmp(ptr->name,p)==0)
			c++;
		ptr=ptr->next;
	}
	if(c>1)
	{
		printf("%d data available in same name\n",c);
		ptr=*hptr;
		while(ptr!=0)
		{
			if(strcmp(ptr->name,p)==0)
			{
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->mark);
			}
			ptr=ptr->next;
		}
		printf("enter roll no:");
		scanf("%d",&roll);
		modify_roll(&(*hptr),roll);
	}
	else if (c==1)
	{
		
		ST *ptr1;
		char op1;
		ptr1=*hptr;
		if((*hptr!=0)&&(strcmp((*hptr)->name,p)==0))
		{
			mod_roll_menu();
			printf("enter your choice:");
			scanf(" %c",&op1);
			modify(&(*hptr),op1);	
		}
		else
		{
			while((ptr1->next!=0)&&(strcmp(ptr1->next->name,p)!=0))
				ptr1=ptr1->next;
			ptr1=ptr1->next;
			mod_roll_menu();
			printf("enter your choice:");
			scanf(" %c",&op1);
			modify(&ptr1,op1);	
		}
	}
	else
	{
		printf("%s student Record not found\n",p);
	}

}
void modify_percentage(ST** hptr,float mark)
{
	ST *ptr;
	ptr=*hptr;
	int c=0,roll;
	while(ptr!=0)
	{
		if(ptr->mark == mark)
			c++;
		ptr=ptr->next;
	}
	if(c>1)
	{
		printf("%d data available in same percentage\n",c);
		ptr=*hptr;
		while(ptr!=0)
		{
			if(ptr->mark == mark)
			{
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->mark);
			}
			ptr=ptr->next;
		}
		printf("enter roll no:");
		scanf("%d",&roll);
		modify_roll(&(*hptr),roll);
	}
	else if (c==1)
	{
		
		ST *ptr1;
		char op1;
		ptr1=*hptr;
		if((*hptr!=0)&&((*hptr)->mark==mark))
		{
			mod_roll_menu();
			printf("enter your choice:");
			scanf(" %c",&op1);
			modify(&(*hptr),op1);	
		}
		else
		{
			while((ptr1->next!=0)&&(ptr1->next->mark !=mark))
				ptr1=ptr1->next;
			ptr1=ptr1->next;
			mod_roll_menu();
			printf("enter your choice:");
			scanf(" %c",&op1);
			modify(&ptr1,op1);	
		}
	}
	else
	{
		printf("No student record found at %f percentage \n",mark);
	}
}
void modify_roll(ST** hptr,int roll)
{
	ST *ptr;
	char op;
	ptr=*hptr;
	if((*hptr!=0)&&((*hptr)->rollno==roll))
	{
		mod_roll_menu();
		printf("enter your choice:");
		scanf(" %c",&op);
		modify(&(*hptr),op);	
	}
	else
	{
		while((ptr->next!=0)&&(ptr->next->rollno!=roll))
			ptr=ptr->next;
		if(ptr->next == 0)
		{
			printf("Record not found\n");
			return ;
		}
		ptr=ptr->next;
		mod_roll_menu();
		printf("enter your choice:");
		scanf(" %c",&op);
		modify(&ptr,op);	
	}
}

void modify (ST** ptr,char op)
{
	char ch[50];
	float mark;
	if((op == 'n')||(op == 'N'))
	{
	  	printf("Enter name:");
	  	scanf(" %[^\n]s",ch);
	  	strcpy((*ptr)->name,ch);
		printf("roll no %d name is modified successfully\n",(*ptr)->rollno);
	}
	else if((op == 'p')||(op == 'P'))
	{
		printf("Enter mark:");
		scanf("%f",&mark);
		(*ptr)->mark=mark;
		printf("roll no %d percentage is modified successfully\n",(*ptr)->rollno);
	}
	else if((op == 'b')||(op == 'B'))
	{
	  	printf("Enter name:");
	  	scanf(" %[^\n]s",ch);
		printf("Enter mark:");
		scanf("%f",&mark);
	  	strcpy((*ptr)->name,ch);
		(*ptr)->mark=mark;
		printf("roll no %d name and percentage is modified successfully\n",(*ptr)->rollno);
	}
	else
	{
		printf("Invalid Option\n");
	}

}
