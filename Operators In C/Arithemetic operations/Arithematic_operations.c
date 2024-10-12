#include <stdio.h> //link section
#include <stdlib.h>//link section

int main()
{
    int a,b,c;//declartion part

    printf("Enter the numbers\n");//executable part
    scanf("%d%d",&a,&b);
    printf("\n");
    c=a+b;  
    printf("ADDITION of two numbers=%d\n",c);//executable part
    c=a-b;
    printf("SUBSTRACTION of two numbers=%d\n",c);//executable part
    c=a*b;
    printf("MULTIPLICATION of two numbers=%d\n",c);//executable part
    c=a/b;
    printf("DIVISION of two numbers=%d\n",c);//executable part 
    c=a%b;
    printf("MOD of two numbers=%d\n",c);//executable part
    printf("\n");

return 0;
} /*Activity 2.1: Program for using "Arthematic operators";
 F-60 ASHISH VAIDYA.*/
