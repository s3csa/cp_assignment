#include<stdlib.h>
#include<stdio.h>
typedef struct node
{

	int value;
	struct node *link;
}node;

node* createhead()
{
	node *head;
	head=malloc(sizeof(node));
	head->link=NULL;
	return head;
}

node* createnode()
{
        node *newnode;
	newnode=malloc(sizeof(node));
	return newnode;
}



void insertfirst(node *head,int data)
{
	node *newnode=createnode();
	newnode->value=data;
	if(head->link==NULL)
		{
		head->link=newnode;
		newnode->link=NULL;

		}
	else
		{
		newnode->link=head->link;
		head->link=newnode;

		}

}

void display(node *head)
{
  	node *current=head->link;
	while(current!=NULL)
 		{
		  printf("%d->",current->value);
		  current=current->link;	

		}
}


