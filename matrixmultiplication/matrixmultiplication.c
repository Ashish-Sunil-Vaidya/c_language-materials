#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[4][4],B[4][4],C[4][4],i,j,k,rA,cA,rB,cB,rcC;

    //for matrix A
    printf("Enter the rows and coloumns of matrix A\n");
    scanf("%d%d",&rA,&cA);

    //for matrix B
    printf("Enter the rows and coloumns of matrix B\n");
    scanf("%d%d",&rB,&cB);

    if(cA==rB){ 
    printf("Enter the Elements for Matrix A:\n");
    
    rcC=cA;
    for(i=0;i<rA;i++)
        for(j=0;j<cA;j++)      
            scanf("%d",&A[i][j]);     
    
    printf("\n\nMatrix A is:\n\n");
  
    for(i=0;i<rA;i++)
    {   
        printf("\n");
        for(j=0;j<cA;j++)
           printf("%d\t ",A[i][j]);        
    }

    printf("\n\nEnter the Elements for Matrix B:\n");

    for(j=0;j<rB;j++)
        for(k=0;k<cB;k++)
            scanf("%d",&B[j][k]);
        
    printf("\n\nMatrix B is:\n\n");

    for(j=0;j<rB;j++)
    {
        printf("\n");
        for(k=0;k<cB;k++)
           printf("%d\t ",B[j][k]);      
    }
       
    printf("\n\nMultiplication of the matrix is:\n\n");

    
   
    for(i=0;i<rA;i++)  
        for(k=0;k<cB;k++)
        {
            C[i][k]=0;
            for(j=0;j<rcC;j++)
            C[i][k] = C[i][k] + (A[i][j] * B[j][k]) ;   
        }
    
    for(i=0;i<rA;i++)
    {
        printf("\n");
        for(k=0;k<cB;k++)
           printf("%d\t ",C[i][k]);       
    }
     printf("\n");
    }

    else printf("The input dimensions of matrices do not follow rules of matrix multiplication");
}
