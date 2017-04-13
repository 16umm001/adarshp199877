#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void push(value);
void pop();
void display();

	struct node* top;
	top=NULL;
int main()
{
	int n, ch;
	while(1)
	{
	printf("\t\t\t\t\tOperation menu.\n");
	printf("1. PUSH.\n");
	printf("2. POP.\n");
	printf("3. DISPLAY.\n");
	printf("4. EXIT\n");
	printf("\\\nenter your choice....\t ");
	scanf("%d ",&n);
	
	switch(ch)
	{
		case 1 :
		printf("Enter Number to be pushed../n");
		scanf("%d ",&n);
		push(n);
		break;
		
		case 2 :
		pop();
		break;

		case 3:
		display();	
		break;

		case 4:
		exit(1);
	}	
	}

}

void push(num)
{
	struct node *newNode;
	newNode=(struct node* )malloc(sizeof(struct node));
	newNode->data=num;
	if(top==NULL)
	{
	newNode->next=NULL;
	}
	else 
	newNode->next=top;
	top=newNode;
}

void pop()
{
	struct node *temp;
	if(top==NULL)
	{
	printf("Stack is empty..Error..\n");
	}
	else:
	temp=top;
	top=top->next;
	free(temp);
}

void display()
{
	if(top==NULL)
	{
	printf("Stack is empty\n");
	}
	else:
	struct node *temp=top;
	while(temp->next !=NULL)
	{
	printf("%d--->",temp->data);
	temp=temp->next;
	}
	
	
}
