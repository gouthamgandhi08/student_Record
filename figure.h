#include <stdio.h>

void choice_menu(void)
{

	printf(" ---------------------------------------\n");
	printf("|     **** STUDENT RECORD MENU ****    	|\n");
	printf("| ------------------------------------- |\n");
	printf("| a/A : Add New Record             	|\n");
	printf("| d/D : Delete a Record            	|\n");
	printf("| s/S : Show the List              	|\n");
	printf("| m/M : Modify a Record            	|\n");
	printf("| v/V : Save the List              	|\n");
	printf("| e/E : Exit                       	|\n");
	printf("| t/T : Sort the List              	|\n");
	printf("| l/L : Delete all the records     	|\n");
	printf("| r/R : Reverse the List      	   	|\n");
	printf("|                                  	|\n");
	printf(" ---------------------------------------\n");
}
void del_menu(void)
{
   printf(" ---------------------------\n");
   printf("| R/r: enter roll to del    |\n");
   printf("| N/n: enter name to del    |\n");
   printf("|                           |\n");
   printf(" ---------------------------\n");
}
void mod_menu(void)
{   
   printf(" ------------------------------------------------\n");
   printf("| Enter which record to search for modification  |\n");
   printf("| R/r: to search a rollno                        |\n");
   printf("| N/n: to search a name                          |\n");
   printf("| P/p: percentage based                          |\n");
   printf("|                                                |\n");
   printf(" ------------------------------------------------\n");
}
void mod_roll_menu(void)
{   
   printf(" --------------------------------------------------\n");
   printf("| Do you want to modify name or percentage or both |\n");
   printf("| N/n: enter to modify the name                    |\n");
   printf("| P/p: enter to modify the percentage              |\n");
   printf("| B/b: enther to modify name and percentage        |\n");
   printf("|                                                  |\n");
   printf(" --------------------------------------------------\n");
}

void exit_menu(void)
{
	
   printf(" ---------------------------\n");
   printf("| Enter                     |\n");
   printf("| S/s: save and exit        |\n");
   printf("| E/e: exit without saving  |\n");
   printf("|                           |\n");
   printf(" ---------------------------\n");
}
void sort_menu(void)
{
	
   printf(" ---------------------------\n");
   printf("| N/n: sort with name       |\n");
   printf("| P/p: sort with percentage |\n");
   printf("|                           |\n");
   printf(" ---------------------------\n");
}

