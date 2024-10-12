//WAP to find the percentage of the student using an array in the function.

#include <stdio.h>

float Total_Marks(float marks[])
{
 int i,sum=0.0;
 for(i=0;i<6;++i)
 sum+=marks[i];
 return sum;
}

float percentage(float *marks)
{   
    
    return Total_Marks(marks)*100/180;
}

void main()
{
    int i;
float marks[6];
printf("Enter Marks: ");
for(i=0;i<6;++i)
scanf("%f",&marks[i]);
printf("Percentage: %g",percentage(marks));
}