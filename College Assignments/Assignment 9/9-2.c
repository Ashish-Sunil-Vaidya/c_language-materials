#include <stdio.h>

int main()
{
 int n1,n2;
 int *p1=&n1;
 int *p2=&n2;

 printf("Enter the two numbers:\n");
 scanf("%d%d",&n1,&n2);

int add=*p1+*p2;
int sub=*p1-*p2;
int mul=*p1 * *p2;
int div=*p1 / *p2;

printf("addition of the numbers: %d\n",add);
printf("substraction of the two numbers: %d\n",sub);
printf("multiplication of the two numbers: %d\n",mul);
printf("Division of the two numbers: %d\n",div);

}
