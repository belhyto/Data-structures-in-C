  #include<stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>
char stack[20];
char post[20];
char pre[20];
char exp[20];
int top=-1,temp;

char x;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}
int priority(char x)
{
    if(x=='(')
        return 0;
    if(x=='+' || x=='-')
        return 1;
    if(x=='*' || x=='/')
        return 2;
}

void toPost(char arr[]){
   
    int j=0;
    for(int i = 0; i < strlen(arr); i++) 
    {
        if(isalnum(arr[i])) {
            post[j++]= arr[i];
           // printf("%c", exp[i]);
           }
        else if(arr[i]=='(') //opening brackets gets pushed
            push(arr[i]);
        else if(arr[i]==')'){
            while((x=pop()) != '(') //closing brackets gets popped
              post[j++]= x;
                    //printf("%c", x);
        }
        else{
            while(priority(stack[top])>=priority(arr[i]))
              post[j++]= pop();
             // printf("%c", pop());
            push(arr[i]);
        }  
    }  
    while(top!=-1){
        post[j++]= pop();
        //printf("%c", pop()); //check and prints any characters remaining in the stack.
    }  
    }
void display(char arr[]){
     for(int i = 0; i < strlen(arr); i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}
void reverse(char arr[]){
    
    int end = strlen(arr) - 1;
   for (int i = 0; i < strlen(arr)/2; i++) {
        temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;    
        end--;
    }
}
void switchBrackets(char arr[])
{
   for(int i = 0; i < strlen(arr); i++) {
       if(arr[i]=='(')
       {
         arr[i]=')';
       } 
        else if(arr[i]==')')
       {
         arr[i]='(';
       }           
       // printf("%c", arr[i]);
   }
}
int main()
{
    printf("Enter the Infix Expression: ");
    scanf("%s", exp);
    printf("\n");
    printf("\nPostfix Expression: ");
    toPost(exp);
    display(post);  
    printf("\n Reversed infix Expression: ");
    reverse(exp); 
    display(exp);     
    printf("\n Brackets switch: ");
    switchBrackets(exp);
    display(exp);
    printf("\n Postfix of Reversed infix Expression: ");
    toPost(exp);
    display(post);
    printf("\n Final Prefix Expression: ");
    reverse(post); //(Reversed of Postfix of Reversed infix Expression)
    display(post);
    printf("\n");
}
  
  
  