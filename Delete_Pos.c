//Delete element at end of array 
#include <stdio.h>
#define max 5
int main()
{
    int arr[max], lim,pos ;
    printf("Enter limit:\n");
    scanf("%d",&lim);
    printf("Enter position to delete element:\n");
    scanf("%d",&pos);
    pos--;
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
        if(i>=pos) //shifiting elements after desired position
         arr[i]=arr[i+1];
        printf("%d", arr[i]);
    }
}