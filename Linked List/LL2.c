//Roshni Sahoo linked list code
#include <stdio.h>
#include <stdlib.h>
 struct node
    {
        int data;
        struct node * next; //pointer linked to next node
    };
    void create()
{
    int choice;
while (choice)
    {
         struct node *head, *newnode, *temp;
        newnode=(struct node*)malloc(sizeof(struct node)); //type casting & dynamic memory allocation
         printf("Enter element:");
         scanf("%d", &newnode ->data);
         newnode ->next=NULL;
         if(head==NULL) //starting node
         {
             head =temp=newnode; //temporily stores link to 2nd node
         }
         else {
             temp ->next=newnode; //next node
             temp=newnode;
         }
         printf("Do you want to contiue(0/1)?"); //menu driven feature
         scanf("%d", &choice);
    }
}

void traverse(struct node* head)
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

struct node* insertBeg(struct node* head, int info)
{
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode-> data=info;
   newnode-> next=head;
   head=newnode;
   return head;
} 
struct node* insertEnd(struct node* head, int info)
{
   struct node*newnode, *temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode-> data=info;
   newnode-> next=NULL;
   temp=head;
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
void main()
{
     int ch,n;
       struct node* head = NULL;
    printf ("Linear Linked List\n");
    create();
    do
    {
         printf("\n**OPERATION MENU**\n 1.Traverse\n 2.Insert at Begining\n 3.Insert at end\n Enter the option:\n");//menu driven feature
        scanf("%d",&ch);
        switch(ch)
        {  
            case 1: printf(" Traverse");
            traverse(head);  //need & to change head
            printf("\n");
            break;
            case 2:printf("Enter the element to insert at the begining ");
            insertBeg(head,50);
            printf("\n");
            break;
            case 3: printf("Enter the element to insert at the end  ");
            insertEnd(head,50);
            printf("\n");
            break;
            default: printf("Invalid choice.\n");
        }
    }
    while(ch!=0);
}
   