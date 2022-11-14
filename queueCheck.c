#include<stdio.h>
#include<conio.h>
void main()
{
    int queue[100],size,rear=-1,front=-1,choice=0,p;
    
    printf("Enter the size of queue:");
    scanf("%d",&size);

    while(choice!=5)
    {
        printf("\n**MENU**\n 1.enqueue\n 2.dequeue\n 3.front\n 4.display\n 5.exit\n Enter the option:\n");
        scanf("%d",&choice);
        printf("Entered option is:%d\n",choice);
        if(choice==1)
        {
            if(rear==size-1)
            {
                printf("Overflow\n");
            }
            else if(front==-1 && rear==-1)
            { 
                printf("Enter the value wish to enqueue:\n");
                scanf("%d",&p);
                front=rear=0;
                queue[rear]=p;
            }
            else
            {
                printf("Enter the value wish to enqueue:\n");
                scanf("%d",&p);
                rear++;
                queue[rear]=p;
            }
        }
        else if(choice==2)
        {
            if(front==-1 && rear==-1)
            {
                printf("Underflow\n");
            }
            else if(front==rear)
            {
                front=rear=-1;
            }
            else
            {
                printf("dequeue element is:%d\n",queue[front]);
                front++;
            }
        }
        else if(choice==3)
        {
            if(front==-1 && rear==-1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Peek element is:%d\n",queue[front]);
            }
        }
         else if(choice==4)
        { 
             printf("Elements in the queue are:\n");
                for(int i=front;i<=rear;i++)
                  {
                 printf("%d",queue[i]);
                  }
                    printf("\n");
        }
        else if(choice==5)
        {
             printf("\nGood Byee!");
        }
    }
   
    printf("\n");
   
}