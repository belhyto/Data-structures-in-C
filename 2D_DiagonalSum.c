#include <stdio.h>
int main()
{
    int n,m,sum=0;
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
            if(i==j)
            sum+=arr[i][j];
            printf("%d   ",arr[i][j]);
            }
            printf("\n");
    }
     printf("Sum of diagonal elements of Matrix: %d",sum);
}