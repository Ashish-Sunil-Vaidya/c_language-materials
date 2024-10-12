/* C program to read two [2 x 2] matrix elements
    and perform the subtraction of them.  */
    //F-60 Ashish Vaidya
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[2][2],b[2][2],s[2][2];
    int i,j;
    printf(" Enter the elements in Matrix A :-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           
            scanf("%d",&a[i][j]);
        }
    }
    printf(" Enter the elements in Matrix B :-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            scanf("%d",&b[i][j]);
        }
    }
    printf(" Matrix A :-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d\t",a[i][j]);
        }
        printf("\n");
    }
    printf(" Matrix B :-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            s[i][j] = a[i][j] - b[i][j];
        }
    }
    printf(" SubtractionD Of matrices :-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d\t",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
