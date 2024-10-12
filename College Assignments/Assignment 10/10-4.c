/**(Q.4) Writes C program to read name and marks of n number of students from and store them in a file.
If the file previously exits, add the information to the file.
//F-60 Ashish Vaidya**/
#include<stdio.h>

int main()
{
    int num,i,m[10];
    char n[10];
    printf("Enter the number of students :");
    scanf("%d",&num);
    FILE *fptr;
    fptr=fopen("E:\Study materials\PPS\PRACTICALS\CodeBlocks practicals\Assignment 10\program2.txt","a");
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
