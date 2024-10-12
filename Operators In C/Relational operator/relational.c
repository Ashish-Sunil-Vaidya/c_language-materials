#include <stdio.h>//link section
#include <stdlib.h>//link section

int main()
{
    int a,b,c;//declaration part
    printf("Enter the numbers\n");//exectutable part
    scanf("%d%d",&a,&b);
    printf("\n");

    c=(a==b);
    printf("Truth Value of (a==b)= %d\n",c);//exectutable part
    c=(a!=b);
    printf("Truth Value of (a!=b)= %d\n",c);//exectutable part
    c=(a<b);
    printf("Truth value of (a<b)= %d\n",c);//exectutable part
    c=(a>b);
    printf("Truth value of (a>b)= %d\n",c);//exectutable part
    c=(a<=b);
    printf("Truth value of (a<=b)= %d\n",c);//exectutable part
    c=(a>=b);
    printf("Truth value of (a>=b)= %d\n",c);//exectutable part
    printf("\n");

    return 0;

}/*Activity 2.3:Program to use "Relational operators";
 F-60 ASHISH VAIDYA.*/
