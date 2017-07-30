#include<stdio.h>
#include<stdlib.h>

struct bst
{
	int data;
	struct bst *lnode;
	struct bst *rnode;
};

struct bst *create_bst();
void preorder(struct bst*);
void insert(struct bst* ,struct bst*);

int main()
{
	int ch;
	struct bst *root=NULL;
	struct bst *ptr;	

	
while(1)
{
	printf("Enter your choice");
	printf("1. preorder traversal.\n");
	printf("2. insert.\n");
	printf("3. Exit\n");
	scanf("%d ",&ch);
	
	switch(ch)
	{
	case 1 :
	preorder(struct bst* root);
	break;

	case 2 :
	insert(root,ptr);
	break;

	case 3 :
	exit(0);

	}
}


}


struct bst *create_bst()
{
	


}
