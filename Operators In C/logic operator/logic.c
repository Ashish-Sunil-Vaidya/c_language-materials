#include <stdio.h>//link section
#include <stdlib.h>//link section

int main()
{
 int a,b,c,c1,c2;//declaration part

    printf("Enter the values\n");//executable part 
    scanf("%d%d",&a,&b);
    printf("\n");

    c=(a&&b);
    printf("AND Operation= %d\n",c);//executable part 

    c=(a||b);
    printf("OR Operation= %d\n",c);//executable part 

    c1=(!a);
    c2=(!b);
    printf("NOT Operations: a=%d b=%d\n",c1,c2);//executable part 
    printf("\n");

 return 0;
 }/*Activity 2.2:Progarm to use "LOGIC operators";
  F-60 ASHISH VAIDYA.*/

