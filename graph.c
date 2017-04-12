/* A C program to demonstrate adencency klist of graph */
 
#include<stdio.h>
#include<stdlib.h>

struct adjlistnode
{
int dest;
struct adjlistnode *next;
};

// An structure to represent an adjacency list

struct adjlist
{
struct adjlist *head; // pointer to head node of list
};

// A structre to represet a graph. A graph is an array of adjacency lists.
//Size of array will be v 

struct Graph
{
	int v;
	struct adjlist *array;
};

struct adjlistnode* newadjlistnode(int dest)
{
	struct adjlistnode* newnode=(struct adjlistnode* )malloc(sizeof(struct adjlistnode));
	newnode->dest=dest;
	newnode->dest=NULL;
	return newnode;
}

// A utility function that creates a graph of v vertex

struct Graph* createGreaph(int v)
{
	struct Graph *graph=(struct graph*)malloc(sizeof(struct graph));
	graph->v=v;

	graph->array=(struct adjlist)malloc(sizeof(struct adjlist));
	
	int i;
	for(i=0;i<v;i++)
{
	graph->array[i].head=NULL;

}
	return graph;
}

void add_node(struct Graph *graph ,int src, int dest)
{
    struct adjListNode* newNode = newadjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
	

}

