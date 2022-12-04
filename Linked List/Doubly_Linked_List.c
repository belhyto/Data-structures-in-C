#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head;  
void insert_beg();  
void insert_end();  
void insert_pos();  
void delete_beg();  
void delete_end();  
void delete_pos();  
void display();  

void main ()  
{  
 printf("Singly Doubly Linked List\n");
 int choice =0;  
    while(choice != 9)  
    {  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any position\n4.Delete from Beginning\n5.Delete from last\n6.Delete after position\n7.Display\n8.Exit\n");  
        printf("\nEnter your choice:\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert_beg();  
            break;  
            case 2:  
            insert_end();  
            break;  
            case 3:  
            insert_pos();  
            break;  
            case 4:  
            delete_beg();  
            break;  
            case 5:  
            delete_end();  
            break;  
            case 6:  
            delete_pos();  
            break;  
            case 7:  
            display();  
            break;  
            case 8:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  

void insert_beg()  
{  
   struct node *newnode;   
   int info;  
   newnode = (struct node *)malloc(sizeof(struct node));  
   if(newnode == NULL)  
   {  
       printf("\n Overlow condition");  
   }  
   else  
   {  
    printf("\nEnter the element to insert :");  
    scanf("%d",&info);  
      
   if(head==NULL)  
   {  
       newnode->next = NULL;  
       newnode->prev=NULL;  
       newnode->data=info;  
       head=newnode;  
   }  
   else   
   {  
       newnode->data=info;  
       newnode->prev=NULL;  
       newnode->next = head;  
       head->prev=newnode;  
       head=newnode;  
   }  
   printf("\nNode inserted\n");  
  }  
}  
void insert_end()  
{  
   struct node *newnode,*temp;  
   int info;  
   newnode = (struct node *) malloc(sizeof(struct node));  
   if(newnode == NULL)  
   {  
       printf("\nOverlow condition");  
   }  
   else  
   {  
       printf("\nEnter the element to insert at the end:");  
       scanf("%d",&info);  
        newnode->data=info;  
       if(head == NULL)  
       {  
           newnode->next = NULL;  
           newnode->prev = NULL;  
           head = newnode;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = newnode;  
          newnode ->prev=temp;  
          newnode->next = NULL;  
          }  
             
       }  
     printf("\nnode inserted\n");  
    }  
    
void insert_pos()  
{  
   struct node *newnode,*temp;  
   int info,pos,i;  
   newnode = (struct node *)malloc(sizeof(struct node));  
   if(newnode == NULL)  
   {  
       printf("\n Overlow condition");  
   }  
   else  
   {  
       temp=head;  
       printf("Enter the the position at which the element will be entered");  
       scanf("%d",&pos);  
       for(i=0;i<pos;i++)  
       {  
           temp = temp->next;  
           if(temp == NULL)  
           {  
               printf("\n There are less than %d elements", pos);  
               return;  
           }  
       }  
       printf("Enter the element to insert :");  
       scanf("%d",&info);  
       newnode->data = info;  
       newnode->next = temp->next;  
       newnode -> prev = temp;  
       temp->next = newnode;  
       temp->next->prev=newnode;  
     
   }  
}  
void delete_beg()  
{  
    struct node *newnode;  
    if(head == NULL)  
    {  
        printf("\n Underflow condition");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nElement deleted\n");  
    }  
    else  
    {  
        newnode = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(newnode);  
        printf("\nElement deleted\n");  
    }  
  
}  
void delete_end()  
{  
    struct node *newnode;  
    if(head == NULL)  
    {  
        printf("\n Underflow condition");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);   
        printf("\nElement deleted\n");  
    }  
    else   
    {  
        newnode = head;   
        if(newnode->next != NULL)  
        {  
            newnode = newnode -> next;   
        }  
        newnode -> prev -> next = NULL;   
        free(newnode);  
        printf("\nElement deleted\n");  
    }  
}  

void delete_pos()  
{  
    struct node *newnode, *temp;  
    int pos;  
    printf("\n Enter the data after which the node is to be deleted : ");  
    scanf("%d", &pos);  
    newnode = head;  
    while(newnode -> data != pos)  
    newnode = newnode -> next;  
    if(newnode -> next == NULL)  
    {  
        printf("\nDelete operation is not possible.\n");  
    }  
    else if(newnode -> next -> next == NULL)  
    {  
        newnode ->next = NULL;  
    }  
    else  
    {   
        temp = newnode -> next;  
        newnode -> next = temp -> next;  
        temp -> next -> prev = newnode;  
        free(temp);  
        printf("\nElement deleted\n");  
    }     
}  

void display()  
{  
    struct node *newnode;  
    printf("\n Elements in the linked list:\n");  
    newnode = head;  
    while(newnode != NULL)  
    {  
        printf("%d\n",newnode->data);  
        newnode=newnode->next;  
    }  
}   
