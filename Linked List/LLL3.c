#include <stdio.h>
#include <stdlib.h>
 struct node *head, *newnode, *temp;
      
 struct node
    {
        int data;
        struct node * next;
    };
    void create();
    struct node* insert_beg(struct node *head,int info);
      struct node* insertEnd(struct node *head,int info1);
void main()
{
    int info,info1;
    head =0; 
    printf("Linear Linked List\n");
    create();
    printf("Enter the element to be inserted at beginning: ");
    scanf("%d",&info);
    head=insert_beg(head, info);
    printf("Enter the element to be inserted at end: ");
    scanf("%d",&info1);
    head=insert_beg(head, info1);
     printf("Elements in the linked list:\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp =temp ->next;
    }
}
struct node* insert_beg(struct node *head,int info){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=info;
newnode->next=head;
head=newnode;
return head;
}

struct node* insertEnd(struct node* head, int info1)
{
   struct node*newnode, *temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode-> data=info1;
   newnode-> next=NULL;
   temp=head;
   if(temp!=NULL)
   { 
       while(temp->next!=NULL)
           temp = temp ->next;
       temp -> next =newnode;
       newnode->next=NULL;
   }
}
 
 void create()                                                                                         
    { 
    int choice;
    while (choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
         printf("Enter element:");
         scanf("%d", &newnode ->data);
         newnode ->next=0;
         if(head==0)
         {
             head =temp=newnode;
         }
         else {
             temp ->next=newnode;
             temp=newnode;
         }
         printf("Do you want to continue(0/1)?");
         scanf("%d", &choice);
    }
    }



    