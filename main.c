#include "header.h"
#include "figure.h"
int main()
{
	        ST *hptr=NULL;
	        char ch;
		while(1)
		{
			choice_menu();
			printf("Enter your choice:");
       			scanf(" %c",&ch);
               		if((ch == 'a')||(ch == 'A'))
			  	add_record(&hptr);
	        	else if ((ch == 'd')||(ch == 'D'))
				delete_record(&hptr);
	        	else if ((ch == 's')||(ch == 'S'))
			  	show_record(hptr);
			else if ((ch == 'm')||(ch == 'M'))
				modify_record(&hptr);
			else if ((ch ==  'v')||(ch == 'V'))
				save_record(hptr);
			else if ((ch == 'e')||(ch == 'E'))
			{
				char op;  
				exit_menu();
				printf("enter your option:");
				scanf(" %c",&op);
				if((op=='S')||(op=='s'))
				{
					save_record(hptr);
					printf("Student record are sucessfully saved\n");
					printf("Exited..\n");
				}
				else
					printf("Exit without saving the record\n");
				return 0;

			}
			else if ((ch == 't')||(ch == 'T'))	
				  sort_record(&hptr);
			else if ((ch == 'l')||(ch == 'L'))
			{
				if(hptr!=0)
				   delete_allrecord(&hptr);
				else
					printf("Record is Empty\n");
			}
			else if ((ch == 'r')||(ch == 'R'))
				  reverse_record(&hptr);
	        	else
				 printf("Invalid Option\n");
		}
}
