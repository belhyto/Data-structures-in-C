//Delete element at end of array 
#include <stdio.h>
#define max 20
int main()
{
    int arr[max], lim,num=0;
    printf("Enter limit:\n");
    scanf("%d",&lim);
     printf("\nEnter element to insert:\n");
    scanf("%d",&num);
    //data overflow check
    printf("Enter elements of array:\n");
    for(int i=0;i<lim;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Array before insertion:\n");
    for(int i=0;i<lim;i++)
    {
        printf("%d", arr[i]);
    }
    arr[lim]=num; //adds new element at end
     printf("\nArray after insertion:\n");
      for(int i=0;i<lim+1;i++)  //arrays index increases by 1 
    {
        printf("%d", arr[i]);
    }
}