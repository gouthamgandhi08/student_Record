#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct st
{
 	int rollno;
	char name[50];
	float mark;
	struct st *next;
}ST;

void choice_menu(void);
void del_menu(void);
void mod_menu(void);
void exit_menu(void);
void sort_menu(void);
void mod_roll_menu(void);

void add_record(ST**);
void delete_record(ST**);
void show_record(ST*);
void modify_record(ST**);
void save_record(ST*);
void sort_record(ST**);
void delete_allrecord(ST **);
void delete_record(ST**);
void reverse_record(ST**);
int node_count(ST *);
int find_roll(ST *);

