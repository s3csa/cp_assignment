
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include "SinglyLinkedList.h"

node* createstack()
{
node *head=createhead();
return head;
}




void push(int item,node *head)
{
  insertfirst(head,item);

}

int pop(node *head)
{
 return(deletefirst(head));
}


int peek(node *head)
{
if(head->link!=NULL)
	return head->link->value;
else
 	return 0;
}

