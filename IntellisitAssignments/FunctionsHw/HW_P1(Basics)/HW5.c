//WAP to accept n-student records and print the desired record, using function. (Use structure and array to store student records).


//WAP to accept a record (roll no, name and percentage) of 3 students and print the student names according to their ranks based on percentage obtained.

#include<stdio.h>


struct student 
{
    int roll_no;
    char name[20];
    float percentage;
   
}s[3];


int i;

void output()
{   
    for(i=0;i<3;++i)
    printf("\nData Entered of student[%d]:\n\nStudent RollNo: %d\nStudent Name: %s\nStudent percentage: %.2f\n\n",i+1,s[i].roll_no,s[i].name,s[i].percentage);
}

void studentdata()
{

for(i=0;i<3;++i)
{
    printf("Enter RollNo of student [%d]: ",i+1);//input from user
    scanf("%d",&s[i].roll_no);

    printf("Enter the name of student [%d]: ",i+1);//input from user
    scanf("%s",s[i].name);

    printf("Enter the percentage of the student [%d]: ",i+1);//input from user
    scanf("%f",&s[i].percentage);
}
}



void main()
{
studentdata();
output();
}