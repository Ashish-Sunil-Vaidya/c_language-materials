
/* C program to read two [3 x 3] matrix elements and
    perform the addition of them.*/
    //F-60 Ashish Vaidya

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5][5],B[5][5],C[5][5],i,j,n=3;

    /*printf("Enter the amount of rows and coloumns:");
    scanf("%d",&n);*/


    printf("Enter the Elements for Matrix A:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            scanf("%d",&A[i][j]);
        }
        
    }

    printf("\n");
    printf("Matrix A is:\n");
    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Enter the Elements for Matrix B:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            scanf("%d",&B[i][j]);
        }
    }
    
    printf("\n");
    printf("Matrix B is:\n");
    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t ",B[i][j]);
        }
        printf("\n");
    }
    //-----------------------------------------------------------------------------------------------------
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            C[i][j]=(A[i][j]+B[i][j]);
        }
    }
    
    printf("\n");
    printf("Sum of the matrix is:\n");
    printf("\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t ",C[i][j]);
        }
        printf("\n");
    }
     printf("\n");
}