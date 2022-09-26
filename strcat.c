#include <stdio.h>
#define n 100
int main() {
    char str1[n], str2[n],i,j;
    printf("Enter string 1: ");
    scanf("%s",&str1);
     printf("Enter string 2: ");
    scanf("%s",&str2);
    for( i=0;str1[i]!='\0';++i); //goes to the last index of str(null char /0)

            for(j=0; str2[j]!='\0'; ++j,++i) //countinue loop with putting str2 after str1
             str1[i]=str2[j];

    str1[i]='\0'; //close the string with null
    printf("String concatenate without libary functions: %s",str1);
}