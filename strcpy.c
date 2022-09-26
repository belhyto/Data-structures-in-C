#include <stdio.h>
#define n 100
int main() {
    char str1[n], str2[n],i;
    printf("Enter string 1: ");
    scanf("%s",&str1);

    for( i=0;str1[i]!='\0';i++) //for loop from first char to last char (null char /0)
    {
        str2[i] = str1[i];
    }
    str2[i]='\0';
    printf("String copy without libary functions: %s",str2);
}