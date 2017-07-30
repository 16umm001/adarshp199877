#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int data;
	struct stack *next;
};

void push(struct stack *,int);
void pop(struct stack* );
void display(struct stack*);
struct stack *top=NULL;

int main()
{
	int ch,num
	//struct stack* head=NULL;
	while(1)
	{
	printf("Operation menu.\n");
	printf("1. Push(Insert a number.\n)");
	printf("2. Pop (delete from stack.\n)");
	printf("3. Display stack.\n");
	printf("4. Exit.\n");
	printf("Enter your choice.\n");
	scanf("%d ",&ch);
	
	switch(ch)
		{
	case 1 :
	printf("Enter number to be inserted in stack.\n");
	scanf("%d ",&num);
	push(top,num);
	break;
	
	case 2 :
	pop(top);
	break;
	
	case 3 :
	diaplay(top);
	break;
	
	case 4 :
	exit(0);
	}
	}	

}

	void push(struct stack* top,int num)
	{
	struct stack *ptr=(struct stack* )malloc(sizeof(struct stack));
	ptr->data=num;
	if(top==NULL)
	{
	ptr->next=NULL;
	top=ptr;
	}	
	else
	ptr->next=top;
	top=ptr;		
	}
	return top;
	}
void pop()


