//F-60 Ashish Vaidya
//(Q.1) Write a C program to write text to file.

#include <stdio.h>

int main()
{
    int num;
    FILE *fptr;

    fptr=fopen("E:\Study materials\PPS\PRACTICALS\CodeBlocks practicals\Assignment 10\program.txt","w");
    if(fptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter the number\n");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;

}