//(Q.3) Write a C program to read name and marks of n number of students and store them in a file.
//F-60 Ashish Vaidya
#include<stdio.h>

int main()
{
    int num,i,m[10];
    char n[10];
    printf("Enter the number of students :");
    scanf("%d",&num);
    FILE *fptr;
    fptr=fopen("E:\Study materials\PPS\PRACTICALS\CodeBlocks practicals\Assignment 10\program2.txt","w");
      printf("Enter the Name and Marks of the student:\n");
    for(i=0;i<num;i++)
    {
        printf("Info of student[%d]: ",i+1);
        scanf("%s %d",&n,&m[i]);
        fprintf(fptr,"Name: %s , Marks: %d\n",n,m[i]);
    }
    fclose(fptr);
    return 0;
}
