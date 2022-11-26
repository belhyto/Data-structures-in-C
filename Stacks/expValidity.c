#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define N 20 
int stack[N]; 
int top = -1;   

void push(char x); 
void pop();
void valid();
void invalid();

void main() 
{ 
    char exp[50];
    printf("Enter expression: ");
    fgets(exp, 50, stdin);
    for(int i = 0; i < strlen(exp); i++) { 
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{') { 
            push(exp[i]); 
        } 
        else if(exp[i] == ')') { 
            if(stack[top] == '(')
                pop();
            else
                invalid();
        }
        else if(exp[i] == ']') { 
            if(stack[top] == '[')
                pop();
            else
                invalid();
        }
        else if(exp[i] == '}') { 
            if(stack[top] == '{')
                pop();
            else
                invalid();
        }
    } 

    if(top == -1) { 
        valid(); 
    } 
    else { 
        invalid(); 
    } 
  
} 

void push(char x) { 
    if(top == N-1) {
        printf("Stack overflow\n");
        invalid();
    }
    else {
        top++;
        stack[top] = x;
    }
} 

void pop() { 
    if(top == -1) {
        printf("Stack underflow\n");
        invalid();
    }
    else {
        top--;
    }
}

void valid() {
    printf("Valid expression. \n");
    exit(0);
}

void invalid() {
    printf("Invalid expression. \n");
    exit(0);
}