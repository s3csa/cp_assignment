
 #include "Linked_Stack.h"
 #include<stdlib.h>
 #include<stdio.h>
 void main()
 {
 struct node *top1=createstack();
 int temp,ch;
 do
  {
 	printf("enter the choice 1.push 2.pop 3.exit");
 	scanf("%d",&ch);
 	switch(ch)
 	{
 		case 1: 
 			printf("enter the element to be pushed");
 			scanf("%d",&temp);
 			push(temp,top1);
 			break;
 		case 2:
 			printf("Deleted element is");
 			node *top2=createstack();
 			while(1)
  				{
   				temp=pop(top1);
   				if(peek(top1))
 					push(temp,top2);
   				else
 					{
 					if(temp==0)
 						printf("empty");
 					else
 						printf("%d\n",temp);
 					break;
 					}
  				}
  			while(1)
  				{
   				temp=pop(top2);
 				if(temp)
 	   				push(temp,top1);
 				else
 	   				break;

  				}
 			break;
 	 }
 }while(ch!=3);		


 } 
