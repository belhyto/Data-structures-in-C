#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*newnode=NULL,*head=NULL;
 
void display();
void create();
void insert_at_start(); 
void insert_end(int info);
void delete_start();
void exit();

int main()
    {
        int info;
    printf("Doubly Circular Linked List\n");
	create();
    int choice=1;
    while(choice!=0){
        printf("\n--OPERATION MENU--\n 1.Insertion at start\n 2.Insertion at end\n 3.Deletion at start\n 4.Display the current list\n 5.Exit\n\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
             printf(" -Selected Insertion at beginning operation- \n");
                insert_at_start();
				 printf("\nElement inserted at the start of the list\n");
                break;
            case 2:
            printf(" -Selected Insertion at end operation- \n");
             printf("Enter the element to insert at the end:\n ");
            scanf("%d",&info);
                insert_end(info);
				 printf("\nlement inserted at the end of the list\n");
                break;

            case 3:
            printf(" -Selected Deletion at given position operation- \n");
                delete_start();
				 printf("\nFirst element deleted from the list\n");
                break;

            case 4: 
            printf(" -Selected Display operation- \n");
                display();
                break;

            case 5:
                exit(0);
                break;
				
            default:  
            printf("\nINVALID CHOICE\n");  

        }
	}
}

void create()
   {
    struct node *temp;
   int choice;
    while (choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->prev=NULL;
        newnode->next=NULL;
        printf("Enter element:");
        scanf("%d",&(newnode->data));
        if(head==NULL){
            head = newnode;
            temp=head;
        }
		else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        head->prev=temp;
        temp->next=head;
         printf("Do you want to continue(0/1)?");
         scanf("%d", &choice);
    }
    
}
void insert_at_start(){
	struct node *temp=head;
	struct node *node1=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->prev=NULL;
	newnode->next=NULL;
	
	printf("\nEnter the element to insert: ");
	scanf("%d",&(newnode->data));
	
	node1=temp->prev;
	newnode->next=temp;
	temp->prev=temp;
	
	newnode->prev=node1;
	node1->next=newnode;
	head=newnode;
}
void insert_end(int info)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode-> data=info;
    newnode-> next=NULL;
    if (newnode)
    {
        if (head == NULL)
        {
            newnode->next = newnode;
            newnode->prev = newnode;
            head = newnode;
            return;
        }
        head->prev->next = newnode;
        newnode->prev = head->prev;
        newnode->next = head;
        head->prev = newnode;
    }
}
void delete_start(){
    struct node *temp;
    if(head==NULL){
        printf("\nUnderflow\n");
    }
    else if(head->next==head){
        head=NULL;
        free(head);
        printf("\nNode Deleted\n");  
    }
    else{
        temp=head;   
        while(temp->next!=head){  
            temp = temp->next;  
        }  
        temp->next=head->next;  
        head->next->prev=temp;  
        free(head);  
        head = temp->next;  
    }
}

void display(){
    struct node *temp; 
    if(head==NULL){
        printf("\nEmpty List\n");
    }
    else{
        temp=head; 
		printf("\nElements in the linked list:\n");
        do{
            printf("%d  ",temp->data);
            temp=temp->next;
        }
		while(temp!=head);
    }
	printf("\n");
}