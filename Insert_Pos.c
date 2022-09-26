//Delete element at end of array 
#include <stdio.h>
#define max 20
int main()
{
    int arr[max], lim,num=0,pos;
    printf("Enter limit:\n");
    scanf("%d",&lim);
     printf("\nEnter element to insert:\n");
    scanf("%d",&num);
    printf("Enter position to insert element:\n");
    scanf("%d",&pos);
    pos--;
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
     //shifts array backwards using reversing for loop 
      for(int i=lim;i>=pos;i--)  
    {
        arr[i]=arr[i-1];// shifting elements backward
    }
    arr[pos]=num; //adding new element at beginning
     printf("\nArray after insertion:\n");
      for(int i=0;i<lim+1;i++)  //arrays index increases by 1 
    {
        printf("%d", arr[i]);
    }

}