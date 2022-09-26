#include <stdio.h>
int main()
{
    int n,m,asum=0,bsum=0,sum=0;
    printf("Enter number of rows of matrix:\n");
    scanf("%d",&n);
    printf("Enter number of columns of matrix:\n");
    scanf("%d",&m);
    int arr[n][m]; 
    
    printf("Enter elements of Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
        scanf("%d",&arr[i][j]);}  
          }


            printf("Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            if(i<j)
            asum+=arr[i][j];
            if(i>j)
            bsum+=arr[i][j];
            printf("%d   ",arr[i][j]);
            }
            printf("\n");
    }
     printf("Sum of elements above diagonal of Matrix: %d\n",asum);
     printf("Sum of elements below diagonal of Matrix: %d\n",bsum);
     printf("Sum of elements above and below diagonal of Matrix: %d",asum+bsum);
}