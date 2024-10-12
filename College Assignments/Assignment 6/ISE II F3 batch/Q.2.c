/*C program to read two [3 x 3] matrix elements
   and perform the subtraction of them. */
//Ashish Vaidya
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][3],b[3][3],s[3][3];
    int i,j;
    printf(" Enter the elements in Matrix A :-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" A[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf(" Enter the elements in Matrix B :-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" B[%d][%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf(" Matrix A :-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d\t",a[i][j]);
        }
        printf("\n");
    }
    printf(" Matrix B :-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s[i][j] = a[i][j] - b[i][j];
        }
    }
    printf(" Subtraction Of matrices :-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d\t",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
