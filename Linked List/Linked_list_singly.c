//Roshni Sahoo linked list code
#include <stdio.h>
#include <stdlib.h>
 struct node
    {
        int data;
        struct node * next; //pointer linked to next node
    };
void main()
{
   
    struct node *head, *newnode, *temp;
    head =0; int choice;
     do
    {
    while(choice!=3)
    {
        newnode=(struct node*)malloc(sizeof(struct node)); //type casting & dynamic memory allocation
         printf("Enter element:");
         scanf("%d", &newnode ->data);
         newnode ->next=0;
         if(head==0) //starting node
         {
             head =temp=newnode; //temporily stores link to 2nd node
         }
         else {
             temp ->next=newnode; //next node
             temp=newnode;
         }
         printf("\n**MENU**\n 1.Traverse\n 2.Insert at Begining\n 3.Insert at end\n 4.Display\n Enter the option:\n");//menu driven feature
         scanf("%d", &choice);
    }  printf("Elements in the linked list:\n"); //user input 
    temp=head;
    while(temp!=0) 
    {
        printf("%d ",temp->data); //prints all elements in linked list
        temp =temp ->next;
    }
   traverse();
}

void traverse(struct node*head)
{
    int count= 0;
   if(head==NULL)
   { 
       printf("Link list is empty");
   }
       struct node *temp;
       temp=head;
       while(temp!= NULL)
       {
           printf("%d",temp->data);
           temp=temp -> next;
           count++;  
       }
       printf("No. of elements in linked list are: %d",count);
       }

struct node* insertBeg(struct node*head, int info)
{
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode-> data=info;
   newnode-> next=head;
   head=newnode;
   return head;
} 
struct node* insertEnd(struct node*head, int info)
{
   struct node*newnode, *temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode-> data=info;
   newnode-> next=NULL;
   if(temp!=NULL)
   { 
       while(temp->next!=NULL)
       {
           temp = temp ->next;
       }
       temp -> next =newnode;
   }
   else
   {
   head=newnode;
   return head;
}
} 