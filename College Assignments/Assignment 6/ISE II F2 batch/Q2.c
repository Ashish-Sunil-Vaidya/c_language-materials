/* C program to read two [4x4] matrix elements
    and find its transpose.*/
    //F-60 Ashish Vaidya
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int a[4][4],b[4][4];
    int i,j;
    printf(" Enter the elements in Matrix A :-\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" A[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf(" Matrix A :-\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf(" Transpose of Matrix A :-\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
