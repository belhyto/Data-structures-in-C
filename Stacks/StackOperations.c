#include <stdio.h>
#define N 5
int stack[5];
int top= -1;
void push();
void pop();
void peek();
void display();

void main()
{
    int x,ch,n;
    do
    {
        printf("Enter the choice of stack operation:\n 1.push\n 2.pop\n 3.peek\n 4.display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element to insert\n");
             scanf("%d",&n);
            push(n);
            break;
            case 2:printf("Element popped out of stack: ");
            pop();
            printf("\n");
            break;
            case 3: printf("Element at top of stack: ");
            peek();
            printf("\n");
            break;
             case 4:
              printf("Elements of stack: ");
              display();
             printf("\n");
            break;
            default: printf("Invalid choice.\n");
        }
    }
    while(ch!=0);
    getc(0);
}
void push(int x)
  {
      if(top==N-1)
      {
          printf("Stack overflow condition\n");
      }
      else
      {
          top++;
          stack[top]=x;
      }
  }

void pop()
  {
      int item;
      if(top==-1)
      {
          printf("Stack underflow condition\n");
      }
      else
      { 
                  item=stack[top];
          top--;
          printf("%d",item);
      }
  }
  void peek()
  {
      int item;
      
      if(top==-1)
      {
          printf("Stack is empty\n");
      }
      else
      {
        
          printf("%d",stack[top]);
      }
  }
  void display()
  {
      int i;
     
      for(i=top;i>=0;i--)
      {
          printf("%d",stack[i]);
      }
      
  }
