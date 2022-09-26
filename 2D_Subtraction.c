#include <stdio.h>
int main()
{
        int n,m;
    printf("Enter number of rows of matrix:\n");
    scanf("%d",&n);
    printf("Enter number of columns of matrix:\n");
    scanf("%d",&m);
    int arr1[n][m],arr2[n][m];
    printf("Enter elements of Matrix 1:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
        scanf("%d",&arr1[i][j]);}  
          }
           printf("Enter elements of Matrix 2:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
        scanf("%d",&arr2[i][j]);}  
          }
     printf("Print difference of both Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
        printf("%d   ",arr1[i][j]-arr2[i][j]);}
        printf("\n");
    }
}