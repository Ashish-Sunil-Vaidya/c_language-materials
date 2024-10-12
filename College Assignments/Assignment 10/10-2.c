//F-60 Ashish Vaidya
//(Q.2) Write a C program to read a text file.
#include <stdio.h>

int main()
{
    int num;

    FILE *fptr;

    fptr=fopen("E:\Study materials\PPS\PRACTICALS\CodeBlocks practicals\Assignment 10\Program.txt","r");

    if (fptr==NULL)
    {
        printf("Error");
        exit(1);
    }

    fscanf(fptr,"%d",&num);
    printf("Value=%d",num);
    fclose(fptr);
    return 0;



}
