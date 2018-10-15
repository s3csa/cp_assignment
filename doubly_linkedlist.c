#include<stdio.h>
#include<stdlib.h>
typedef struct node
 {
   int value;
   struct node *next;
   struct node *prev;
 }node;
node * create_head()
 {
   node * head;
   head=malloc(sizeof(node));
   head->next=NULL;
   head->prev=NULL;
   return head;
 }
node * create_node()
 {
   node * newnode;
   newnode=malloc(sizeof(node));
   return newnode;
 }
void insert_first(node * head,int data)
 {
   node * newnode=create_node();
   newnode->value=data;
   if(head->next==NULL)
      {
        head->prev=NULL;
        head->next=newnode;
        newnode->prev=head;
        newnode->next=NULL;
      }
   else
      { 
        newnode->prev=head;
        newnode->next=head->next;
        head->next->prev=newnode;
        head->next=newnode;
      }
}
void display(node * head)
{
 node * current=head->next;
 while(current!=NULL)
  {
   printf("->%d\t",current->value);
   current=current->next;
  }
  printf("\n");
}
void insert_last(node * head,int data)
 {
   node * newnode=create_node();
   newnode->value=data;
   if(head->next==NULL)
      {
        head->prev=NULL;
        head->next=newnode;
        newnode->prev=head;
        newnode->next=NULL;
      }
   else
      {
        node * current=head->next;
        while(current->next!=NULL)
           {
            current=current->next;
           }
        current->next=newnode;
        newnode->prev=current;
        newnode->next=NULL;
        
       }
 }
void delete_first(node * head)
{
 if(head->next==NULL)
    printf("list is empty");
 else
    head->next->next->prev=head;
    head->next=head->next->next;
}
void delete_last(node * head)
{
 if(head->next==NULL)
    printf("list is empty");
 else
   {
    node * current=head->next;
    while(current->next!=NULL)
          {
            current=current->next;
          } 
    current->prev->next=NULL;
   }
}

void insert_after(node * head,int data,int key)
 {
   
   node * current=head->next;
   int flag=1;
   while(current!=NULL)
    {
      if(current->value!=key)
          current=current->next;
      else
       {
         flag=2;
         break;
       }
    } 
   if(flag==2)
    {
       node * newnode=create_node();
       newnode->value=data;
       current->next->prev=newnode;
       newnode->prev=current;
       newnode->next=current->next;
       current->next=newnode;
    }
   else
     printf("key is not found");
 }
void insert_before(node * head,int data,int key)
 {
   node * current=head->next;
   int flag=1;
   while(current!=NULL)
    {
      if(current->value!=key)
         {
          current=current->next;
         }
      else
       {
         flag=2;
         break;
       }
    } 
   if(flag==2)
    { 
       node * newnode=create_node();
       newnode->value=data;
       newnode->next=current;
       newnode->prev=current->prev;
       current->prev->next=newnode;
       current->prev=newnode;
    }
   else
     printf("key is not found");
 }

























 
