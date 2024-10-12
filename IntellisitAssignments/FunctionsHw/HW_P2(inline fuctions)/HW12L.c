//WAP to perform addition, subtraction and multiplication of the given matrix. Write 3 separate functions for addition, subtraction, and multiplication of matrices.


#include<stdio.h>
#include<stdlib.h>
#define Size 10


void mat_add();
void mat_sub();
void mat_mul();



void main()
{
    int matA[Size][Size],matB[Size][Size],no,i,j;

   
    printf("Enter the size of the square matrix: \n");
    scanf("%d",&no);

    printf("Enter the elements in the %d * %d matrix [A]\n",no,no);
    for(i=0;i<no;++i)
    for(j=0;j<no;++j)
     scanf("%d",&matA[i][j]);

    printf("Enter the elements in the %d * %d matrix [B]\n",no,no);
    for(i=0;i<no;++i)
    for(j=0;j<no;++j)
     scanf("%d",&matB[i][j]);

    

    printf("\n\n[Addition]\n");
    mat_add(matA,matB,no);

    printf("\n\n[Substraction]\n");
    mat_sub(matA,matB,no);

    printf("\n\n[Mutiplication]\n");
    mat_mul(matA,matB,no);


  
}



void mat_add(int matA[][Size],int matB[][Size],int no)
{   
    int i,j,sum[10][10];

    for(i=0;i<no;++i)
    for(j=0;j<no;++j)
    sum[i][j]= matA[i][j] + matB[i][j];

     for(i=0;i<no;++i)
    {
    printf("\n");
    for(j=0;j<no;++j)
    printf(" %d ",sum[i][j]);
    }
}

void mat_sub(int matA[][Size],int matB[][Size],int no)
{   
    int i,j,diff[10][10];

    for(i=0;i<no;++i)
    for(j=0;j<no;++j)
    diff[i][j]= matA[i][j] - matB[i][j];

     for(i=0;i<no;++i)
    {
    printf("\n");
    for(j=0;j<no;++j)
    printf(" %d ",diff[i][j]);
    }
    
}

void mat_mul(int matA[][Size],int matB[][Size],int no)
{   
    int i,j,k,prdt[10][10];

   
    for(i=0;i<no;i++)  
    for(k=0;k<no;k++)
    {
        prdt[i][k]=0;
        for(j=0;j<no;j++)
        prdt[i][k] = prdt[i][k] + (matA[i][j] * matB[j][k]) ;   
    }

     for(i=0;i<no;++i)
    {
    printf("\n");
    for(k=0;k<no;++k)
    printf(" %d ",prdt[i][k]);
    }
}

