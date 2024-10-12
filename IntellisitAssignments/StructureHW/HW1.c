//WAP to accept a record (roll no, name and percentage) of 3 students and print the student names according to their ranks based on percentage obtained.

#include<stdio.h>
#include<stdlib.h>

struct student 
{
    int roll_no;
    char name[20];
    float percentage;
}s[20];

void main()
{
int i,n;
struct student temp;

printf("Enter number of records: ");
scanf("%d",&n);
for(i=0;i<n;++i)
{   
    printf("\n");
    printf("Enter RollNo of student [%d]: ",i+1);//input from user
    scanf("%d",&s[i].roll_no);

    printf("Enter the name of student [%d]: ",i+1);//input from user
    scanf("%s",s[i].name);

    printf("Enter the percentage of the student [%d]: ",i+1);//input from user
    scanf("%f",&s[i].percentage);

}

for(i=0;i<n;++i)//Ouput of all inputs at once
{
    printf("Data Entered of student[%d]:\n\nStudent RollNo: %d\nStudent Name: %s\nStudent percentage: %f\n\n",i+1,s[i].roll_no,s[i].name,s[i].percentage);
}

printf("\n********[LeaderBoards]********\n\n");//code for ranking students in order

 for( i=0;i<n;++i)
    {
    for(int j=1+i;j<3;++j)
         {
         if(s[j].percentage>s[i].percentage)
         {
          temp=s[j];
         s[j]=s[i];
         s[i]=temp;
         }
         }
    }
    
    printf("Name\tRollNo\tPercentage\n");
    for( i=0;i<n;++i)
    {
        printf("%s\t%d\t%.2f\n",s[i].name,s[i].roll_no,s[i].percentage);
    }



}
















// if(s[0].percentage>s[1].percentage && s[0].percentage>s[2].percentage)
// {
//     printf("Rank 1: %s\n",s[0].name);
//     if(s[1].percentage>s[2].percentage)
//     printf("Rank 2: %s\nRank 3: %s",s[1].name,s[2].name);

//     else
//     printf("Rank 2: %s\nRank 3: %s",s[2].name,s[1].name);
// }

// else if(s[1].percentage>s[0].percentage && s[1].percentage>s[2].percentage)
// {
//     printf("Rank 1: %s\n",s[1].name);
//     if(s[0].percentage>s[2].percentage)
//     printf("Rank 2: %s\nRank 3: %s",s[0].name,s[2].name);

//     else
//     printf("Rank 2: %s\nRank 3: %s",s[2].name,s[0].name);
// }

// else
// {
//     printf("Rank 1: %s\n",s[2].name);
//     if(s[1].percentage>s[0].percentage)
//     printf("Rank 2: %s\nRank 3: %s",s[1].name,s[0].name);

//     else
//     printf("Rank 2: %s\nRank 3: %s",s[0].name,s[1].name);
// }