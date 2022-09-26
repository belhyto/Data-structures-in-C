#include <stdio.h>
#define n 100
int main() {
    char str1[n],i;
    int counter=0;
    printf("Enter string 1: ");
    scanf("%s",&str1);
    for( i=0;str1[i]!='\0';++i)
    {
      counter++;
    } 

    printf("Find length of string without libary functions: %d",counter);
}