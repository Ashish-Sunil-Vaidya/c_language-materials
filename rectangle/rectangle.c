/*Activity 3.5 ;
 To calculate Perimeter and Area of rectangle ;             //Documentation part
 F-60 ASHISH VAIDYA ;
 Date:2nd FEB*/


#include <stdio.h>                                          //link section
#include <stdio.h>                                          //link section

int main()
{
float P,A,l,b;

printf("Enter the lenght and breadth respectively\n");
scanf("%f%f",&l,&b);                                 
printf("\n");

P=2*(l+b);                                                  //Formula for Perimeter of rectangle
printf("Perimeter = %f units \n",P);                        //executable part
printf("\n");

A=l*b;                                                      //Formula for Area of rectangle
printf("Area = %f unit^2 \n",A);                            //executable part
printf("\n");



    return 0;}
