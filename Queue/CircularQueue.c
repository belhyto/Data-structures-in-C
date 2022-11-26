#include <stdio.h>
#define N 5
int queue[5];
int rear=-1,front=-1;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
    int ch,n;
    printf ("Circular queue operations\n*May face drawbacks while doing enqueue and dequeue operations*\n");
    do
    {
        printf("Enter the choice of queue operation:\n 1.Enqueue \n 2.Dequeue\n 3.Peek\n 4.Display\n");
        scanf("%d",&ch);
        switch(ch)
        {  
            case 1:printf("Enter the element to insert in queue\n");
             scanf("%d",&n);
            enqueue(n);
            break;
            case 2:printf("Element removed from queue: ");
            dequeue();
            printf("\n");
            break;
            case 3: printf("Element at front of queue: ");
            peek();
            printf("\n");
            break;
             case 4:
              printf("Elements of queue: ");
              display();
             printf("\n");
            break;
            default: printf("Invalid choice.\n");
        }
    }
    while(ch!=0);
    getc(0);
}
void enqueue(int x)
  {
      if((rear==0 && rear==N-1)||(front==rear+1))
      {
          printf("Data overflow condition\n");
          return;
      }
      else if(front==-1)//If queue is empty
      {
          front=0;
          rear=0;
      }
      else if(rear==N-1)//rear is a t last position of queue
        rear=0;
        else
          rear++;
          queue[rear]=x;
      }
void dequeue()
  {     
       if(front==-1 )
            {
                printf("Data Underflow condition\n");
            }
            else if(front==rear)
            {
                front=rear=-1;
            }
            else if(front==N-1)   
                front=0;
                else {
                    printf("%d",queue[front]);
                front++;
                }
  }
  void peek()
  {
       if(front==-1 && rear==-1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("%d",queue[front]);
            }
  }
  void display() {
  int i;
  if(front==-1)
            {
                printf("Queue is empty\n");
                return;
            }
  else {
    for (i = front; i != rear; i = (i + 1) % N) {
      printf("%d ", queue[i]);
    }
    printf("%d ", queue[i]);
  }
}