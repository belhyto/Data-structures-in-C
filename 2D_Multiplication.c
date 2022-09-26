#include <stdio.h>
int main()
{
    
    int n,mul,sum ;
    printf("Enter dimension of matrix:\n");
    scanf("%d",&n);
    int mult[n][n],arr1[n][n],arr2[n][n];
    printf("Enter elements of Matrix 1:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
        scanf("%d",&arr1[i][j]);}  
          }
           printf("Enter elements of Matrix 2:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
        scanf("%d",&arr2[i][j]);}  
          }
     printf("Print multiplication of both Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
          for(int k=0;k<n;k++)
          {
           mul+=arr1[i][k]*arr2[k][j];
          }
          mult[i][j]=mul;
          mul=0;

        printf("%d     ",mult[i][j]);
        }
        printf("\n");
    }
}