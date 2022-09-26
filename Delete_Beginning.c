//Delete element at end of array 
#include <stdio.h>
#define max 5
int main()
{
    int arr[max], lim;
    printf("Enter limit:\n");
    scanf("%d",&lim);
    //data overflow check
    printf("Enter elements of array:\n");
    for(int i=0;i<lim;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Array before deletion:\n");
    for(int i=0;i<lim;i++)
    {
        printf("%d", arr[i]);
    }

    lim--; //removes empty space at end
     printf("\nArray after deletion:\n");
      for(int i=0;i<lim;i++)
    {
         arr[i]=arr[i+1]; //shifting elements one step forward 
        printf("%d", arr[i]);
    }
}