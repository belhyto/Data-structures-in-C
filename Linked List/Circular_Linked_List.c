#include <stdio.h>
#include <stdlib.h>
struct node *head, *newnode, *temp;
   void create();
    void traverse();
    void display();
   struct node* insert_beg(struct node *head,int info);
   struct node* insertEnd(struct node *head,int info);
   
 struct node
    {
        int data;
        struct node * next;
    };
   
void main()
{
    int info;
     int ch;
      head =NULL;
      printf("Circular Linked List\n");
      create();
       do
    {
         printf("\n--OPERATION MENU--\n 1.Traverse\n 2.Insert at Beginning\n 3.Insert at end\n 4.Display\n Enter the option:\n");//menu driven feature
        scanf("%d",&ch);
        switch(ch)
        {  
            case 1: printf(" -Selected Traverse operation- \n");
            traverse(); 
            printf("\n");
            break;
            case 2:
            printf(" -Selected Insertion at beginning operation- \n");
            printf("Enter the element to insert at the begining:\n");
             scanf("%d",&info);
            head=insert_beg(head, info);
            printf("\n");
            break;
            case 3:
            printf(" -Selected Insertion at end operation- \n");
             printf("Enter the element to insert at the end:\n ");
            scanf("%d",&info);
            head=insertEnd(head, info);
            printf("\n");
            break;
             case 4: printf(" -Selected Display operation- \n");
            display(); 
            printf("\n");
            break;
            default: printf("Invalid choice.\n");
            exit(0);
        }
    }
    while(ch!=0);
    }
    void create()                                                                                         
    {
          int choice;
    while (choice)
    {
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
              //last points to head
                temp-> next=head;
             }
              printf("Do you want to continue(0/1)?"); //menu driven feature
         scanf("%d", &choice);
         }
    }    
    void display()
    {
        printf("Elements in the linked list:\n"); //user input 
        temp=head;
          do{  //entry controlled
             //Prints each node by incrementing pointer.  
            printf("%d ", temp->data);  
            temp = temp->next;  
        }
        while(temp != head);  
        printf("\n");
    }   
    void traverse()
    {
        int count= 0;
        printf("Elements in the linked list:\n"); //user input 
        temp=head;
      do{  //entry controlled
             //Prints each node by incrementing pointer.  
            printf("%d ", temp->data);  
            temp = temp->next;  
             count++;  
        }
        while(temp != head);  
       // printf("\n");  
         printf("\nNo. of elements in linked list are: %d\n",count);
    }
 struct node* insert_beg(struct node *head,int info)
 {
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=info;
    newnode->next=head;
    temp= head;
    while(temp-> next!=head)
    {
        temp= temp->next;
    }
    temp-> next=newnode;
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
       while(temp->next!=head)
       {
           temp = temp ->next;
       }
       temp -> next =newnode;
      newnode-> next =head;
   return head;
}