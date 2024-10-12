#include <stdio.h>//link section
#include <stdlib.h>//link section

int main()
{
float SI,P,N,R;//declaration part
printf("Enter the Principal amount(in rupees)\n");//executable part
scanf("%f",&P);
printf("Enter the Time Period(in seconds)\n");//executable part
scanf("%f",&N);
printf("Enter the Rate of Interest\n");//executable part
scanf("%f",&R);
printf("\n");

SI=P*N*R/100;//Formula of simple interest
printf("Simple Interest = %frs\n",SI);//executable part
printf("\n");

return 0;
}/*Activity 2.6: Program to find Simple Interest; 
            F-60 ASHISH VAIDYA.*/






























