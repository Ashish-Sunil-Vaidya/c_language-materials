#include <stdio.h>

union student
{
    int rollno,marks;
    char Name[10];
     
}s[5];

int main()
{
 int i,n,sum=0;
 float avg;
 printf("Enter the number of students:\n");
 scanf("%^\n%*c",&n);

 printf("Enter the rollno,name and marks of the student:\n");
 for(i=0;i<n;i++)
 {  
    scanf("%d %s %d",&s[i].rollno,&s[i].Name,&s[i].marks);
 }

 printf("The Entered Inforamtion is:\n\n");
 for(i=0;i<n;i++)
 {
    printf("Rollno of the student: %d\n",s[i].rollno);
    printf("Name of the student: %s\n",s[i].Name);
    printf("Marks of the student: %d\n\n",s[i].marks);
 }

 for(i=0;i<n;i++)
 {
     sum=sum+s[i].marks;
 }
 
 avg=sum/n;
 printf("Average=%f",avg);

}