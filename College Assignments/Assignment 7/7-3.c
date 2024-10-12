#include <stdio.h>

struct employee
{
    char name[10],designation[10];
    int salary;
     
}s[5];

int main()
{
 int i,f,n,max;
 ;
 printf("Enter the number of employees:\n");
 scanf("%d",&n);

 printf("Enter the name,designation and salary of the employees:\n");
 for(i=0;i<n;i++)
 {  
    scanf("%s%s%d",&s[i].name,&s[i].designation,&s[i].salary);
 }

 printf("The Entered Inforamtion is:\n\n");
 for(i=0;i<n;i++)
 {
    printf("Name of the Employee: %s\n",s[i].name);
    printf("Designation of the Employee: %s\n",s[i].designation);
    printf("Salary of the Employee: %d\n\n",s[i].salary);
 }

 for(i=0;i<n;i++)
 {
     if(max<s[i].salary)
     {
         max=s[i].salary;
         f=i;
     }
     
 }
 
 printf("Maximum salary in all employees is %d is of %s, his designation is %s",max,s[f].name,s[f].designation);

}