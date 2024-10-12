//WAP to accept the date of birth within the structure object of the user and print his/her current age.

#include<stdio.h>
#include<stdlib.h>

struct Age
{
    int c_day,c_mon,c_yr;
    int b_day,b_mon,b_yr;
    int days,leapdays;
    float years;
}D;


int main()
{
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int i,sumC=0,sumB=0;
printf("Enter todays date (DD/MM/YYYY): ");
scanf("%d%d%d",&D.c_day,&D.c_mon,&D.c_yr); //Input in date format by the user 

printf("Enter birth date (DD/MM/YYYY): ");
scanf("%d%d%d",&D.b_day,&D.b_mon,&D.b_yr); //Input in date format by the user

//Calculating age in days

for(i=D.c_mon;i<12;++i)
 {
 sumC+=month[i];
 }

 for(i=D.b_mon;i<12;++i)
 {
 sumB+=month[i];
 }

D.leapdays=(D.c_yr-D.b_yr)/4;//This wil give amount of extra +1 of 366 days n times.

/**Formula summary**: Remaining days in current year + Years(in days) between current and birth year + 
extra days of leap years between them + remaining days of birth year       (created by Ashish)**/


D.days=((month[D.c_mon]-D.c_day) + sumC ) + (365*(D.c_yr-D.b_yr-1)+D.leapdays) + ((month[D.b_mon]-D.b_day) + sumB );

printf("Age in days= %d",D.days);//Output in days

//Days to years conversion

D.years=(float)D.days/(365.25);// 0.25 of leap days

printf("\nAge in years= %.2f",D.years);//Output in years

return 0;
}