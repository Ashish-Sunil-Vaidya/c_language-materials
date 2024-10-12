#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main() {
	int a,b,c;
    char operator;

do
{
printf("\nCalulator 3000: ");
scanf("%d %c",&a,&operator);


switch(operator)
{
case '+':

 scanf("%d",&b);
c=a+b;
printf("-->%d",c);
 
break;

case '-':

 scanf("%d",&b);
c=a-b;
printf("-->%d",c);
break;

case '*':

 scanf("%d",&b);
c=a*b;
printf("-->%d",c);
break;

case '/':

 scanf("%d",&b);
c=a/b; 
printf("-->%d",c);
break;

case '%':

 scanf("%d",&b); 
c=a%b;
printf("-->%d",c);
break;

default: printf("Error");
 }
}while(1);   
}