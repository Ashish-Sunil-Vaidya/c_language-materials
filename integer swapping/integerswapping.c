/*Activity 3.4 ;
 Swapping integers ;                                   //Documentation part
 F-60 ASHISH VAIDYA ;
 Date:2nd FEB*/

#include <stdio.h>                                     //link section                                       
#include <stdlib.h>                                    //link section

int main()
{
    float a,b;                                         //declaration part

    printf("Enter your first and second value\n");     //executable part
    scanf("%f%f",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("first swaped integer = %f\n",a);           //executable part          
    printf("Second swaped integer = %f\n",b);          //executable part
    printf("\n");
    return 0;


    
}












