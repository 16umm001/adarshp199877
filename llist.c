#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node* create_llist()
{
	struct node* ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=0;
	ptr->next=NULL;
}

struct insert(struct node* ptr, int index, int num)
{	
	int i;
	struct node* temp;
	temp=(struct node* )malloc(sizeof(struct node));
	if(temp==NULL)
	{
		temp=ptr;
		return;
	}

	

}