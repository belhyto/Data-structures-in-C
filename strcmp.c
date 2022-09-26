#include <stdio.h>
#define n 100
int main() {
    char str1[n], str2[n],i,j;
     int diff;
    printf("Enter string 1: ");
    scanf("%s",&str1);
     printf("Enter string 2: ");
    scanf("%s",&str2);
      printf("Comparing strings without libary functions:");
    for( i=0;str1[i]==str2[i]&&str1[i]=='\0';i++); //goes to the last index of str(null char /0)
      if(str1[i] < str2[i])
   	{
        diff= str1[i]-str2[i];
   		printf("\n str1 is less than str2 by %d ",diff);
	}
	else if(str1[i] > str2[i])
   	{
         diff= str1[i]-str2[i];
   		printf("\n str2 is less than  %d ",diff);
	}
	else
   	{
   		printf("\n str1 is equal to str2");
	}

  
}