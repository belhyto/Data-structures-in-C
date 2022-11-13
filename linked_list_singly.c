//Roshni Sahoo linked list code
#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node * next; //pointer linked to next node
    };
    struct node *head, *newnode, *temp;
    head =0; int choice;
    while (choice)
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
         printf("Do you want to contiue(0/1)?"); //menu driven feature
         scanf("%d", &choice);
    }
     printf("Elements in the linked list:\n"); //user input 
    temp=head;
    while(temp!=0) 
    {
        printf("%d ",temp->data); //prints all elements in linked list
        temp =temp ->next;
    }
}
