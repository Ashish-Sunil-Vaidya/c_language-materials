//WAP to calculate the percentage of n-students using function. (Use an array to store marks)

#include<stdio.h>


int i,j,n,marks[6],TMarks[6],sum=0;
float percentage[6];

void students()
{
   printf("Enter no. of Students(n): ");
    scanf("%d",&n);
}

void percent()
{  
  for(i=0;i<n;++i){
    percentage[i]=(float)TMarks[i]/1.8;
    printf("\nPercentage of student [%d] is %.2f\n",i+1,percentage[i]);
 }
}

void TotalMarks()
{   
    
    for(i=0;i<n;++i)
    { 
      sum=0;
      printf("\nEnter marks of student [%d](Out of 30): ",i+1);  
      for(j=0;j<6;++j)
      {
      scanf("%d",&marks[j]);
      sum+=marks[j];
      }
      TMarks[i]=sum;
      printf("The marks of the student [%d] is: %d\n",i+1,TMarks[i]);
      
    }
}

void main()
{
students();
TotalMarks();
percent();
}