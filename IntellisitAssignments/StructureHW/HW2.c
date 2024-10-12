//WAP to accept the date of birth within the structure from the user and check whether the inputted date is valid or not.


#include<stdio.h>
#include<stdlib.h>

struct DOB
{
    int day,month,year;
    
}DOB;

enum Months {January=1,February=2,March=3,April=4,May=5,June=6,July=7,August=8,September=9,October=10,November=11,December=12};//enum for making cases understandable
void main()
{
    int flag=1;//flag for whether to give Input or error, default set to 1(input)
    
printf("Enter The Date in DD/MM/YYYY\n");
scanf("%d %d %d",&DOB.day,&DOB.month,&DOB.year);//Input from the user

switch(DOB.month)//If date exceeds the no max days in a month then it will give error output
{
    case January:
    if(DOB.day>31) 
    flag=0;
    break;

    case February:
    if(DOB.year%4==0)//If leap year max days is set to 29
    {
     if(DOB.day>29) flag=0;   
    }
    
    else//if normal year max days set to 28
    {
    if(DOB.day>28) 
    flag=0;
    }
    break;

    case March:
    if(DOB.day>31) 
    flag=0;
    break;

    case April:
    if(DOB.day>30) 
    flag=0;
    break;

    case May:
    if(DOB.day>31) 
    flag=0;
    break;

    case June:
    if(DOB.day>30) 
    flag=0;
    break;

    case July:
    if(DOB.day>31) 
    flag=0;
    break;

    case August:
    if(DOB.day>31) 
    flag=0;
    break;

    case September:
    if(DOB.day>3) 
    flag=0;
    break;

    case October:
    if(DOB.day>31) 
    flag=0;
    break;

    case November:
    if(DOB.day>30) 
    flag=0;
    break;

    case December:
    if(DOB.day>31) 
    flag=0;
    break;
   
  default:
  printf("Month does not exist");
  break;
}

switch(flag)
{
case 0: printf("Invalid Date of Birth");
break;
case 1: printf("Your entered date of birth is: %d/%d/%d",DOB.day,DOB.month,DOB.year);
break;
}
}