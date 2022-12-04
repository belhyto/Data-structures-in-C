#include <stdio.h>
#include <stdlib.h>
 struct node *head, *newnode, *temp;
      
 struct node
    {
        int data;
        struct node * next;
    };

    void create();
    void traverse(); 
    void display();
    struct node* insert_beg(struct node *head,int info);
    struct node* insertEnd(struct node *head,int info);
    struct node* insertPos(int pos,struct node *head,int info);
    void deleteNode(struct node *head,int key);
    
void main()
{
    int info, pos, key;
     int ch;
      head =NULL;
      printf("Singly Linked List\n");
      create();
       do
    {
         printf("\n--OPERATION MENU--\n 1.Traverse\n 2.Insert at Beginning\n 3.Insert at end\n 4.Insert at any position\n 5.Delete at any position\n 6.Display\n Enter the option:\n");//menu driven feature
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
             case 4:
            printf(" -Selected Insertion at given position operation- \n");
              printf("Enter the the position at which the element will be entered:\n ");
            scanf("%d",&pos);
             printf("Enter the element to insert :\n ");
            scanf("%d",&info);
            head=insertPos(pos,head, info);
            printf("\n");
            break;
               case 5:
            printf(" -Selected Deletion at given position operation- \n");
              printf("Enter the the position at which the element will be deleted:\n ");
            scanf("%d",&key);
            deleteNode(head, key);
            printf("\n");
            break;
             case 6: printf(" -Selected Display operation- \n");
            display(); 
            printf("\n");
            break;
            default: printf("Invalid choice.\n");
            exit(0);
        }
    }
    while(ch!=0);
    }    

struct node* insert_beg(struct node *head,int info){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=info;
newnode->next=head;
head=newnode;
return head;
}

struct node* insertEnd(struct node* head, int info)
{
   struct node *newnode, *temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   temp=head;
   newnode-> data=info;
   newnode-> next=NULL;
   
    if (head== NULL)
    {
       head= newnode;
       return head;
    } 
    while (temp->next != NULL)
        temp = temp->next;
  
    temp->next = newnode;
    return head;   
}
struct node* insertPos(int pos, struct node *head, int data)
{
       struct node *newnode, *temp; 
        newnode=(struct node*)malloc(sizeof(struct node)); 
         temp=head;
        newnode->data = data;
        newnode->next = NULL;

        while(--pos)
        {
            temp=temp->next;
        }
        newnode->next= temp->next;
        temp->next = newnode;
}
void deleteNode(struct node *head, int key)
{
    struct node *temp = head, *prev;
    if (temp != NULL && temp->data == key) {
        head = temp->next; 
        free(temp); 
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;
    free(temp); 
}
void display()
{
    printf("Elements in the linked list:\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp =temp ->next;
    }
}
void traverse()
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
           printf("%d ",temp->data);
           temp=temp -> next;
           count++;  
       }
       printf("\n No. of elements in linked list are: %d",count);
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

//fix delete position return
//add exit case

    
